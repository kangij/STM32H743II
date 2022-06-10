################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/BSP/Peri/Uart/Peri_Uart.c 

OBJS += \
./Core/BSP/Peri/Uart/Peri_Uart.o 

C_DEPS += \
./Core/BSP/Peri/Uart/Peri_Uart.d 


# Each subdirectory must supply rules for building sources it contributes
Core/BSP/Peri/Uart/%.o: ../Core/BSP/Peri/Uart/%.c Core/BSP/Peri/Uart/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32H743xx -c -I../Core/Inc -I"D:/Injun/Work/STM/H743IICT/Workspace/test/Core/BSP" -I"D:/Injun/Work/STM/H743IICT/Workspace/test/Core/BSP/Peri" -I"D:/Injun/Work/STM/H743IICT/Workspace/test/Core/BSP/Driver" -I"D:/Injun/Work/STM/H743IICT/Workspace/test/Core/BSP/App" -I../Drivers/STM32H7xx_HAL_Driver/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-BSP-2f-Peri-2f-Uart

clean-Core-2f-BSP-2f-Peri-2f-Uart:
	-$(RM) ./Core/BSP/Peri/Uart/Peri_Uart.d ./Core/BSP/Peri/Uart/Peri_Uart.o

.PHONY: clean-Core-2f-BSP-2f-Peri-2f-Uart

