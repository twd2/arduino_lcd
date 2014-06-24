#if !defined(USE_LCD) && defined(LCD_CS) && defined(LCD_RST) && defined(LCD_AO)
#define USE_LCD

#include "lcd.h"

#define uiabs(a) ((unsigned int)((a)>0?(a):(-(a))))

double temp=0, humi=0, dist=0;
unsigned int illu=0;

unsigned int wendu[]={2, 3, 0xFFFF};
unsigned int du[]={1, 0xFFFF};
unsigned int shidu[]={4, 3, 0xFFFF};
unsigned int guangzhao[]={5, 6, 0xFFFF};
unsigned int juli[]={7, 8, 0xFFFF};
unsigned int benjidizhi[]={9, 10, 13, 14, 0xFFFF};
unsigned int fasongzhong[]={15, 16, 17, 0xFFFF};
unsigned int chushihuazhong[]={18, 19, 20, 17, 0xFFFF};

char addr[4];
char buff[10];

LCD lcd(LCD_CS, LCD_RST, LCD_AO);

void toString(unsigned int number, bool isneg, char *data, int count, char padding)
{
    unsigned int oldnumber=number;
    for(int i=1;i<=count;++i)
    {
        data[count-i]=(number%10)+'0';
        number/=10;
    }
    for(int i=0;i<count;++i)
    {
        if(data[i]=='0')
        {
            if(i!=count-1)
                data[i]=padding;
        }
        else
        {
            if(isneg && i-1>=0 && padding!='0') data[i-1]='-';
            break;
        }
    }
    if(oldnumber==0 && isneg && count-2>=0 && padding!='0') data[count-2]='-';
    data[count]='\0';
}

void initLCD()
{
    //snprintf(addr, sizeof(addr), "%d", ADDRESS);
    toString(ADDRESS, ADDRESS<0, addr, 3, ' ');
    lcd.init();
}

void showInit()
{
    lcd.clear();
    lcd.putBigString(0,0,chushihuazhong);
    lcd.putBigString(2,0,benjidizhi);
    lcd.putAsciiString(2,72,addr);
}

void showSending()
{
    lcd.clear();
    lcd.putBigString(0,0,fasongzhong);
    lcd.putBigString(2,0,benjidizhi);
    lcd.putAsciiString(2,72,addr);
}

void showData()
{
    //lcd.clear();
    lcd.putBigString(0,0,wendu);
    lcd.putBigString(2,0,shidu);
    lcd.putBigString(4,0,guangzhao);
    lcd.putBigString(6,0,juli);
    
    
    toString(uiabs(temp), temp<0, buff, 4, ' ');
    lcd.putAsciiString(0,56,buff);
    lcd.putAsciiString(0,88,".");
    toString(uiabs(temp*100), temp<0, buff, 2, '0');
    lcd.putAsciiString(0,96,buff);
    lcd.putBigString(0,112,du);
    lcd.putAsciiString(0,120,"C");
    
    toString(uiabs(humi), humi<0, buff, 3, ' ');
    lcd.putAsciiString(2,72,buff);
    lcd.putAsciiString(2,96,".");
    toString(uiabs(humi*100), humi<0, buff, 2, '0');
    lcd.putAsciiString(2,104,buff);
    lcd.putAsciiString(2,120,"%");
    
    toString(illu, illu<0, buff, 5, ' ');
    lcd.putAsciiString(4,64,buff);
    lcd.putAsciiString(4,104,"lux");
    
    toString(uiabs(dist), dist<0, buff, 3, ' ');
    lcd.putAsciiString(6,64,buff);
    lcd.putAsciiString(6,88,".");
    toString(uiabs(dist*100), dist<0, buff, 2, '0');
    lcd.putAsciiString(6,96,buff);
    lcd.putAsciiString(6,112,"cm");
}

#endif
