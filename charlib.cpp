#include "charlib.h"

PROGMEM unsigned char asciicharlib[][16]=
{
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*" ",0*/
    {0x00,0x00,0x70,0xF8,0xF8,0x70,0x00,0x00,0x00,0x00,0x00,0x0D,0x0D,0x00,0x00,0x00},/*"!",1*/
    {0x00,0x38,0x38,0x00,0x00,0x38,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*""",2*/
    {0x00,0x20,0xF8,0xF8,0x20,0xF8,0xF8,0x20,0x00,0x02,0x0F,0x0F,0x02,0x0F,0x0F,0x02},/*"#",3*/
    {0x00,0x30,0x78,0xCE,0x8E,0x18,0x10,0x00,0x00,0x04,0x0C,0x38,0x39,0x0F,0x06,0x00},/*"$",4*/
    {0x18,0x3C,0x24,0xBC,0xD8,0x60,0x30,0x00,0x00,0x06,0x03,0x0D,0x1E,0x12,0x1E,0x0C},/*"%",5*/
    {0x00,0xB0,0xF8,0x48,0x78,0x30,0x00,0x00,0x00,0x07,0x0F,0x08,0x09,0x07,0x0F,0x09},/*"&",6*/
    {0x00,0x00,0x00,0x38,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"'",7*/
    {0x00,0x00,0xC0,0xF0,0x38,0x08,0x00,0x00,0x00,0x00,0x07,0x1F,0x38,0x20,0x00,0x00},/*"(",8*/
    {0x00,0x00,0x08,0x38,0xF0,0xC0,0x00,0x00,0x00,0x00,0x20,0x38,0x1F,0x07,0x00,0x00},/*")",9*/
    {0x00,0x80,0xA0,0xE0,0xC0,0xE0,0xA0,0x80,0x00,0x00,0x02,0x03,0x01,0x03,0x02,0x00},/*"*",10*/
    {0x00,0x80,0x80,0xE0,0xE0,0x80,0x80,0x00,0x00,0x00,0x00,0x03,0x03,0x00,0x00,0x00},/*"+",11*/
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2C,0x3C,0x1C,0x00,0x00},/*",",12*/
    {0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"-",13*/
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x0C,0x0C,0x00,0x00},/*".",14*/
    {0x00,0x00,0x00,0x80,0xE0,0x78,0x18,0x00,0x00,0x18,0x1E,0x07,0x01,0x00,0x00,0x00},/*"/",15*/
    {0x00,0x00,0xF0,0xF8,0x08,0x68,0xF8,0xF0,0x00,0x00,0x07,0x0F,0x0B,0x08,0x0F,0x07},/*"0",16*/
    {0x00,0x20,0x20,0x30,0xF8,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x0F,0x00,0x00},/*"1",17*/
    {0x00,0x30,0x38,0x08,0x88,0xF8,0x70,0x00,0x00,0x0C,0x0E,0x0B,0x09,0x08,0x08,0x00},/*"2",18*/
    {0x00,0x30,0x38,0x88,0x88,0xF8,0x70,0x00,0x00,0x06,0x0E,0x08,0x08,0x0F,0x07,0x00},/*"3",19*/
    {0x00,0x00,0xF8,0xF8,0x00,0xE0,0xE0,0x00,0x00,0x03,0x03,0x02,0x02,0x0F,0x0F,0x02},/*"4",20*/
    {0x00,0xF8,0xF8,0x88,0x88,0x88,0x08,0x00,0x00,0x08,0x08,0x08,0x0C,0x07,0x03,0x00},/*"5",21*/
    {0x00,0xC0,0xE0,0x78,0x58,0xC8,0x80,0x00,0x00,0x07,0x0F,0x08,0x08,0x0F,0x07,0x00},/*"6",22*/
    {0x00,0x08,0x08,0x88,0xE8,0x78,0x18,0x00,0x00,0x00,0x0E,0x0F,0x01,0x00,0x00,0x00},/*"7",23*/
    {0x00,0x70,0xF8,0xC8,0x88,0xF8,0x70,0x00,0x00,0x07,0x0F,0x08,0x09,0x0F,0x07,0x00},/*"8",24*/
    {0x00,0xF0,0xF8,0x08,0x08,0xF8,0xF0,0x00,0x00,0x00,0x09,0x0D,0x0F,0x03,0x01,0x00},/*"9",25*/
    {0x00,0x00,0x00,0x60,0x60,0x60,0x00,0x00,0x00,0x00,0x00,0x0C,0x0C,0x0C,0x00,0x00},/*":",26*/
    {0x00,0x00,0x00,0x60,0x60,0x60,0x00,0x00,0x00,0x00,0x00,0x2C,0x3C,0x1C,0x00,0x00},/*";",27*/
    {0x00,0x80,0xC0,0x60,0x30,0x18,0x08,0x00,0x00,0x00,0x01,0x03,0x06,0x0C,0x08,0x00},/*"<",28*/
    {0x00,0x40,0x40,0x40,0x40,0x40,0x40,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x00},/*"=",29*/
    {0x00,0x08,0x18,0x30,0x60,0xC0,0x80,0x00,0x00,0x08,0x0C,0x06,0x03,0x01,0x00,0x00},/*">",30*/
    {0x00,0x30,0x38,0x88,0xC8,0x78,0x30,0x00,0x00,0x00,0x00,0x0D,0x0D,0x00,0x00,0x00},/*"?",31*/
    {0xF0,0xF8,0x08,0x88,0xC8,0x48,0xF8,0xF0,0x07,0x0F,0x08,0x09,0x0B,0x0A,0x0B,0x0B},/*"@",32*/
    {0x00,0xE0,0xF0,0x18,0x18,0xF0,0xE0,0x00,0x00,0x0F,0x0F,0x01,0x01,0x0F,0x0F,0x00},/*"A",33*/
    {0x00,0xF8,0xF8,0x88,0x88,0xF8,0x70,0x00,0x00,0x0F,0x0F,0x08,0x08,0x0F,0x07,0x00},/*"B",34*/
    {0x00,0xF0,0xF8,0x08,0x08,0x38,0x30,0x00,0x00,0x07,0x0F,0x08,0x08,0x0E,0x06,0x00},/*"C",35*/
    {0x00,0xF8,0xF8,0x08,0x18,0xF0,0xE0,0x00,0x00,0x0F,0x0F,0x08,0x0C,0x07,0x03,0x00},/*"D",36*/
    {0x00,0xF8,0xF8,0x88,0x88,0x88,0x08,0x00,0x00,0x0F,0x0F,0x08,0x08,0x08,0x08,0x00},/*"E",37*/
    {0x00,0xF8,0xF8,0x88,0x88,0x88,0x08,0x00,0x00,0x0F,0x0F,0x00,0x00,0x00,0x00,0x00},/*"F",38*/
    {0x00,0xF0,0xF8,0x08,0x08,0x38,0x30,0x00,0x00,0x07,0x0F,0x08,0x09,0x0F,0x0F,0x00},/*"G",39*/
    {0x00,0xF8,0xF8,0x80,0x80,0xF8,0xF8,0x00,0x00,0x0F,0x0F,0x00,0x00,0x0F,0x0F,0x00},/*"H",40*/
    {0x00,0x00,0x08,0xF8,0xF8,0x08,0x00,0x00,0x00,0x00,0x08,0x0F,0x0F,0x08,0x00,0x00},/*"I",41*/
    {0x00,0x00,0x00,0x00,0x00,0xF8,0xF8,0x00,0x00,0x06,0x0E,0x08,0x08,0x0F,0x07,0x00},/*"J",42*/
    {0x00,0xF8,0xF8,0x80,0xE0,0x78,0x18,0x00,0x00,0x0F,0x0F,0x00,0x03,0x0F,0x0C,0x00},/*"K",43*/
    {0x00,0xF8,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x0F,0x08,0x08,0x08,0x08,0x00},/*"L",44*/
    {0x00,0xF8,0xF8,0x20,0xC0,0x20,0xF8,0xF8,0x00,0x0F,0x0F,0x00,0x01,0x00,0x0F,0x0F},/*"M",45*/
    {0x00,0xF8,0xF8,0x60,0xC0,0x80,0xF8,0xF8,0x00,0x0F,0x0F,0x00,0x00,0x01,0x0F,0x0F},/*"N",46*/
    {0x00,0xF0,0xF8,0x08,0x08,0xF8,0xF0,0x00,0x00,0x07,0x0F,0x08,0x08,0x0F,0x07,0x00},/*"O",47*/
    {0x00,0xF8,0xF8,0x88,0x88,0xF8,0x70,0x00,0x00,0x0F,0x0F,0x00,0x00,0x00,0x00,0x00},/*"P",48*/
    {0x00,0xF0,0xF8,0x08,0x08,0xF8,0xF0,0x00,0x00,0x07,0x0F,0x08,0x18,0x3F,0x27,0x00},/*"Q",49*/
    {0x00,0xF8,0xF8,0x88,0x88,0xF8,0x70,0x00,0x00,0x0F,0x0F,0x00,0x01,0x0F,0x0E,0x00},/*"R",50*/
    {0x00,0x30,0x78,0xC8,0x88,0x18,0x10,0x00,0x00,0x04,0x0C,0x08,0x09,0x0F,0x06,0x00},/*"S",51*/
    {0x00,0x08,0x08,0xF8,0xF8,0x08,0x08,0x00,0x00,0x00,0x00,0x0F,0x0F,0x00,0x00,0x00},/*"T",52*/
    {0x00,0xF8,0xF8,0x00,0x00,0xF8,0xF8,0x00,0x00,0x07,0x0F,0x08,0x08,0x0F,0x07,0x00},/*"U",53*/
    {0x00,0xF8,0xF8,0x00,0x00,0xF8,0xF8,0x00,0x00,0x03,0x07,0x0C,0x0C,0x07,0x03,0x00},/*"V",54*/
    {0x00,0xF8,0xF8,0x00,0xC0,0x00,0xF8,0xF8,0x00,0x01,0x0F,0x0E,0x01,0x0E,0x0F,0x01},/*"W",55*/
    {0x00,0x18,0x38,0xE0,0xC0,0x38,0x18,0x00,0x00,0x0E,0x0F,0x00,0x01,0x0F,0x0E,0x00},/*"X",56*/
    {0x00,0x78,0xF8,0x80,0x80,0xF8,0x78,0x00,0x00,0x00,0x00,0x0F,0x0F,0x00,0x00,0x00},/*"Y",57*/
    {0x00,0x08,0x08,0x88,0xC8,0x78,0x38,0x00,0x00,0x0E,0x0F,0x09,0x08,0x08,0x08,0x00},/*"Z",58*/
    {0x00,0x00,0xF8,0xF8,0x08,0x08,0x00,0x00,0x00,0x00,0x7F,0x7F,0x40,0x40,0x00,0x00},/*"[",59*/
    {0x00,0x18,0x78,0xE0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x07,0x1E,0x18,0x00},/*"\",60*/
    {0x00,0x00,0x08,0x08,0xF8,0xF8,0x00,0x00,0x00,0x00,0x40,0x40,0x7F,0x7F,0x00,0x00},/*"]",61*/
    {0x00,0x08,0x0C,0x06,0x06,0x0C,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"^",62*/
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40},/*"_",63*/
    {0x00,0x00,0x02,0x06,0x0E,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"`",64*/
    {0x00,0x00,0x20,0x20,0x20,0xE0,0xC0,0x00,0x00,0x06,0x0F,0x09,0x09,0x0F,0x0F,0x00},/*"a",65*/
    {0x00,0xF8,0xF8,0x20,0x20,0xE0,0xC0,0x00,0x00,0x0F,0x0F,0x08,0x08,0x0F,0x07,0x00},/*"b",66*/
    {0x00,0xC0,0xE0,0x20,0x20,0x60,0x40,0x00,0x00,0x07,0x0F,0x08,0x08,0x0C,0x04,0x00},/*"c",67*/
    {0x00,0xC0,0xE0,0x20,0x20,0xF8,0xF8,0x00,0x00,0x07,0x0F,0x08,0x08,0x0F,0x0F,0x00},/*"d",68*/
    {0x00,0xC0,0xE0,0x20,0x20,0xE0,0xC0,0x00,0x00,0x07,0x0F,0x09,0x09,0x09,0x01,0x00},/*"e",69*/
    {0x00,0x80,0xF0,0xF8,0x88,0x88,0x88,0x00,0x00,0x00,0x0F,0x0F,0x00,0x00,0x00,0x00},/*"f",70*/
    {0x00,0xC0,0xE0,0x20,0x20,0xE0,0xE0,0x00,0x00,0x47,0x4F,0x48,0x48,0x7F,0x3F,0x00},/*"g",71*/
    {0x00,0xF8,0xF8,0x20,0x20,0xE0,0xC0,0x00,0x00,0x0F,0x0F,0x00,0x00,0x0F,0x0F,0x00},/*"h",72*/
    {0x00,0x20,0x20,0xEC,0xEC,0x00,0x00,0x00,0x00,0x08,0x08,0x0F,0x0F,0x08,0x08,0x00},/*"i",73*/
    {0x00,0x00,0x20,0x20,0xEC,0xEC,0x00,0x00,0x00,0x40,0x40,0x40,0x7F,0x3F,0x00,0x00},/*"j",74*/
    {0x00,0xF8,0xF8,0x00,0x80,0xE0,0x60,0x00,0x00,0x0F,0x0F,0x01,0x03,0x0E,0x0C,0x00},/*"k",75*/
    {0x00,0x08,0x08,0xF8,0xF8,0x00,0x00,0x00,0x00,0x08,0x08,0x0F,0x0F,0x08,0x08,0x00},/*"l",76*/
    {0x00,0xE0,0xE0,0x20,0xE0,0x20,0xE0,0xC0,0x00,0x0F,0x0F,0x00,0x07,0x00,0x0F,0x0F},/*"m",77*/
    {0x00,0xE0,0xE0,0x20,0x20,0xE0,0xC0,0x00,0x00,0x0F,0x0F,0x00,0x00,0x0F,0x0F,0x00},/*"n",78*/
    {0x00,0xC0,0xE0,0x20,0x20,0xE0,0xC0,0x00,0x00,0x07,0x0F,0x08,0x08,0x0F,0x07,0x00},/*"o",79*/
    {0x00,0xE0,0xE0,0x20,0x20,0xE0,0xC0,0x00,0x00,0x7F,0x7F,0x08,0x08,0x0F,0x07,0x00},/*"p",80*/
    {0x00,0xC0,0xE0,0x20,0x20,0xE0,0xE0,0x00,0x00,0x07,0x0F,0x08,0x08,0x7F,0x7F,0x00},/*"q",81*/
    {0x00,0xE0,0xE0,0x80,0x40,0x60,0x60,0x00,0x00,0x0F,0x0F,0x00,0x00,0x00,0x00,0x00},/*"r",82*/
    {0x00,0xC0,0xE0,0x20,0x20,0x20,0x20,0x00,0x00,0x08,0x09,0x09,0x09,0x0F,0x06,0x00},/*"s",83*/
    {0x00,0x20,0xF8,0xF8,0x20,0x20,0x20,0x00,0x00,0x00,0x07,0x0F,0x08,0x08,0x08,0x00},/*"t",84*/
    {0x00,0xE0,0xE0,0x00,0x00,0xE0,0xE0,0x00,0x00,0x07,0x0F,0x08,0x08,0x0F,0x0F,0x00},/*"u",85*/
    {0x00,0xE0,0xE0,0x00,0x00,0xE0,0xE0,0x00,0x00,0x03,0x07,0x0C,0x0C,0x07,0x03,0x00},/*"v",86*/
    {0x00,0xE0,0xE0,0x00,0xC0,0x00,0xE0,0xE0,0x00,0x03,0x0F,0x0C,0x03,0x0C,0x0F,0x03},/*"w",87*/
    {0x00,0x60,0xE0,0x80,0x80,0xE0,0x60,0x00,0x00,0x0C,0x0E,0x03,0x03,0x0E,0x0C,0x00},/*"x",88*/
    {0x00,0xE0,0xE0,0x00,0x00,0xE0,0xE0,0x00,0x40,0x47,0x4F,0x68,0x38,0x1F,0x07,0x00},/*"y",89*/
    {0x00,0x20,0x20,0x20,0xA0,0xE0,0x60,0x00,0x00,0x0C,0x0E,0x0B,0x09,0x08,0x08,0x00},/*"z",90*/
    {0x00,0x00,0x80,0xF0,0x78,0x08,0x00,0x00,0x00,0x01,0x03,0x1E,0x3C,0x20,0x00,0x00},/*"{",91*/
    {0x00,0x00,0x00,0xF8,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x7F,0x00,0x00,0x00},/*"|",92*/
    {0x00,0x00,0x08,0x78,0xF0,0x80,0x00,0x00,0x00,0x00,0x20,0x3C,0x1E,0x03,0x01,0x00},/*"}",93*/
    {0x30,0x18,0x08,0x18,0x30,0x20,0x30,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00} /*"~",94*/
};

PROGMEM unsigned char bigcharlib[][16]=
{
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"　",0*/
    {0x00,0x00,0x0C,0x12,0x12,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"°",1*/
    {0x10,0x60,0x02,0x8C,0x00,0x00,0xFE,0x92,0x92,0x92,0x92,0x92,0xFE,0x00,0x00,0x00},
    {0x04,0x04,0x7E,0x01,0x40,0x7E,0x42,0x42,0x7E,0x42,0x7E,0x42,0x42,0x7E,0x40,0x00},/*"温",2*/
    {0x00,0x00,0xFC,0x24,0x24,0x24,0xFC,0x25,0x26,0x24,0xFC,0x24,0x24,0x24,0x04,0x00},
    {0x40,0x30,0x8F,0x80,0x84,0x4C,0x55,0x25,0x25,0x25,0x55,0x4C,0x80,0x80,0x80,0x00},/*"度",3*/
    {0x10,0x60,0x02,0x8C,0x00,0xFE,0x92,0x92,0x92,0x92,0x92,0x92,0xFE,0x00,0x00,0x00},
    {0x04,0x04,0x7E,0x01,0x44,0x48,0x50,0x7F,0x40,0x40,0x7F,0x50,0x48,0x44,0x40,0x00},/*"湿",4*/
    {0x40,0x40,0x42,0x44,0x58,0xC0,0x40,0x7F,0x40,0xC0,0x50,0x48,0x46,0x40,0x40,0x00},
    {0x80,0x80,0x40,0x20,0x18,0x07,0x00,0x00,0x00,0x3F,0x40,0x40,0x40,0x40,0x78,0x00},/*"光",5*/
    {0x00,0xFE,0x42,0x42,0x42,0xFE,0x00,0x42,0xA2,0x9E,0x82,0xA2,0xC2,0xBE,0x00,0x00},
    {0x80,0x6F,0x08,0x08,0x28,0xCF,0x00,0x00,0x2F,0xC8,0x08,0x08,0x28,0xCF,0x00,0x00},/*"照",6*/
    {0x00,0x3E,0x22,0xE2,0x22,0x3E,0x00,0xFE,0x22,0x22,0x22,0x22,0x22,0xE2,0x02,0x00},
    {0x20,0x3F,0x20,0x1F,0x11,0x11,0x00,0x7F,0x44,0x44,0x44,0x44,0x44,0x47,0x40,0x00},/*"距",7*/
    {0x04,0x04,0x04,0xF4,0x84,0xD4,0xA5,0xA6,0xA4,0xD4,0x84,0xF4,0x04,0x04,0x04,0x00},
    {0x00,0xFE,0x02,0x02,0x12,0x3A,0x16,0x13,0x12,0x1A,0x32,0x42,0x82,0x7E,0x00,0x00},/*"离",8*/
    {0x00,0x10,0x10,0x10,0x10,0xD0,0x30,0xFF,0x30,0xD0,0x10,0x10,0x10,0x10,0x00,0x00},
    {0x10,0x08,0x04,0x02,0x09,0x08,0x08,0xFF,0x08,0x08,0x09,0x02,0x04,0x08,0x10,0x00},/*"本",9*/
    {0x10,0x10,0xD0,0xFF,0x90,0x10,0x00,0xFE,0x02,0x02,0x02,0xFE,0x00,0x00,0x00,0x00},
    {0x04,0x03,0x00,0xFF,0x00,0x83,0x60,0x1F,0x00,0x00,0x00,0x3F,0x40,0x40,0x78,0x00},/*"机",10*/
    {0x80,0x80,0x80,0xBE,0xA2,0xA2,0xA2,0xA2,0xA2,0xA2,0xA2,0xBE,0x80,0x80,0x80,0x00},
    {0x00,0x00,0x00,0x06,0x05,0x04,0x04,0x04,0x44,0x84,0x44,0x3C,0x00,0x00,0x00,0x00},/*"号",11*/
    {0x04,0x84,0xE4,0x5C,0x44,0xC4,0x00,0x02,0xF2,0x82,0x82,0x82,0xFE,0x80,0x80,0x00},
    {0x02,0x01,0x7F,0x10,0x10,0x3F,0x00,0x08,0x08,0x08,0x08,0x48,0x88,0x40,0x3F,0x00},/*"码",12*/
    {0x20,0x20,0x20,0xFF,0x20,0x20,0x80,0xF8,0x80,0x40,0xFF,0x20,0x10,0xF0,0x00,0x00},
    {0x10,0x30,0x10,0x0F,0x08,0x08,0x00,0x3F,0x40,0x40,0x5F,0x42,0x44,0x43,0x78,0x00},/*"地",13*/
    {0x20,0x20,0x20,0xFF,0x20,0x20,0x00,0xF8,0x00,0x00,0xFF,0x40,0x40,0x40,0x00,0x00},
    {0x10,0x30,0x10,0x0F,0x08,0x48,0x40,0x7F,0x40,0x40,0x7F,0x40,0x40,0x40,0x40,0x00},/*"址",14*/
    {0x00,0x00,0x18,0x16,0x10,0xD0,0xB8,0x97,0x90,0x90,0x90,0x92,0x94,0x10,0x00,0x00},
    {0x00,0x20,0x10,0x8C,0x83,0x80,0x41,0x46,0x28,0x10,0x28,0x44,0x43,0x80,0x80,0x00},/*"发",15*/
    {0x40,0x40,0x42,0xCC,0x00,0x88,0x89,0x8E,0x88,0xF8,0x88,0x8C,0x8B,0x88,0x80,0x00},
    {0x00,0x40,0x20,0x1F,0x20,0x40,0x50,0x48,0x46,0x41,0x42,0x44,0x58,0x40,0x40,0x00},/*"送",16*/
    {0x00,0x00,0xF0,0x10,0x10,0x10,0x10,0xFF,0x10,0x10,0x10,0x10,0xF0,0x00,0x00,0x00},
    {0x00,0x00,0x0F,0x04,0x04,0x04,0x04,0xFF,0x04,0x04,0x04,0x04,0x0F,0x00,0x00,0x00},/*"中",17*/
    {0x08,0x08,0x89,0xEA,0x18,0x88,0x00,0x04,0x04,0xFC,0x04,0x04,0x04,0xFC,0x00,0x00},
    {0x02,0x01,0x00,0xFF,0x01,0x86,0x40,0x20,0x18,0x07,0x40,0x80,0x40,0x3F,0x00,0x00},/*"初",18*/
    {0x10,0x10,0xF0,0x1F,0x10,0xF0,0x00,0x40,0xE0,0x58,0x47,0x40,0x50,0x60,0xC0,0x00},
    {0x40,0x22,0x15,0x08,0x16,0x21,0x00,0x00,0xFE,0x42,0x42,0x42,0x42,0xFE,0x00,0x00},/*"始",19*/
    {0x00,0x80,0x60,0xF8,0x07,0x00,0x00,0x00,0xFF,0x40,0x20,0x10,0x08,0x04,0x00,0x00},
    {0x01,0x00,0x00,0xFF,0x00,0x04,0x02,0x01,0x3F,0x40,0x40,0x40,0x40,0x40,0x78,0x00},/*"化",20*/
    {0x00,0x80,0x60,0xF8,0x07,0x40,0x48,0x48,0xE8,0x5F,0x48,0x48,0x48,0x40,0x40,0x00},
    {0x01,0x00,0x00,0xFF,0x00,0x00,0x02,0x0B,0x12,0x22,0xD2,0x0A,0x06,0x00,0x00,0x00},/*"传",21*/
    {0x00,0x00,0xFC,0x04,0xD4,0x54,0x54,0x54,0xD4,0x04,0x7F,0x84,0xC5,0x36,0x04,0x00},
    {0x88,0x66,0x01,0x00,0x63,0x82,0x82,0x92,0xAB,0x84,0x82,0xC1,0x02,0x24,0xCF,0x00},/*"感",22*/
    {0x80,0x80,0x9E,0x92,0x92,0x92,0x9E,0xE0,0x80,0x9E,0xB2,0xD2,0x92,0x9E,0x80,0x00},
    {0x08,0x08,0xF4,0x94,0x92,0x92,0xF1,0x00,0x01,0xF2,0x92,0x94,0x94,0xF8,0x08,0x00} /*"器",23*/
};