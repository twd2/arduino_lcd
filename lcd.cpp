#include "lcd.h"

LCD::LCD(int cs_pin, int reset_pin, int ao_pin)
{
    this->cs_pin=cs_pin;
    this->reset_pin=reset_pin;
    this->ao_pin=ao_pin;
    pinMode(cs_pin, OUTPUT);
    pinMode(reset_pin, OUTPUT);
    pinMode(ao_pin, OUTPUT);
}

void LCD::set_cs(bool val) //低有效
{
    digitalWrite(cs_pin, val);
}

void LCD::set_reset(bool val) //低有效
{
    digitalWrite(reset_pin, val);
}

void LCD::set_ao(bool val) //H: data, L: command
{
    digitalWrite(ao_pin, val);
}

void LCD::sendCommand(int cmd)
{
    set_ao(AO_COMMAND);
    set_cs(LOW);
    SPIbegin();
    SPI.transfer(cmd);
    SPIend();
    set_cs(HIGH);
}

void LCD::sendData(int data)
{
    set_ao(AO_DATA);
    set_cs(LOW);
    SPIbegin();
    SPI.transfer(data);
    SPIend();
    set_cs(HIGH);
}

void LCD::init()
{
    for(int i=2;i!=0;--i)
    {
        set_reset(LOW);
        delay(5);
        set_reset(HIGH);
        delay(10);
        sendCommand(0xe2); delay(15);  //Soft rest
        sendCommand(0xa3); delay(15);  //Set LCD bias(A2-1/9bias; A3-1/7bias)
        sendCommand(0xa1); delay(15);  //LCD反向显示，此LCD需要反向显示
        sendCommand(0xc8); delay(15);  //Set COM OUTPUT SCAN DIRECTION(0XXXB-NORMAL)-POR  COM63-->COM0
        sendCommand(0xa4); delay(15);  //LCD为Normal mode
        sendCommand(0xa6); delay(15);  //正常显示 0xa7为反白显示
        sendCommand(0x2f); delay(15);  //设置内部电路的电源 默认为0x2F
        sendCommand(0x40); delay(15);  //设置行地址从0x00开始
        sendCommand(0b00100010); delay(15);  //设置对比度
        sendCommand(0x81); delay(15);
        sendCommand(0x28); delay(15);  //设置Lcd亮度。//5V工作时设置为0x28 3.3V工作时设为0x30
        sendCommand(0xaf); delay(15);  //打开显示
        clear();                      //清除显示
        delay(100);
    }
}

void LCD::set_page(int page, int column)
{
    int lowcol, highcol;
    lowcol=(column&0b00001111)|0b00000000; //Column Address Set Low
    highcol=((column>>4)&0b00001111)|0b00010000; //Column Address High
    page=(page&0b00001111)|0b10110000; //Page Address Set
    sendCommand(page);
    sendCommand(highcol);
    sendCommand(lowcol);
}

void LCD::clear()
{
    for(int y=0;y<64/8;++y)
    {
        set_page(y, 0);
        for(int x=0;x<128;++x)
        {
            sendData(0);
        }
    }
}

bool LCD::putAsciiChar(int page, int col, char c)
{
    if(c<' ' || c>'~') return false;
    PROGMEM unsigned char *data=&asciicharlib[c-' '][0];
    for(int y=0;y<ASCIICHAR_H/8;++y)
    {
        set_page(y+page, col);
        for(int x=0;x<ASCIICHAR_W;++x)
        {
            sendData(pgm_read_byte_near(&data[y*ASCIICHAR_W+x]));
        }
    }
    return true;
}

void LCD::putAsciiString(int page, int col, char *c)
{
    for(char *ch=c; *ch!='\0'; ++ch)
    {
        if(*ch=='\n')
        {
            page+=ASCIICHAR_H/8;
            col=0;
        }
        else
        {
            putAsciiChar(page, col, *ch);//?true:putAsciiChar(page, col, ' ');
            col+=ASCIICHAR_W;
        }
    }
}

void LCD::putBigChar(int page, int col, unsigned int c)
{
    PROGMEM unsigned char *data=&bigcharlib[c*2][0];
    for(int y=0;y<BIGCHAR_H/8;++y)
    {
        set_page(y+page, col);
        for(int x=0;x<BIGCHAR_W;++x)
        {
            sendData(pgm_read_byte_near(&data[y*BIGCHAR_W+x]));
        }
    }
}

void LCD::putBigString(int page, int col, unsigned int *c)
{
    for(unsigned int *ch=c; *ch!=0xFFFF; ++ch)
    {
        if(*ch==0xFFFE)
        {
            page+=BIGCHAR_H/8;
            col=0;
        }
        else
        {
            putBigChar(page, col, *ch);
            col+=BIGCHAR_W;
        }
    }
}

void SPIbegin()
{
    SPI.begin();
    SPI.setBitOrder(MSBFIRST);
}

void SPIend()
{
    SPI.end();
}
