/*
 * Dio_Types.h
 *
 *  Created on: Dec 24, 2021
 *      Author: Ninormous
 */

#ifndef DIO_TYPES_H_
#define DIO_TYPES_H_

/*	User Defined Data Types	*/
typedef enum{
	DIO_PORTA,
	DIO_PORTB,
	DIO_PORTC,
	DIO_PORTD
}port_type;			/*	MC PORT ID Type	*/

typedef enum{
	DIO_PIN0,
	DIO_PIN1,
	DIO_PIN2,
	DIO_PIN3,
	DIO_PIN4,
	DIO_PIN5,
	DIO_PIN6,
	DIO_PIN7
}pin_type;			/*	MC PIN ID Type	*/

typedef enum{
	INPUT,
	OUTPUT
}direction_type;

typedef enum {
	STD_LOW,
	STD_HIGH
}level_type;

#endif /* 2__SOURCE_2__MCAL_DIO_INC_DIO_TYPES_H_ */
