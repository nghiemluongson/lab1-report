/*
 * traffic0.c
 *
 *  Created on: Nov 8, 2022
 *      Author: 84336
 */
#include "traffic0.h"

void SetRed0() {
	HAL_GPIO_WritePin(LED_RED_0_GPIO_Port, LED_RED_0_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_0_GPIO_Port, LED_YELLOW_0_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN_0_GPIO_Port, LED_GREEN_0_Pin, SET);
}

void SetYellow0() {
	HAL_GPIO_WritePin(LED_RED_0_GPIO_Port, LED_RED_0_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW_0_GPIO_Port, LED_YELLOW_0_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN_0_GPIO_Port, LED_GREEN_0_Pin, SET);
}

void SetGreen0() {
	HAL_GPIO_WritePin(LED_RED_0_GPIO_Port, LED_RED_0_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW_0_GPIO_Port, LED_YELLOW_0_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN_0_GPIO_Port, LED_GREEN_0_Pin, RESET);
}

void Traffic0() {
	//SetTimer1(100);

	//if (timer1_flag == 1) {
		SetRed0();
		DisplayClock3(5);
		SetTimer1(5000);
	//}

	if (timer1_flag == 1) {
		SetGreen0();
		DisplayClock3(3);
		SetTimer1(3000);
	}

//	SetYellow0();
//	DisplayClock3(2);
//	SetTimer1(2000);
}
