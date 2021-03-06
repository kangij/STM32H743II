/*
 * debug.c
 *
 *  Created on: Jun 11, 2022
 *      Author: kangi
 */
#include "Peri/Uart/Peri_Uart.h"
#include "usart.h"
#include "stdio.h"

#define DEBUG_UART_PORT (&huart1)
#define DEBUG_BAUDRATE  (BAUD_115200)

void Driver_Uart_Debug_Init(void)
{
	Peri_Uart_Init(PERI_UART1);
	Peri_Uart_BuadRate_Change(DEBUG_UART_PORT, DEBUG_BAUDRATE);
}

int _write(int file, char *ptr, int len)
{
	HAL_UART_Transmit(DEBUG_UART_PORT,(uint8_t*)ptr,(uint16_t)len,100);
	fflush(stdout);
	return len;
}

void Debug_Msg(const char *data,...)
{
	printf(data);
}
