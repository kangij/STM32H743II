/*
 * Peri_I2C.c
 *
 *  Created on: Jun 11, 2022
 *      Author: kangi
 */

#include <I2C/Peri_I2c.h>


void Peri_I2C_Init(uint8_t peri_num)
{
	switch(peri_num)
	{
	case PERI_I2C0:

		break;

	case PERI_I2C1:
		MX_I2C1_Init();
		break;

	default:
			break;
	}
}

/*-----------------------------------------------------*/

void Peri_I2C_MasterTrasmit(uint8_t mod,I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size)
{
	switch(mod)
	{
	case PERI_I2C_RTX_NORMAL:
		HAL_I2C_Master_Transmit(hi2c, DevAddress, pData, Size,100);
		break;

	case PERI_I2C_RTX_INT:
		HAL_I2C_Master_Transmit_IT(hi2c, DevAddress, pData, Size);
		break;

	case PERI_I2C_RTX_DMA:
		HAL_I2C_Master_Transmit_DMA(hi2c, DevAddress, pData, Size);
		break;

	default:
			break;
	}
}

void Peri_I2C_SlaveTrasmit(uint8_t mod,I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size)
{
	switch(mod)
	{
	case PERI_I2C_RTX_NORMAL:
		HAL_I2C_Slave_Transmit(hi2c, pData, Size,100);
		break;

	case PERI_I2C_RTX_INT:
		HAL_I2C_Slave_Transmit_IT(hi2c, pData, Size);
		break;

	case PERI_I2C_RTX_DMA:
		HAL_I2C_Slave_Transmit_DMA(hi2c, pData, Size);
		break;

	default:
			break;
	}
}

void Peri_I2C_MemTrasmit(uint8_t mod,I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress,uint16_t MemAddSize,
		uint8_t *pData, uint16_t Size)
{
	switch(mod)
	{
	case PERI_I2C_RTX_NORMAL:
		HAL_I2C_Mem_Write(hi2c, DevAddress, MemAddress,MemAddSize, pData, Size, 100);
		break;

	case PERI_I2C_RTX_INT:
		HAL_I2C_Mem_Write_IT(hi2c, DevAddress, MemAddress,MemAddSize, pData, Size);
		break;

	case PERI_I2C_RTX_DMA:
		HAL_I2C_Mem_Write_DMA(hi2c, DevAddress, MemAddress,MemAddSize, pData, Size);
		break;

	default:
			break;
	}
}

/*---------------------------------------------------*/


void Peri_I2C_MasterRead(uint8_t mod,I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size)
{
	switch(mod)
	{
	case PERI_I2C_RTX_NORMAL:
		HAL_I2C_Master_Receive(hi2c, DevAddress, pData,Size, 100);
		break;

	case PERI_I2C_RTX_INT:
		HAL_I2C_Master_Receive_IT(hi2c, DevAddress, pData, Size);
		break;

	case PERI_I2C_RTX_DMA:
		HAL_I2C_Master_Receive_DMA(hi2c, DevAddress, pData, Size);
		break;

	default:
			break;
	}
}

void Peri_I2C_SlaveRead(uint8_t mod,I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size)
{
	switch(mod)
	{
	case PERI_I2C_RTX_NORMAL:
		HAL_I2C_Slave_Receive(hi2c, pData, Size,100);
		break;

	case PERI_I2C_RTX_INT:
		HAL_I2C_Slave_Receive_IT(hi2c, pData, Size);
		break;

	case PERI_I2C_RTX_DMA:
		HAL_I2C_Slave_Receive_DMA(hi2c, pData, Size);
		break;

	default:
			break;
	}
}

void Peri_I2C_MemRead(uint8_t mod,I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress,uint16_t MemAddSize,
		uint8_t *pData, uint16_t Size)
{
	switch(mod)
	{
	case PERI_I2C_RTX_NORMAL:
		HAL_I2C_Mem_Read(hi2c, DevAddress, MemAddress,MemAddSize, pData, Size, 100);
		break;

	case PERI_I2C_RTX_INT:
		HAL_I2C_Mem_Read_IT(hi2c, DevAddress, MemAddress,MemAddSize, pData, Size);
		break;

	case PERI_I2C_RTX_DMA:
		HAL_I2C_Mem_Read_DMA(hi2c, DevAddress, MemAddress,MemAddSize, pData, Size);
		break;

	default:
			break;
	}
}

/*-----------------------------------------------------*/

void Peri_I2C_Status(I2C_HandleTypeDef *hi2c)
{
	HAL_I2C_StateTypeDef status=0;
	HAL_I2C_ModeTypeDef mode=0;
	uint32_t Error_Result=0;

	status=HAL_I2C_GetState(hi2c);
	mode=HAL_I2C_GetMode(hi2c);
	Error_Result=HAL_I2C_GetError(hi2c);
}

/*-----------------------------------------------------*/

void HAL_I2C_MasterTxCpltCallback(I2C_HandleTypeDef *hi2c)
{

}
void HAL_I2C_MasterRxCpltCallback(I2C_HandleTypeDef *hi2c)
{

}
void HAL_I2C_SlaveTxCpltCallback(I2C_HandleTypeDef *hi2c)
{

}
void HAL_I2C_SlaveRxCpltCallback(I2C_HandleTypeDef *hi2c)
{

}
void HAL_I2C_AddrCallback(I2C_HandleTypeDef *hi2c, uint8_t TransferDirection, uint16_t AddrMatchCode)
{

}
void HAL_I2C_ListenCpltCallback(I2C_HandleTypeDef *hi2c)
{

}
void HAL_I2C_MemTxCpltCallback(I2C_HandleTypeDef *hi2c)
{

}
void HAL_I2C_MemRxCpltCallback(I2C_HandleTypeDef *hi2c)
{

}
void HAL_I2C_ErrorCallback(I2C_HandleTypeDef *hi2c)
{

}
void HAL_I2C_AbortCpltCallback(I2C_HandleTypeDef *hi2c)
{

}

/*-----------------------------------------------------*/

