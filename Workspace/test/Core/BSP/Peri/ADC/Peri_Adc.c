/*
 * Peri_Uart.c
 *
 *  Created on: Jun 11, 2022
 *      Author: kangi
 */

#include "Peri_Adc.h"

#if 0

#include "adc.h"

void Peri_Adc_DMA_Get(ADC_HandleTypeDef* adcHandle,uint32_t *src,uint32_t *dst, uint8_t len);
void Peri_Adc_Poll_Int_Get(ADC_HandleTypeDef* adcHandle,uint32_t *buf,uint8_t len);
void Peri_Adc_Stop(uint8_t mod, ADC_HandleTypeDef* adcHandle);
void Peri_Adc_Start(uint8_t mod, ADC_HandleTypeDef* adcHandle,uint32_t *pData, uint32_t Length);
void Peri_Adc_DeInit(ADC_HandleTypeDef* adcHandle);
void Peri_Adc_Init(uint8_t adc_num);

void Peri_Adc_Init(uint8_t adc_num)
{
	switch(adc_num)
	{
	case PERI_ADC1:
		MX_ADC1_Init();
		break;

	case PERI_ADC2:

		break;

	case PERI_ADC3:

		break;

	default:
			break;
	}
}

void Peri_Adc_DeInit(ADC_HandleTypeDef* adcHandle)
{
	HAL_ADC_DeInit(adcHandle);
}

void Peri_Adc_Start(uint8_t mod, ADC_HandleTypeDef* adcHandle,uint32_t *pData, uint32_t Length)
{
#if (PERI_ADC_CALIBRATION_OPTION==PERI_ADC_ON)
	HAL_ADCEx_Calibration_Start(adcHandle, ADC_CALIB_OFFSET, ADC_SINGLE_ENDED);
#endif

	switch(mod)
	{
	case PERI_ADC_POLL:
		HAL_ADC_Start(adcHandle);
		break;

	case PERI_ADC_IT:
		HAL_ADC_Start_IT(adcHandle);
		break;

	case PERI_ADC_DMA:
		HAL_ADC_Start_DMA(adcHandle,pData,Length);
		break;

	default:
		break;
	}
}

void Peri_Adc_Stop(uint8_t mod, ADC_HandleTypeDef* adcHandle)
{
	switch(mod)
	{
	case PERI_ADC_POLL:
		HAL_ADC_Stop(adcHandle);
		break;

	case PERI_ADC_IT:
		HAL_ADC_Stop_IT(adcHandle);
		break;

	case PERI_ADC_DMA:
		HAL_ADC_Stop_DMA(adcHandle);
		break;

	default:
			break;
	}
}

void Peri_Adc_Poll_Int_Get(ADC_HandleTypeDef* adcHandle,uint32_t *buf,uint8_t len)
{
	uint8_t count=0;

	for(count=0;count<len;count++)
	{
		Peri_Adc_Start(PERI_ADC_POLL,adcHandle,0,0);
		HAL_ADC_PollForConversion(adcHandle, 100);
		buf[count]=HAL_ADC_GetValue(adcHandle);
		Peri_Adc_Stop(PERI_ADC_POLL,adcHandle);
	}
}


void Peri_Adc_DMA_Get(ADC_HandleTypeDef* adcHandle,uint32_t *src,uint32_t *dst, uint8_t len)
{
	uint8_t count=0;
	Peri_Adc_Stop(PERI_ADC_DMA,adcHandle);
	for(count=0;count<len;count++)
	{
		dst[count]=src[count];
	}
	Peri_Adc_Start(PERI_ADC_DMA,adcHandle,src,len);
}

void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef *hadc)
{

}
void HAL_ADC_ConvHalfCpltCallback(ADC_HandleTypeDef *hadc)
{

}
void HAL_ADC_LevelOutOfWindowCallback(ADC_HandleTypeDef *hadc)
{

}
void HAL_ADC_ErrorCallback(ADC_HandleTypeDef *hadc)
{

}

#else

void Peri_Adc_Init(uint8_t adc_num)
{

}

#endif


