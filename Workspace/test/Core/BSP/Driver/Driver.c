/*
 * Peri_Uart.c
 *
 *  Created on: Jun 11, 2022
 *      Author: kangi
 */

#include "DEBUG/debug.h"

void BSP_Driver_Init(void)
{
	Driver_Uart_Debug_Init();
	Driver_ADC_Data_Init();
}
