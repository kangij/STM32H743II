################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/gpio.c \
../Core/Src/i2c.c \
../Core/Src/i2s.c \
../Core/Src/main.c \
../Core/Src/spi.c \
../Core/Src/stm32h7xx_hal_msp.c \
../Core/Src/stm32h7xx_it.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32h7xx.c \
../Core/Src/usart.c 

OBJS += \
./Core/Src/gpio.o \
./Core/Src/i2c.o \
./Core/Src/i2s.o \
./Core/Src/main.o \
./Core/Src/spi.o \
./Core/Src/stm32h7xx_hal_msp.o \
./Core/Src/stm32h7xx_it.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32h7xx.o \
./Core/Src/usart.o 

C_DEPS += \
./Core/Src/gpio.d \
./Core/Src/i2c.d \
./Core/Src/i2s.d \
./Core/Src/main.d \
./Core/Src/spi.d \
./Core/Src/stm32h7xx_hal_msp.d \
./Core/Src/stm32h7xx_it.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32h7xx.d \
./Core/Src/usart.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32H743xx -c -I../Core/Inc -I"D:/Injun/Work/STM/H743IICT/Workspace/test/Core/BSP/Peri/Uart" -I"D:/Injun/Work/STM/H743IICT/Workspace/test/Core/BSP/Peri/ADC" -I"D:/Injun/Work/STM/H743IICT/Workspace/test/Core/BSP/Driver/DEBUG" -I"D:/Injun/Work/STM/H743IICT/Workspace/test/Core/BSP/Driver/ADC_Data" -I"D:/Injun/Work/STM/H743IICT/Workspace/test/Core/BSP/Peri" -I"D:/Injun/Work/STM/H743IICT/Workspace/test/Core/BSP" -I"D:/Injun/Work/STM/H743IICT/Workspace/test/Core/BSP/Driver" -I"D:/Injun/Work/STM/H743IICT/Workspace/test/Core/BSP/App" -I../Drivers/STM32H7xx_HAL_Driver/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Src

clean-Core-2f-Src:
	-$(RM) ./Core/Src/gpio.d ./Core/Src/gpio.o ./Core/Src/i2c.d ./Core/Src/i2c.o ./Core/Src/i2s.d ./Core/Src/i2s.o ./Core/Src/main.d ./Core/Src/main.o ./Core/Src/spi.d ./Core/Src/spi.o ./Core/Src/stm32h7xx_hal_msp.d ./Core/Src/stm32h7xx_hal_msp.o ./Core/Src/stm32h7xx_it.d ./Core/Src/stm32h7xx_it.o ./Core/Src/syscalls.d ./Core/Src/syscalls.o ./Core/Src/sysmem.d ./Core/Src/sysmem.o ./Core/Src/system_stm32h7xx.d ./Core/Src/system_stm32h7xx.o ./Core/Src/usart.d ./Core/Src/usart.o

.PHONY: clean-Core-2f-Src

