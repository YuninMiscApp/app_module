/**
  ******************************************************************************
  * @file main.c
  * @author  leon.xie
  * @version v1.0.0
  * @date 2018-5-7 21:59:34
  * @brief  This file provides all the main functions. 
  ******************************************************************************
  * @attention
  *
  * File For Yunin Software Team Only
  *
  * Copyright (C), 2017-2027, Yunin Software Team
  ******************************************************************************
  */ 

/* Includes ------------------------------------------------------------------*/

#include "type.h"
#include "ipc.h"
#include "block.h"
#include "init.h"



#ifdef  __cplusplus
extern "C" {
#endif

/* Private typedef -----------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/
extern initcall_t __initcall_start[], __initcall_end[];

void initcalls(void)
{
	initcall_t *call;
	int result;
	printf("%s do init call... \n", __func__);
	for (call = __initcall_start; call < __initcall_end; call++) 
	{
		result = (*call)();
		if(result < 0)
		{
			printf("do_initcalls(%p): error code %d\n", call,result);
		}
	}
}


int
main(int argc, char *argv[])
{
	initcalls();
	return 0;
}

#ifdef  __cplusplus
}
#endif


