################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../2-\ Source/4-\ Application/main.c 

OBJS += \
./2-\ Source/4-\ Application/main.o 

C_DEPS += \
./2-\ Source/4-\ Application/main.d 


# Each subdirectory must supply rules for building sources it contributes
2-\ Source/4-\ Application/main.o: ../2-\ Source/4-\ Application/main.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"D:\6-Projects\Eclipse\AMITLearning\PWM_Drawer\2- Source\1- Library" -I"D:\6-Projects\Eclipse\AMITLearning\PWM_Drawer\2- Source\2- MCAL\TIMER0\Inc" -I"D:\6-Projects\Eclipse\AMITLearning\PWM_Drawer\2- Source\2- MCAL\DIO\Inc" -I"D:\6-Projects\Eclipse\AMITLearning\PWM_Drawer\2- Source\3- HAL\LCD\Inc" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"2- Source/4- Application/main.d" -MT"2-\ Source/4-\ Application/main.d" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


