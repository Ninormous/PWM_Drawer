/*
 * Dio.c
 *
 *  Created on: Dec 24, 2021
 *      Author: Ninormous
 */

#include "Dio.h"

void Dio_ConfigChannel(port_type port, pin_type pin, direction_type direction)
{
	switch(port)
	{
	case DIO_PORTA:
		if(direction == INPUT)
			CLR_BIT(DIO_DDRA_REG, pin);
		else
			SET_BIT(DIO_DDRA_REG, pin);
		break;
	case DIO_PORTB:
		if(direction == INPUT)
			CLR_BIT(DIO_DDRB_REG, pin);
		else
			SET_BIT(DIO_DDRB_REG, pin);
		break;
	case DIO_PORTC:
		if(direction == INPUT)
			CLR_BIT(DIO_DDRC_REG, pin);
		else
			SET_BIT(DIO_DDRC_REG, pin);
		break;
	case DIO_PORTD:
		if(direction == INPUT)
			CLR_BIT(DIO_DDRD_REG, pin);
		else
			SET_BIT(DIO_DDRD_REG, pin);
		break;
	}
}

void Dio_WriteChannel(port_type port, pin_type pin, level_type level)
{
	switch(port)
	{
	case DIO_PORTA:
		if(level == STD_HIGH)
			SET_BIT(DIO_PORTA_REG, pin);
		else
			CLR_BIT(DIO_PORTA_REG, pin);
		break;
	case DIO_PORTB:
		if(level == STD_HIGH)
			SET_BIT(DIO_PORTB_REG, pin);
		else
			CLR_BIT(DIO_PORTB_REG, pin);
		break;
	case DIO_PORTC:
		if(level == STD_HIGH)
			SET_BIT(DIO_PORTC_REG, pin);
		else
			CLR_BIT(DIO_PORTC_REG, pin);
		break;
	case DIO_PORTD:
		if(level == STD_HIGH)
			SET_BIT(DIO_PORTD_REG, pin);
		else
			CLR_BIT(DIO_PORTD_REG, pin);
		break;
	}
}

void Dio_WriteGroup(port_type port, u8 mask, u8 data)
{
	switch(port)
	{
	case DIO_PORTA:
		DIO_PORTA_REG = (DIO_PORTA_REG&~mask)|(data & mask);
		break;
	case DIO_PORTB:
		DIO_PORTB_REG = (DIO_PORTA_REG&~mask)|(data & mask);
		break;
	case DIO_PORTC:
		DIO_PORTC_REG = (DIO_PORTA_REG&~mask)|(data & mask);
		break;
	case DIO_PORTD:
		DIO_PORTD_REG = (DIO_PORTA_REG&~mask)|(data & mask);
		break;
	}
}

void Dio_ToggelChannel(port_type port, pin_type pin)
{
	switch(port)
	{
	case DIO_PORTA:
		TOG_BIT(DIO_PORTA_REG, pin);
		break;
	case DIO_PORTB:
		TOG_BIT(DIO_PORTB_REG, pin);
		break;
	case DIO_PORTC:
		TOG_BIT(DIO_PORTC_REG, pin);
		break;
	case DIO_PORTD:
		TOG_BIT(DIO_PORTD_REG, pin);
		break;
	}
}

level_type Dio_ReadChannel(port_type port, pin_type pin)
{
	level_type result = STD_LOW;
	switch(port)
	{
	case DIO_PORTA:
		if(CHK_BIT(DIO_PINA_REG, pin))
			result = STD_HIGH;
		else
			result = STD_LOW;
		break;
	case DIO_PORTB:
		if(CHK_BIT(DIO_PINB_REG, pin))
			result = STD_HIGH;
		else
			result = STD_LOW;
		break;
	case DIO_PORTC:
		if(CHK_BIT(DIO_PINC_REG, pin))
			result = STD_HIGH;
		else
			result = STD_LOW;
		break;
	case DIO_PORTD:
		if(CHK_BIT(DIO_PIND_REG, pin))
			result = STD_HIGH;
		else
			result = STD_LOW;
		break;
	}
	return result;
}
