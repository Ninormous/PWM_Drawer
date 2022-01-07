/*
 * Timer0.h
 *
 *  Created on: Jan 1, 2022
 *      Author: Ninormous
 */

#ifndef TIMER0_H_
#define TIMER0_H_

#include "Bit_Math.h"
#include "Std_Types.h"
#include "Timer0_Cfg.h"
#include "Timer0_Private.h"

/*	TIMER0 Operation Modes	*/
#define TIMER0_INTERVAL_MODE				((u8)0<<3)
#define TIMER0_CTC_MODE						((u8)1<<3)
#define TIMER0_PWM_FAST						((u8)9<<3)
#define TIMER0_PWM_PHASE_CORRECT			((u8)1<<6)

/*	TIMER0 Clock Select Prescaler	*/
#define TIMER0_CS_DISABLED					((u8)0<<0)	/* Timer0 Stopped */
#define TIMER0_CS_NO_PRESCALER				((u8)1<<0)
#define TIMER0_CS_8_PRESCALER				((u8)2<<0)
#define TIMER0_CS_64_PRESCALER				((u8)3<<0)
#define TIMER0_CS_256_PRESCALER				((u8)4<<0)
#define TIMER0_CS_1024_PRESCALER			((u8)5<<0)
#define TIMER0_CS_External_FAILING_EDGE		((u8)6<<0)
#define TIMER0_CS_External_RISING_EDGE		((u8)7<<0)

/*	CTC Modes	*/
#define CTC_OC0_DISCONNECTED				((u8)0<<4)
#define CTC_OC0_TOGGLE						((u8)1<<4)
#define CTC_OC0_LOW							((u8)2<<4)
#define CTC_OC0_HIGH						((u8)3<<4)

/*	Fast PWM Modes	*/
#define PWM_FAST_OC0_DISCONNECTED			((u8)0<<4)
#define PWM_FAST_OC0_NON_INVERTED			((u8)2<<4)
#define PWM_FAST_OC0_INVERTED				((u8)3<<4)

/*	Phase Correct PWM Modes	*/
#define PWM_PHASE_CORRECT_OC0_DISCONNECTED	((u8)0<<4)
#define PWM_PHASE_CORRECT_OC0_NON_INVERTED	((u8)2<<4)
#define PWM_PHASE_CORRECT_OC0_INVERTED		((u8)3<<4)

/*	Timer0 Interrupt Enable	Bits */
#define TIMER0_INTERVAL_INT_ENABLE_BIT_NO		(0)
#define TIMER0_CTC_INT_ENABLE_BIT_NO			(1)

/*	Timer0 Top Value	*/
#define TIMER0_TOP 			(255u)
void TIMER0_Init(void);
void TIMER0_Start(u8 prescaler);
void TIMER0_Stop(void);
void TIMER0_SetPreload(u8 preLoadValue);
u8 TIMER0_GetPreload(void);
void TIMER0_EnableInterrupt(void);
void TIMER0_DisableInterrupt(void);
void TIMER0_PWM(u8 freq, u8 dutyCycle);

#endif /* TIMER0_H_ */
