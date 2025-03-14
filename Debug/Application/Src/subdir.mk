################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Application/Src/app.c \
../Application/Src/audio.c \
../Application/Src/basic_utils.c \
../Application/Src/data.c \
../Application/Src/data_commands.c \
../Application/Src/logic.c \
../Application/Src/logic_chain.c \
../Application/Src/logic_phrase.c \
../Application/Src/logic_song.c \
../Application/Src/region.c \
../Application/Src/video.c 

OBJS += \
./Application/Src/app.o \
./Application/Src/audio.o \
./Application/Src/basic_utils.o \
./Application/Src/data.o \
./Application/Src/data_commands.o \
./Application/Src/logic.o \
./Application/Src/logic_chain.o \
./Application/Src/logic_phrase.o \
./Application/Src/logic_song.o \
./Application/Src/region.o \
./Application/Src/video.o 

C_DEPS += \
./Application/Src/app.d \
./Application/Src/audio.d \
./Application/Src/basic_utils.d \
./Application/Src/data.d \
./Application/Src/data_commands.d \
./Application/Src/logic.d \
./Application/Src/logic_chain.d \
./Application/Src/logic_phrase.d \
./Application/Src/logic_song.d \
./Application/Src/region.d \
./Application/Src/video.d 


# Each subdirectory must supply rules for building sources it contributes
Application/Src/%.o Application/Src/%.su Application/Src/%.cyclo: ../Application/Src/%.c Application/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g -DDEBUG -DSTM32G474xx -DUSE_FULL_LL_DRIVER -DUSE_HAL_DRIVER -c -I../Core/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Include -I../Drivers/CMSIS/Device/ST/STM32G4xx/Include -I"C:/Users/uporabnik/STM32CubeIDE/workspace/Misko_Tracker/System/Inc" -I"C:/Users/uporabnik/STM32CubeIDE/workspace/Misko_Tracker/Middleware/Inc" -I"C:/Users/uporabnik/STM32CubeIDE/workspace/Misko_Tracker/Application/Inc" -O0 -ffunction-sections -fdata-sections -Wall -Wextra -pedantic -Wmissing-include-dirs -Wswitch-default -Wconversion -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Application-2f-Src

clean-Application-2f-Src:
	-$(RM) ./Application/Src/app.cyclo ./Application/Src/app.d ./Application/Src/app.o ./Application/Src/app.su ./Application/Src/audio.cyclo ./Application/Src/audio.d ./Application/Src/audio.o ./Application/Src/audio.su ./Application/Src/basic_utils.cyclo ./Application/Src/basic_utils.d ./Application/Src/basic_utils.o ./Application/Src/basic_utils.su ./Application/Src/data.cyclo ./Application/Src/data.d ./Application/Src/data.o ./Application/Src/data.su ./Application/Src/data_commands.cyclo ./Application/Src/data_commands.d ./Application/Src/data_commands.o ./Application/Src/data_commands.su ./Application/Src/logic.cyclo ./Application/Src/logic.d ./Application/Src/logic.o ./Application/Src/logic.su ./Application/Src/logic_chain.cyclo ./Application/Src/logic_chain.d ./Application/Src/logic_chain.o ./Application/Src/logic_chain.su ./Application/Src/logic_phrase.cyclo ./Application/Src/logic_phrase.d ./Application/Src/logic_phrase.o ./Application/Src/logic_phrase.su ./Application/Src/logic_song.cyclo ./Application/Src/logic_song.d ./Application/Src/logic_song.o ./Application/Src/logic_song.su ./Application/Src/region.cyclo ./Application/Src/region.d ./Application/Src/region.o ./Application/Src/region.su ./Application/Src/video.cyclo ./Application/Src/video.d ./Application/Src/video.o ./Application/Src/video.su

.PHONY: clean-Application-2f-Src

