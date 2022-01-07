/*
 * Lcd.c
 *
 *  Created on: Dec 24, 2021
 *      Author: Ninormous
 */

#include "Lcd.h"
/*
 * RS -> PB1
 * RW -> PB2
 * En -> PB3
 * Data -> 	PA4
 * 			PA5
 * 			PA6
 * 			PA7
 * */

extern u8 customChar[8][8];
static void Lcd_WriteCustom(void)
{
	u8 loc_ByteIndex=0;
	u8 loc_CharIndx=0;
	for (loc_CharIndx=0;loc_CharIndx<NO_CSTOM_CHAR;loc_CharIndx++)
	{
		Lcd_Cmd(_LCD_CGRAM_START_ADDRESS +(loc_CharIndx*8));
			for (loc_ByteIndex =0; loc_ByteIndex<NO_CSTOM_CHAR_BYTES;loc_ByteIndex++){
				Lcd_DisplayChr(customChar[loc_CharIndx][loc_ByteIndex]);
			}
	}
}

void Lcd_Init(void)
{
	// Configure Data Lines As Output
	Dio_ConfigChannel(DIO_PORTA,DIO_PIN4,OUTPUT);
	Dio_ConfigChannel(DIO_PORTA,DIO_PIN5,OUTPUT);
	Dio_ConfigChannel(DIO_PORTA,DIO_PIN6,OUTPUT);
	Dio_ConfigChannel(DIO_PORTA,DIO_PIN7,OUTPUT);

	// Configure Control Lines As Output
	Dio_ConfigChannel(DIO_PORTB,DIO_PIN1,OUTPUT);   /*	RS	*/
	Dio_ConfigChannel(DIO_PORTB,DIO_PIN2,OUTPUT);	/*	RW	*/
	Dio_ConfigChannel(DIO_PORTB,DIO_PIN3,OUTPUT);	/*	En	*/

	Dio_WriteChannel(DIO_PORTB, DIO_PIN2, STD_LOW);

	_delay_ms(15);

	Lcd_Cmd(3);
	_delay_ms(5);
	Lcd_Cmd(3);
	_delay_us(100);
	Lcd_Cmd(3);
	Lcd_Cmd(2);
	Lcd_Cmd(_LCD_4BIT_MODE);
	Lcd_WriteCustom();
	Lcd_Goto_Row_Column(0,0);
	Lcd_Cmd(_LCD_CURSOR_OFF);
}

static void Enable_Pulse(void)
{
	Dio_WriteChannel(DIO_PORTB, DIO_PIN3, STD_HIGH);
	_delay_us(1);
	Dio_WriteChannel(DIO_PORTB, DIO_PIN3, STD_LOW);
	_delay_ms(2);
}

static void Lcd_Data(u8 data) 							// RS-> 1
{
	u8 High_Nibble = data;    							// MSB
	u8 Low_Nibble = data<<4;							// LSB
	Dio_WriteChannel(DIO_PORTB, DIO_PIN1, STD_HIGH);  	// Data Mode
	Dio_WriteGroup(DIO_PORTA,LCD_MASK,High_Nibble);
	Enable_Pulse();

	Dio_WriteGroup(DIO_PORTA,LCD_MASK,Low_Nibble);
	Enable_Pulse();
}

void Lcd_Cmd(lcd_Cmd_Type cmd)							// RS-> 0
{
	u8 High_Nibble = cmd;    							// MSB
	u8 Low_Nibble = cmd<<4;								// LSB
	Dio_WriteChannel(DIO_PORTB, DIO_PIN1, STD_LOW);		//Command Mode
	Dio_WriteGroup(DIO_PORTA,LCD_MASK,High_Nibble);
	Enable_Pulse();

	Dio_WriteGroup(DIO_PORTA,LCD_MASK,Low_Nibble);
	Enable_Pulse();
}

void Lcd_DisplayChr(u8 chr)
{
	Lcd_Data(chr);
}

void Lcd_DisplayStr(u8* str)
{
	while (*str != '\0'){
		Lcd_DisplayChr(*str);
		str++;
	}
}

void Lcd_Goto_Row_Column(u8 row, u8 col)
{
	switch(row)
	{
	case 0:
		Lcd_Cmd(0x80+col);
		break;
	case 1:
		Lcd_Cmd(0xC0+col);
		break;
	}
}

void Lcd_DisplayNum(u16 num)
{
	Lcd_DisplayChr(num/1000 + '0');
	Lcd_DisplayChr(num%1000/100 + '0');
	Lcd_DisplayChr(num%1000%100/10 + '0');
	Lcd_DisplayChr(num%1000%100%10 + '0');
}

void Lcd_Display3Num(u16 num)
{
	Lcd_DisplayChr(num/100 + '0');
	Lcd_DisplayChr(num%100/10 + '0');
	Lcd_DisplayChr(num%100%10 + '0');
}

void Lcd_Display2Num(u8 num)
{
	Lcd_DisplayChr(num/10 + '0');
	Lcd_DisplayChr(num%10+ '0');
}

void Lcd_DisplayFloat(f64 floatNum)
{
	u16 intPart = 0;
	f64 fractionTemp = 0;
	u16 fractionPart = 0;

	intPart = (u16)floatNum;
	fractionTemp = floatNum - intPart;
	fractionPart = fractionTemp * 100;

	Lcd_DisplayNum(intPart);
	Lcd_DisplayChr('.');
	Lcd_DisplayNum(fractionPart);
}
