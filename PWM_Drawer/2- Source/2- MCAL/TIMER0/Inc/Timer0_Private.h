/*
 * Timer0_Private.h
 *
 *  Created on: Jan 1, 2022
 *      Author: Ninormous
 */

#ifndef TIMER0_PRIVATE_H_
#define TIMER0_PRIVATE_H_

#include "Std_Types.h"

// TIMER 0
#define TIMER0_TCCR0_REG			(*(volatile u8*)0x53)
#define TIMER0_TCNT0_REG			(*(volatile u8*)0x52)
#define TIMER0_OCR0_REG				(*(volatile u8*)0x5C)
#define TIMER0_TIMSK_REG			(*(volatile u8*)0x59)
#define TIMER0_TIFR_REG				(*(volatile u8*)0x58)

#define TIMER0_MODE_NONE            		(0)
#define TIMER0_MODE_INTERVAL             	(1)
#define TIMER0_MODE_CTC          			(2)
#define TIMER0_MODE_FAST_PWM        		(3)
#define TIMER0_MODE_PWM_PHASE_CORRECT		(4)

// TIMER 1
#define TIMER1_TCCR1A_REG			(*(volatile u8*)0x4F)
#define TIMER1_TCCR1B_REG			(*(volatile u8*)0x4E)
#define TIMER1_TCNT1H_REG			(*(volatile u8*)0x4D)
#define TIMER1_TCNT1L_REG			(*(volatile u8*)0x4C)
#define TIMER1_ICR1H_REG			(*(volatile u8*)0x47)
#define TIMER1_ICR1L_REG			(*(volatile u8*)0x46)

#endif /* TIMER0_PRIVATE_H_ */
