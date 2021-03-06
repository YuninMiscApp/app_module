/**
  ******************************************************************************
  * @file block.c
  * @author  leon.xie
  * @version v1.0.0
  * @date 2018-5-7 21:34:35
  * @brief  This file provides all the block functions. 
  ******************************************************************************
  * @attention
  *
  * File For Yunin Software Team Only
  *
  * Copyright (C), 2017-2027, Yunin Software Team
  ******************************************************************************
  */ 

/* Includes ------------------------------------------------------------------*/
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#include"block.h"
#include"init.h"

#ifdef  __cplusplus
extern "C" {
#endif

/* Private typedef -----------------------------------------------------------*/
struct _block_info_ {
    /*< public >*/
    /*< protected >*/
    /*< private >*/
	char *name;
	int reserve;
};

/* Private macro -------------------------------------------------------------*/
#define BLOCK_NAME  "block"
/* Private variables ---------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/***************************************************
 * Function : block_
 * Author : leon.xie
 * Creat Date : 2018/05/07  21:35:56
 * Description : none
 * In-Parameter : as below
 * Return : as below
 * Modify : none
 **************************************************/
char* block_name_get(block_info_t *p)
{
	ASSERT(NULL != p);
    return p->name;
}

/***************************************************
 * Function : block_new
 * Author : leon.xie
 * Creat Date : 2018/05/07  21:34:46
 * Description : none
 * In-Parameter : as below
 * Return : as below
 * Modify : none
 **************************************************/
block_info_t *block_new(void)
{
	block_info_t *p = (block_info_t *)malloc(sizeof(block_info_t));
	ASSERT(NULL != p);
	p->name = strdup(BLOCK_NAME);
	return p;
}


/***************************************************
 * Function : block_destroy
 * Author : leon.xie
 * Creat Date : 2018/05/07  21:34:56
 * Description : none
 * In-Parameter : as below
 * Return : as below
 * Modify : none
 **************************************************/
int block_destroy(block_info_t *p)
{
	ASSERT(NULL != p);
	if(p->name)
		free(p->name);
	free(p);
    return 0;
}


/***************************************************
 * Function : block_init
 * Author : leon.xie
 * Creat Date : 2018/10/17  21:10:29
 * Description : none
 * In-Parameter : as below
 * Return : as below
 * Modify : none
 **************************************************/
static int block_init(void)
{
	printf(COLOUR_GREEN"do %s (%p)...\n"COLOUR_NONE,__func__,block_init);
    return 0;
}


/***************************************************
 * Function : block_exit
 * Author : leon.xie
 * Creat Date : 2018/10/17  21:12:57
 * Description : none
 * In-Parameter : as below
 * Return : as below
 * Modify : none
 **************************************************/
static void block_exit(void)
{
	printf(COLOUR_RED"do %s (%p)...\n"COLOUR_NONE,__func__,block_exit);
}


module_init(block_init);
module_exit(block_exit);


#ifdef  __cplusplus
}
#endif








