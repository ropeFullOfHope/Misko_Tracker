################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../System/Src/LED.c \
../System/Src/backlight.c \
../System/Src/button.c \
../System/Src/cordic_math.c \
../System/Src/ili9341.c \
../System/Src/joystick.c \
../System/Src/lcd.c \
../System/Src/lcd_tileset.c \
../System/Src/micros.c \
../System/Src/sd.c \
../System/Src/ticks.c \
../System/Src/volume.c 

OBJS += \
./System/Src/LED.o \
./System/Src/backlight.o \
./System/Src/button.o \
./System/Src/cordic_math.o \
./System/Src/ili9341.o \
./System/Src/joystick.o \
./System/Src/lcd.o \
./System/Src/lcd_tileset.o \
./System/Src/micros.o \
./System/Src/sd.o \
./System/Src/ticks.o \
./System/Src/volume.o 

C_DEPS += \
./System/Src/LED.d \
./System/Src/backlight.d \
./System/Src/button.d \
./System/Src/cordic_math.d \
./System/Src/ili9341.d \
./System/Src/joystick.d \
./System/Src/lcd.d \
./System/Src/lcd_tileset.d \
./System/Src/micros.d \
./System/Src/sd.d \
./System/Src/ticks.d \
./System/Src/volume.d 


# Each subdirectory must supply rules for building sources it contributes
System/Src/%.o System/Src/%.su System/Src/%.cyclo: ../System/Src/%.c System/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g -DDEBUG -DSTM32G474xx -DUSE_FULL_LL_DRIVER -DUSE_HAL_DRIVER -c -I../Core/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Include -I../Drivers/CMSIS/Device/ST/STM32G4xx/Include -I"C:/Users/uporabnik/STM32CubeIDE/workspace/Misko_Tracker/System/Inc" -I"C:/Users/uporabnik/STM32CubeIDE/workspace/Misko_Tracker/Middleware/Inc" -I"C:/Users/uporabnik/STM32CubeIDE/workspace/Misko_Tracker/Application/Inc" -O0 -ffunction-sections -fdata-sections -Wall -Wextra -pedantic -Wmissing-include-dirs -Wswitch-default -Wconversion -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-System-2f-Src

clean-System-2f-Src:
	-$(RM) ./System/Src/LED.cyclo ./System/Src/LED.d ./System/Src/LED.o ./System/Src/LED.su ./System/Src/backlight.cyclo ./System/Src/backlight.d ./System/Src/backlight.o ./System/Src/backlight.su ./System/Src/button.cyclo ./System/Src/button.d ./System/Src/button.o ./System/Src/button.su ./System/Src/cordic_math.cyclo ./System/Src/cordic_math.d ./System/Src/cordic_math.o ./System/Src/cordic_math.su ./System/Src/ili9341.cyclo ./System/Src/ili9341.d ./System/Src/ili9341.o ./System/Src/ili9341.su ./System/Src/joystick.cyclo ./System/Src/joystick.d ./System/Src/joystick.o ./System/Src/joystick.su ./System/Src/lcd.cyclo ./System/Src/lcd.d ./System/Src/lcd.o ./System/Src/lcd.su ./System/Src/lcd_tileset.cyclo ./System/Src/lcd_tileset.d ./System/Src/lcd_tileset.o ./System/Src/lcd_tileset.su ./System/Src/micros.cyclo ./System/Src/micros.d ./System/Src/micros.o ./System/Src/micros.su ./System/Src/sd.cyclo ./System/Src/sd.d ./System/Src/sd.o ./System/Src/sd.su ./System/Src/ticks.cyclo ./System/Src/ticks.d ./System/Src/ticks.o ./System/Src/ticks.su ./System/Src/volume.cyclo ./System/Src/volume.d ./System/Src/volume.o ./System/Src/volume.su

.PHONY: clean-System-2f-Src

