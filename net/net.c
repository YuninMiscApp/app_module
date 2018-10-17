/**
  ******************************************************************************
  * @file net.c
  * @author  leon.xie
  * @version v1.0.0
  * @date 2018-10-17 21:37:00
  * @brief  This file provides all the net functions. 
  ******************************************************************************
  * @attention
  *
  * File For Yunin Software Team Only
  *
  * Copyright (C), 2017-2027, Yunin Software Team
  ******************************************************************************
  */ 

/* Includes ------------------------------------------------------------------*/

#include "net.h"

#ifdef  __cplusplus
extern "C" {
#endif

/* Private typedef -----------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/
static int net_init(void)
{
	printf(COLOUR_GREEN"do %s (%p)...\n"COLOUR_NONE,__func__,net_init);
    return 0;
}

static void net_exit(void)
{
	printf(COLOUR_RED"do %s (%p)...\n"COLOUR_NONE,__func__,net_exit);
}


module_init(net_init);
module_exit(net_exit);

#ifdef  __cplusplus
}
#endif


