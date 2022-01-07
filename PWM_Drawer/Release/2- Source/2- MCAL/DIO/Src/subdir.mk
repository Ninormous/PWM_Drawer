################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../2-\ Source/2-\ MCAL/DIO/Src/Dio.c 

OBJS += \
./2-\ Source/2-\ MCAL/DIO/Src/Dio.o 

C_DEPS += \
./2-\ Source/2-\ MCAL/DIO/Src/Dio.d 


# Each subdirectory must supply rules for building sources it contributes
2-\ Source/2-\ MCAL/DIO/Src/Dio.o: ../2-\ Source/2-\ MCAL/DIO/Src/Dio.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -Os -fpack-struct -fshort-enums -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"2- Source/2- MCAL/DIO/Src/Dio.d" -MT"2-\ Source/2-\ MCAL/DIO/Src/Dio.d" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


