/*
 * Peri_Uart.h
 *
 *  Created on: Jun 11, 2022
 *      Author: kangi
 */

#ifndef BSP_PERI_I2C_H_
#define BSP_PERI_I2C_H_

#include "main.h"
#include "i2c.h"


enum PERI_I2C_PORT
{
	PERI_I2C0=0,
	PERI_I2C1=1,
};


enum PERI_I2C_RTX_MOD
{
	PERI_I2C_RTX_NORMAL=0,
	PERI_I2C_RTX_INT,
	PERI_I2C_RTX_DMA,
};


#endif /* BSP_PERI_PERI_UART_H_ */
