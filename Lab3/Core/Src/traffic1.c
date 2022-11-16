/*
 * traffic1.c
 *
 *  Created on: Nov 8, 2022
 *      Author: 84336
 */
#include "traffic1.h"

int CountOnRoad1 = 3;

void SetRed1() {
	HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, SET);
}

void SetYellow1() {
	HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, SET);
}

void SetGreen1() {
	HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, RESET);
}

void Traffic1() {
	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
	Display7SEG(0);
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);

	if (status == MODE1) {
		SetGreen1();
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
		Display7SEG(CountOnRoad1--);
		SetTimer1(3000);

		if (CountOnRoad1 == 0) {
			CountOnRoad1 = 2;
		}

		if (timer1_flag == 1) {
			SetYellow1();
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
			Display7SEG(CountOnRoad1--);
			SetTimer1(2000);

			if (CountOnRoad1 == 0) {
				CountOnRoad1 = 5;
			}

			if (timer1_flag == 1) {
				SetRed1();
				HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
				Display7SEG(CountOnRoad1--);
				SetTimer1(5000);
			}
			if (CountOnRoad1 == 0) {
				CountOnRoad1 = 3;
			}
		}
	}
}
