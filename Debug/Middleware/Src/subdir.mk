################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Middleware/Src/diskio.c \
../Middleware/Src/ff.c \
../Middleware/Src/ffunicode.c 

OBJS += \
./Middleware/Src/diskio.o \
./Middleware/Src/ff.o \
./Middleware/Src/ffunicode.o 

C_DEPS += \
./Middleware/Src/diskio.d \
./Middleware/Src/ff.d \
./Middleware/Src/ffunicode.d 


# Each subdirectory must supply rules for building sources it contributes
Middleware/Src/%.o Middleware/Src/%.su Middleware/Src/%.cyclo: ../Middleware/Src/%.c Middleware/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32G474xx -DUSE_FULL_LL_DRIVER -DUSE_HAL_DRIVER -c -I"C:/Users/uporabnik/STM32CubeIDE/workspace/Misko_Tracker/System/Inc" -I"C:/Users/uporabnik/STM32CubeIDE/workspace/Misko_Tracker/Middleware/Inc" -I"C:/Users/uporabnik/STM32CubeIDE/workspace/Misko_Tracker/Application/Inc" -O3 -ffunction-sections -fdata-sections -Wall -Wextra -pedantic -Wconversion -Wshadow -isystem ../Core/Inc -isystem ../Drivers/STM32G4xx_HAL_Driver/Inc -isystem ../Drivers/STM32G4xx_HAL_Driver/Inc/Legacy -isystem ../Drivers/CMSIS/Include -isystem ../Drivers/CMSIS/Device/ST/STM32G4xx/Include -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Middleware-2f-Src

clean-Middleware-2f-Src:
	-$(RM) ./Middleware/Src/diskio.cyclo ./Middleware/Src/diskio.d ./Middleware/Src/diskio.o ./Middleware/Src/diskio.su ./Middleware/Src/ff.cyclo ./Middleware/Src/ff.d ./Middleware/Src/ff.o ./Middleware/Src/ff.su ./Middleware/Src/ffunicode.cyclo ./Middleware/Src/ffunicode.d ./Middleware/Src/ffunicode.o ./Middleware/Src/ffunicode.su

.PHONY: clean-Middleware-2f-Src

