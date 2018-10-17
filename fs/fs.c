/**
  ******************************************************************************
  * @file fs.c
  * @author  leon.xie
  * @version v1.0.0
  * @date 2018-10-17 21:37:06
  * @brief  This file provides all the fs functions. 
  ******************************************************************************
  * @attention
  *
  * File For Yunin Software Team Only
  *
  * Copyright (C), 2017-2027, Yunin Software Team
  ******************************************************************************
  */ 

/* Includes ------------------------------------------------------------------*/

#include "fs.h"

#ifdef  __cplusplus
extern "C" {
#endif

/* Private typedef -----------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

static int fs_init(void)
{
	printf(COLOUR_GREEN"do %s (%p)...\n"COLOUR_NONE,__func__,fs_init);
    return 0;
}

static void fs_exit(void)
{
	printf(COLOUR_RED"do %s (%p)...\n"COLOUR_NONE,__func__,fs_exit);
}


module_init(fs_init);
module_exit(fs_exit);

#ifdef  __cplusplus
}
#endif


