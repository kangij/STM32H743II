/*
 * Peri_Uart.h
 *
 *  Created on: Jun 11, 2022
 *      Author: kangi
 */

#ifndef BSP_PERI_UART_H_
#define BSP_PERI_UART_H_

#include "main.h"
#include "usart.h"

enum PERI_UART_PORT
{
	PERI_UART1=0,
	PERI_UART2=1,
	PERI_UART3=2,
	PERI_UART4=3,
	PERI_UART5=4,
	PERI_UART6=5,
	PERI_UART7=6,
	PERI_UART8=7,
};



enum PERI_UART_RTX_MOD
{
	PERI_UART_RTX_NORMAL=0,
	PERI_UART_RTX_INT,
	PERI_UART_RTX_DMA,
};

enum PERI_UART_DMA_CONTROL_MOD
{
	PERI_UART_DMA_IDLE=0,
	PERI_UART_DMA_PAUSE=1,
	PERI_UART_DMA_RESUME=2,
	PERI_UART_DMA_STOP=3,
};

enum PERI_UART_ABORT_MOD
{
	PERI_UART_ABORT=0,
	PERI_UART_ABORT_TRANS=1,
	PERI_UART_ABORT_RCV=2,
	PERI_UART_ABORT_IT=3,
	PERI_UART_ABORT_TRANS_IT=4,
	PERI_UART_ABORT_RCV_IT=5,
};


enum PERI_UART_BAUDRATE
{
	BAUD_9600=9600,
	BAUD_38400=38400,
	BAUD_115200=115200,
};

enum PERI_UART_STATUS
{
	PERI_UART_OFF=0,
	PERI_UART_ON,
};


extern void Peri_Uart_Init(uint8_t peri_num);
extern void Peri_Uart_DeInit(UART_HandleTypeDef* uartHandle);
extern void Peri_Uart_BuadRate_Change(UART_HandleTypeDef* uartHandle,uint32_t buadrate);
extern void Peri_Uart_Trasmit(uint8_t mod,UART_HandleTypeDef* uartHandle, uint8_t *data, uint8_t size);
extern void Peri_Uart_Receive(uint8_t mod,UART_HandleTypeDef* uartHandle, uint8_t *data, uint8_t size);
extern void Peri_Uart_DMA_Control(uint8_t mod, UART_HandleTypeDef* uartHandle);
extern void Peri_Uart_Abort_Control(uint8_t mod, UART_HandleTypeDef* uartHandle);
extern void Peri_Uart_Status_Check(void);

#endif /* BSP_PERI_PERI_UART_H_ */
