################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../2-\ Source/3-\ HAL/LCD/Src/Lcd.c \
../2-\ Source/3-\ HAL/LCD/Src/Lcd_Cfg.c 

OBJS += \
./2-\ Source/3-\ HAL/LCD/Src/Lcd.o \
./2-\ Source/3-\ HAL/LCD/Src/Lcd_Cfg.o 

C_DEPS += \
./2-\ Source/3-\ HAL/LCD/Src/Lcd.d \
./2-\ Source/3-\ HAL/LCD/Src/Lcd_Cfg.d 


# Each subdirectory must supply rules for building sources it contributes
2-\ Source/3-\ HAL/LCD/Src/Lcd.o: ../2-\ Source/3-\ HAL/LCD/Src/Lcd.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"D:\6-Projects\Eclipse\AMITLearning\PWM_Drawer\2- Source\1- Library" -I"D:\6-Projects\Eclipse\AMITLearning\PWM_Drawer\2- Source\2- MCAL\TIMER0\Inc" -I"D:\6-Projects\Eclipse\AMITLearning\PWM_Drawer\2- Source\2- MCAL\DIO\Inc" -I"D:\6-Projects\Eclipse\AMITLearning\PWM_Drawer\2- Source\3- HAL\LCD\Inc" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"2- Source/3- HAL/LCD/Src/Lcd.d" -MT"2-\ Source/3-\ HAL/LCD/Src/Lcd.d" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

2-\ Source/3-\ HAL/LCD/Src/Lcd_Cfg.o: ../2-\ Source/3-\ HAL/LCD/Src/Lcd_Cfg.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"D:\6-Projects\Eclipse\AMITLearning\PWM_Drawer\2- Source\1- Library" -I"D:\6-Projects\Eclipse\AMITLearning\PWM_Drawer\2- Source\2- MCAL\TIMER0\Inc" -I"D:\6-Projects\Eclipse\AMITLearning\PWM_Drawer\2- Source\2- MCAL\DIO\Inc" -I"D:\6-Projects\Eclipse\AMITLearning\PWM_Drawer\2- Source\3- HAL\LCD\Inc" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"2- Source/3- HAL/LCD/Src/Lcd_Cfg.d" -MT"2-\ Source/3-\ HAL/LCD/Src/Lcd_Cfg.d" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


