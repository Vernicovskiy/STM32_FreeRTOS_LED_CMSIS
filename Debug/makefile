################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include FreeRTOS/src/subdir.mk
-include CMSIS/src/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
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

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := STM32_FreeRTOS_LED_CMSIS
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
STM32_FreeRTOS_LED_CMSIS.elf \

MAP_FILES += \
STM32_FreeRTOS_LED_CMSIS.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
STM32_FreeRTOS_LED_CMSIS.list \

OBJCOPY_HEX += \
STM32_FreeRTOS_LED_CMSIS.hex \


# All Target
all: main-build

# Main-build Target
main-build: STM32_FreeRTOS_LED_CMSIS.elf secondary-outputs

# Tool invocations
STM32_FreeRTOS_LED_CMSIS.elf STM32_FreeRTOS_LED_CMSIS.map: $(OBJS) $(USER_OBJS) D:\WORK\WORKSPACE\ for\ CUBE\ IDE\ 1.13.2\STM32_FreeRTOS_LED_CMSIS\STM32F401RETX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "STM32_FreeRTOS_LED_CMSIS.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"D:\WORK\WORKSPACE for CUBE IDE 1.13.2\STM32_FreeRTOS_LED_CMSIS\STM32F401RETX_FLASH.ld" --specs=nosys.specs -Wl,-Map="STM32_FreeRTOS_LED_CMSIS.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

STM32_FreeRTOS_LED_CMSIS.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "STM32_FreeRTOS_LED_CMSIS.list"
	@echo 'Finished building: $@'
	@echo ' '

STM32_FreeRTOS_LED_CMSIS.hex: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "STM32_FreeRTOS_LED_CMSIS.hex"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) STM32_FreeRTOS_LED_CMSIS.elf STM32_FreeRTOS_LED_CMSIS.hex STM32_FreeRTOS_LED_CMSIS.list STM32_FreeRTOS_LED_CMSIS.map default.size.stdout
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
