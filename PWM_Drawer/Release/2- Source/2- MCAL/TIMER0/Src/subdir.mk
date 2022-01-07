################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../2-\ Source/2-\ MCAL/TIMER0/Src/Tiemr0.c 

OBJS += \
./2-\ Source/2-\ MCAL/TIMER0/Src/Tiemr0.o 

C_DEPS += \
./2-\ Source/2-\ MCAL/TIMER0/Src/Tiemr0.d 


# Each subdirectory must supply rules for building sources it contributes
2-\ Source/2-\ MCAL/TIMER0/Src/Tiemr0.o: ../2-\ Source/2-\ MCAL/TIMER0/Src/Tiemr0.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -Os -fpack-struct -fshort-enums -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"2- Source/2- MCAL/TIMER0/Src/Tiemr0.d" -MT"2-\ Source/2-\ MCAL/TIMER0/Src/Tiemr0.d" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


