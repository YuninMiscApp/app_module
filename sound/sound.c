/**
  ******************************************************************************
  * @file sound.c
  * @author  leon.xie
  * @version v1.0.0
  * @date 2018-10-17 21:36:52
  * @brief  This file provides all the sound functions. 
  ******************************************************************************
  * @attention
  *
  * File For Yunin Software Team Only
  *
  * Copyright (C), 2017-2027, Yunin Software Team
  ******************************************************************************
  */ 

/* Includes ------------------------------------------------------------------*/

#include "sound.h"

#ifdef  __cplusplus
extern "C" {
#endif

/* Private typedef -----------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

static int sound_init(void)
{
	printf(COLOUR_GREEN"do %s (%p)...\n"COLOUR_NONE,__func__,sound_init);
    return 0;
}

static void sound_exit(void)
{
	printf(COLOUR_RED"do %s (%p)...\n"COLOUR_NONE,__func__,sound_exit);
}


module_init(sound_init);
module_exit(sound_exit);


#ifdef  __cplusplus
}
#endif


