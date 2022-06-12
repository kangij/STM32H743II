/*
 * debug.c
 *
 *  Created on: Jun 11, 2022
 *      Author: kangi
 */

#if 0

#include "Peri/ADC/Peri_Adc.h"
#include "adc.h"
#include "DEBUG/debug.h"

#define USE_ADC_PORT (&hadc1)

uint16_t adc_test[2];

void Driver_ADC_Data_Init(void)
{
	Peri_Adc_Init(PERI_ADC1);
	Peri_Adc_Start(PERI_ADC_DMA,USE_ADC_PORT,(uint32_t*)adc_test,2);
	//Peri_Adc_Start(PERI_ADC_POLL,USE_ADC_PORT,0,0);
}


/*
static void Driver_ADC_Polling_Test(void)
{
	uint32_t buf[2]={0,};
	Peri_Adc_Poll_Int_Get(USE_ADC_PORT, buf, 2);

	for(uint8_t count=0;count<2;count++)
	{
		Debug_Msg("ADC%d=[%x]\r\n",count,buf[count]);
	}
	HAL_Delay(50);
}
*/


static void Driver_ADC_DMA_Test(void)
{
	uint16_t buf[2]={0,};
	Peri_Adc_DMA_Get(USE_ADC_PORT, (uint32_t *)adc_test, (uint32_t *)buf, 2);
	for(uint8_t count=0;count<2;count++)
	{
		Debug_Msg("ADC%d=[%x]\r\n",count,buf[count]);
	}
	HAL_Delay(50);
}

void Driver_ADC_Test_Task(void)
{
	Driver_ADC_DMA_Test();
	//Driver_ADC_Polling_Test();
}

#else

void Driver_ADC_Data_Init(void)
{

}

void Driver_ADC_Test_Task(void)
{

}

#endif
