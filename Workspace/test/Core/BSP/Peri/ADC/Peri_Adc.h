/*
 * Peri_Uart.h
 *
 *  Created on: Jun 11, 2022
 *      Author: kangi
 */

#ifndef BSP_PERI_ADC_H_
#define BSP_PERI_ADC_H_

#include "main.h"

enum PERI_ADC_USE_STAT
{
	PERI_ADC_USE=0,
	PERI_ADC_UNUSED=1
};

#define PERI_ADC_FUNC_USE (PERI_ADC_UNUSED)

enum PERI_ADC_IP_NUM
{
	PERI_ADC1=0,
	PERI_ADC2=1,
	PERI_ADC3=2,
};

enum PERI_ADC_START_POLL_INT_MOD
{
	PERI_ADC_POLL=0,
	PERI_ADC_IT=1,
	PERI_ADC_DMA=2,
};

enum PERI_ADC_STATUS
{
	PERI_ADC_OFF=0,
	PERI_ADC_ON,
};

#define PERI_ADC_CALIBRATION_OPTION  (PERI_ADC_OFF)

#if 0
	extern void Peri_Adc_DMA_Get(ADC_HandleTypeDef* adcHandle,uint32_t *src,uint32_t *dst, uint8_t len);
	extern void Peri_Adc_Poll_Int_Get(ADC_HandleTypeDef* adcHandle,uint32_t *buf,uint8_t len);
	extern void Peri_Adc_Stop(uint8_t mod, ADC_HandleTypeDef* adcHandle);
	extern void Peri_Adc_Start(uint8_t mod, ADC_HandleTypeDef* adcHandle,uint32_t *pData, uint32_t Length);
	extern void Peri_Adc_DeInit(ADC_HandleTypeDef* adcHandle);
#endif

extern void Peri_Adc_Init(uint8_t adc_num);

#endif /* BSP_PERI_PERI_UART_H_ */
