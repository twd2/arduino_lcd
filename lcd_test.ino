#define ADDRESS        21L
#define LCD_CS A3
#define LCD_RST A2
#define LCD_AO A0

#include "use_lcd.h"
#include <SPI.h>

char *ln1, *ln2, *ln3, *ln4;

void readline(char * buffer, int maxlength)
{
  int i=0;
  for(;i<maxlength;++i)
  {
    while((buffer[i]=Serial.read())<0);
    if(i>=1 && buffer[i]=='\n')
    {
      break;
    }
  }
  if(i>=maxlength)
  {
    //while(Serial.read()!='\n');
  }
  if(i>=1 && buffer[i-1]=='\r') buffer[i-1]='\0';
  buffer[i]='\0';
}

void padding(char * buffer, int length, char padding)
{
  bool state=false;
  for(int i=0;i<length;++i)
  {
    if(buffer[i]=='\0') state=true;
    if(state) buffer[i]=padding;
  }
  buffer[length-1]='\0';
}

void setup()
{
  Serial.begin(9600);
  initLCD();
  //showInit();
  //delay(1000);
  lcd.clear();
  ln1=new char[20];
  ln2=new char[20];
  ln3=new char[20];
  ln4=new char[20];
  memset(ln1, 0, sizeof(ln1));
  memset(ln2, 0, sizeof(ln2));
  memset(ln3, 0, sizeof(ln3));
  memset(ln4, 0, sizeof(ln4));
  padding(ln1, 20, ' ');
  padding(ln2, 20, ' ');
  padding(ln3, 20, ' ');
  padding(ln4, 20, ' ');
}

void loop()
{
    //showData();
    //delay(3000);
    //illu=millis()/100;
    //showSending();
    //delay(100);
    lcd.putAsciiString(0,0,ln1);
    lcd.putAsciiString(2,0,ln2);
    lcd.putAsciiString(4,0,ln3);
    lcd.putAsciiString(6,0,ln4);
    readline(ln1, 16);
    padding(ln1, 20, ' ');
    char *tmp=ln1;
    ln1=ln2;
    ln2=ln3;
    ln3=ln4;
    ln4=tmp;
}
