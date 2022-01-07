/*
 * Lcd_Types.h
 *
 *  Created on: Dec 24, 2021
 *      Author: Ninormous
 */

#ifndef LCD_TYPES_H_
#define LCD_TYPES_H_

typedef enum{
	_LCD_CLEAR=0x01,
	_LCD_CURSOR_OFF=0x0C,
	_LCD_CURSOR_ON=0x0F,
	_LCD_4BIT_MODE=0x28,
	_LCD_8BIT_MODE=0x38,
	_LCD_ON=0x0F,
	_LCD_CURSOR_UNDERLINE=0x0E,
	_LCD_CURSOR_SHIFT_LEFT=0x10,
	_LCD_CURSOR_SHIFT_RIGHT=0x14,
	_LCD_CURSOR_INCREMENT=0x06,
	_LCD_CGRAM_START_ADDRESS=0x40
}lcd_Cmd_Type;

#endif /* 2__SOURCE_3__HAL_LCD_INC_LCD_TYPES_H_ */
