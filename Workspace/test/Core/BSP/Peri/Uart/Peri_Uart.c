/*
 * Peri_Uart.c
 *
 *  Created on: Jun 11, 2022
 *      Author: kangi
 */

#include "Peri_Uart.h"

void Peri_Uart_Init(uint8_t peri_num);
void Peri_Uart_DeInit(UART_HandleTypeDef* uartHandle);
void Peri_Uart_BuadRate_Change(UART_HandleTypeDef* uartHandle,uint32_t buadrate);
void Peri_Uart_Trasmit(uint8_t mod,UART_HandleTypeDef* uartHandle, uint8_t *data, uint8_t size);
void Peri_Uart_Receive(uint8_t mod,UART_HandleTypeDef* uartHandle, uint8_t *data, uint8_t size);
void Peri_Uart_DMA_Control(uint8_t mod, UART_HandleTypeDef* uartHandle);
void Peri_Uart_Abort_Control(uint8_t mod, UART_HandleTypeDef* uartHandle);
void Peri_Uart_Status_Check(void);

void Peri_Uart_Init(uint8_t peri_num)
{
	switch(peri_num)
	{
	case PERI_UART1:
		MX_USART1_UART_Init();
		break;

	case PERI_UART2:

		break;

	case PERI_UART3:

		break;

	case PERI_UART4:

		break;

	case PERI_UART5:

		break;

	case PERI_UART6:

		break;

	case PERI_UART7:

		break;

	case PERI_UART8:

		break;

	default:
			break;
	}
}

void Peri_Uart_DeInit(UART_HandleTypeDef* uartHandle)
{
	HAL_UART_DeInit(uartHandle);
}


void Peri_Uart_BuadRate_Change(UART_HandleTypeDef* uartHandle,uint32_t buadrate)
{
	uartHandle->Init.BaudRate=buadrate;
	HAL_UART_Init(uartHandle);
}

void Peri_Uart_Trasmit(uint8_t mod,UART_HandleTypeDef* uartHandle, uint8_t *data, uint8_t size)
{
	switch(mod)
	{
	case PERI_UART_RTX_NORMAL:
		HAL_UART_Transmit(uartHandle, data, size, 100);
		break;

	case PERI_UART_RTX_INT:
		HAL_UART_Transmit_IT(uartHandle, data, size);
		break;

	case PERI_UART_RTX_DMA:
		HAL_UART_Transmit_DMA(uartHandle, data, size);
		break;

	default:
			break;
	}
}

void Peri_Uart_Receive(uint8_t mod,UART_HandleTypeDef* uartHandle, uint8_t *data, uint8_t size)
{
	switch(mod)
	{
	case PERI_UART_RTX_NORMAL:
		HAL_UART_Receive(uartHandle, data, size, 100);
		break;

	case PERI_UART_RTX_INT:
		HAL_UART_Receive_IT(uartHandle, data, size);
		break;

	case PERI_UART_RTX_DMA:
		HAL_UART_Receive_DMA(uartHandle, data, size);
		break;

	default:
			break;
	}
}

void Peri_Uart_DMA_Control(uint8_t mod, UART_HandleTypeDef* uartHandle)
{
	switch(mod)
	{
	case PERI_UART_DMA_PAUSE:
		HAL_UART_DMAPause(uartHandle);
		break;

	case PERI_UART_DMA_RESUME:
		HAL_UART_DMAResume(uartHandle);
		break;

	case PERI_UART_DMA_STOP:
		HAL_UART_DMAStop(uartHandle);
		break;

	default:
			break;
	}
}

void Peri_Uart_Abort_Control(uint8_t mod, UART_HandleTypeDef* uartHandle)
{
	switch(mod)
	{
	case PERI_UART_ABORT:
		HAL_UART_Abort(uartHandle);
		break;

	case PERI_UART_ABORT_TRANS:
		HAL_UART_AbortTransmit(uartHandle);
		break;

	case PERI_UART_ABORT_RCV:
		HAL_UART_AbortReceive(uartHandle);
		break;

	case PERI_UART_ABORT_IT:
		HAL_UART_Abort_IT(uartHandle);
		break;

	case PERI_UART_ABORT_TRANS_IT:
		HAL_UART_AbortTransmit_IT(uartHandle);
		break;

	case PERI_UART_ABORT_RCV_IT:
		HAL_UART_AbortReceive_IT(uartHandle);
		break;

	default:
			break;
	}
}

void Peri_Uart_Status_Check(void)
{

}

void HAL_UART_TxHalfCpltCallback(UART_HandleTypeDef *huart)
{

}

void HAL_UART_TxCpltCallback(UART_HandleTypeDef *huart)
{

}

void HAL_UART_RxHalfCpltCallback(UART_HandleTypeDef *huart)
{

}

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{

}

void HAL_UART_ErrorCallback(UART_HandleTypeDef *huart)
{

}

void HAL_UART_AbortCpltCallback(UART_HandleTypeDef *huart)
{

}

void HAL_UART_AbortTransmitCpltCallback(UART_HandleTypeDef *huart)
{

}

void HAL_UART_AbortReceiveCpltCallback(UART_HandleTypeDef *huart)
{

}

