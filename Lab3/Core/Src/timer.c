/*
 * timer.c
 *
 *  Created on: Nov 8, 2022
 *      Author: 84336
 */
#include "timer.h"
#include "main.h"
#include "input_reading.h"

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
	if(htim->Instance == TIM2){
		button_reading();
	}
}

