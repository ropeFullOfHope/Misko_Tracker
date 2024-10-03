################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../System/Src/LED.c \
../System/Src/backlight.c \
../System/Src/button.c \
../System/Src/ili9341.c \
../System/Src/joystick.c \
../System/Src/lcd.c \
../System/Src/lcd_tileset.c \
../System/Src/millis.c 

C_DEPS += \
./System/Src/LED.d \
./System/Src/backlight.d \
./System/Src/button.d \
./System/Src/ili9341.d \
./System/Src/joystick.d \
./System/Src/lcd.d \
./System/Src/lcd_tileset.d \
./System/Src/millis.d 

OBJS += \
./System/Src/LED.o \
./System/Src/backlight.o \
./System/Src/button.o \
./System/Src/ili9341.o \
./System/Src/joystick.o \
./System/Src/lcd.o \
./System/Src/lcd_tileset.o \
./System/Src/millis.o 


# Each subdirectory must supply rules for building sources it contributes
System/Src/%.o System/Src/%.su: ../System/Src/%.c System/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32G474xx -DUSE_FULL_LL_DRIVER -DUSE_HAL_DRIVER -c -I../Core/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32G4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/uporabnik/STM32CubeIDE/workspace/Misko_Template/System/Inc" -I"C:/Users/uporabnik/STM32CubeIDE/workspace/Misko_Template/Application/Inc" -I../Drivers/STM32G4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-System-2f-Src

clean-System-2f-Src:
	-$(RM) ./System/Src/LED.d ./System/Src/LED.o ./System/Src/LED.su ./System/Src/backlight.d ./System/Src/backlight.o ./System/Src/backlight.su ./System/Src/button.d ./System/Src/button.o ./System/Src/button.su ./System/Src/ili9341.d ./System/Src/ili9341.o ./System/Src/ili9341.su ./System/Src/joystick.d ./System/Src/joystick.o ./System/Src/joystick.su ./System/Src/lcd.d ./System/Src/lcd.o ./System/Src/lcd.su ./System/Src/lcd_tileset.d ./System/Src/lcd_tileset.o ./System/Src/lcd_tileset.su ./System/Src/millis.d ./System/Src/millis.o ./System/Src/millis.su

.PHONY: clean-System-2f-Src

