/*
 * debug.c
 *
 *  Created on: Jun 11, 2022
 *      Author: kangi
 */
#ifndef BSP_DRIVER_DEBUG_H_
#define BSP_DRIVER_DEBUG_H_

extern void Driver_Uart_Debug_Init(void);
extern void Debug_Msg(const char *data,...);

#endif
