################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include 2-\ Source/4-\ Application/subdir.mk
-include 2-\ Source/3-\ HAL/LCD/Src/subdir.mk
-include 2-\ Source/2-\ MCAL/TIMER0/Src/subdir.mk
-include 2-\ Source/2-\ MCAL/DIO/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
PWM_Drawer.lss \

FLASH_IMAGE += \
PWM_Drawer.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: PWM_Drawer.elf secondary-outputs

# Tool invocations
PWM_Drawer.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,PWM_Drawer.map -mmcu=atmega32 -o "PWM_Drawer.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

PWM_Drawer.lss: PWM_Drawer.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S PWM_Drawer.elf  >"PWM_Drawer.lss"
	@echo 'Finished building: $@'
	@echo ' '

PWM_Drawer.hex: PWM_Drawer.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -O ihex PWM_Drawer.elf  "PWM_Drawer.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: PWM_Drawer.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 PWM_Drawer.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) PWM_Drawer.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents

-include ../makefile.targets
