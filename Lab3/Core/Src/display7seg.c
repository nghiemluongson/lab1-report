/*
 * display7seg.c
 *
 *  Created on: Nov 4, 2022
 *      Author: 84336
 */
#include "display7seg.h"

void Display7SEG (int num) {
	switch (num) {
	case 0:
		HAL_GPIO_WritePin(LED_a_GPIO_Port, LED_a_Pin, RESET);
		HAL_GPIO_WritePin(LED_b_GPIO_Port, LED_b_Pin, RESET);
		HAL_GPIO_WritePin(LED_c_GPIO_Port, LED_c_Pin, RESET);
		HAL_GPIO_WritePin(LED_d_GPIO_Port, LED_d_Pin, RESET);
		HAL_GPIO_WritePin(LED_e_GPIO_Port, LED_e_Pin, RESET);
		HAL_GPIO_WritePin(LED_f_GPIO_Port, LED_f_Pin, RESET);
		HAL_GPIO_WritePin(LED_g_GPIO_Port, LED_g_Pin, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(LED_a_GPIO_Port, LED_a_Pin, SET);
		HAL_GPIO_WritePin(LED_b_GPIO_Port, LED_b_Pin, RESET);
		HAL_GPIO_WritePin(LED_c_GPIO_Port, LED_c_Pin, RESET);
		HAL_GPIO_WritePin(LED_d_GPIO_Port, LED_d_Pin, SET);
		HAL_GPIO_WritePin(LED_e_GPIO_Port, LED_e_Pin, SET);
		HAL_GPIO_WritePin(LED_f_GPIO_Port, LED_f_Pin, SET);
		HAL_GPIO_WritePin(LED_g_GPIO_Port, LED_g_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(LED_a_GPIO_Port, LED_a_Pin, RESET);
		HAL_GPIO_WritePin(LED_b_GPIO_Port, LED_b_Pin, RESET);
		HAL_GPIO_WritePin(LED_c_GPIO_Port, LED_c_Pin, SET);
		HAL_GPIO_WritePin(LED_d_GPIO_Port, LED_d_Pin, RESET);
		HAL_GPIO_WritePin(LED_e_GPIO_Port, LED_e_Pin, RESET);
		HAL_GPIO_WritePin(LED_f_GPIO_Port, LED_f_Pin, SET);
		HAL_GPIO_WritePin(LED_g_GPIO_Port, LED_g_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(LED_a_GPIO_Port, LED_a_Pin, RESET);
		HAL_GPIO_WritePin(LED_b_GPIO_Port, LED_b_Pin, RESET);
		HAL_GPIO_WritePin(LED_c_GPIO_Port, LED_c_Pin, RESET);
		HAL_GPIO_WritePin(LED_d_GPIO_Port, LED_d_Pin, RESET);
		HAL_GPIO_WritePin(LED_e_GPIO_Port, LED_e_Pin, SET);
		HAL_GPIO_WritePin(LED_f_GPIO_Port, LED_f_Pin, SET);
		HAL_GPIO_WritePin(LED_g_GPIO_Port, LED_g_Pin, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(LED_a_GPIO_Port, LED_a_Pin, SET);
		HAL_GPIO_WritePin(LED_b_GPIO_Port, LED_b_Pin, RESET);
		HAL_GPIO_WritePin(LED_c_GPIO_Port, LED_c_Pin, RESET);
		HAL_GPIO_WritePin(LED_d_GPIO_Port, LED_d_Pin, SET);
		HAL_GPIO_WritePin(LED_e_GPIO_Port, LED_e_Pin, SET);
		HAL_GPIO_WritePin(LED_f_GPIO_Port, LED_f_Pin, RESET);
		HAL_GPIO_WritePin(LED_g_GPIO_Port, LED_g_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(LED_a_GPIO_Port, LED_a_Pin, RESET);
		HAL_GPIO_WritePin(LED_b_GPIO_Port, LED_b_Pin, SET);
		HAL_GPIO_WritePin(LED_c_GPIO_Port, LED_c_Pin, RESET);
		HAL_GPIO_WritePin(LED_d_GPIO_Port, LED_d_Pin, RESET);
		HAL_GPIO_WritePin(LED_e_GPIO_Port, LED_e_Pin, SET);
		HAL_GPIO_WritePin(LED_f_GPIO_Port, LED_f_Pin, RESET);
		HAL_GPIO_WritePin(LED_g_GPIO_Port, LED_g_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(LED_a_GPIO_Port, LED_a_Pin, RESET);
		HAL_GPIO_WritePin(LED_b_GPIO_Port, LED_b_Pin, SET);
		HAL_GPIO_WritePin(LED_c_GPIO_Port, LED_c_Pin, RESET);
		HAL_GPIO_WritePin(LED_d_GPIO_Port, LED_d_Pin, RESET);
		HAL_GPIO_WritePin(LED_e_GPIO_Port, LED_e_Pin, RESET);
		HAL_GPIO_WritePin(LED_f_GPIO_Port, LED_f_Pin, RESET);
		HAL_GPIO_WritePin(LED_g_GPIO_Port, LED_g_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(LED_a_GPIO_Port, LED_a_Pin, RESET);
		HAL_GPIO_WritePin(LED_b_GPIO_Port, LED_b_Pin, RESET);
		HAL_GPIO_WritePin(LED_c_GPIO_Port, LED_c_Pin, RESET);
		HAL_GPIO_WritePin(LED_d_GPIO_Port, LED_d_Pin, SET);
		HAL_GPIO_WritePin(LED_e_GPIO_Port, LED_e_Pin, SET);
		HAL_GPIO_WritePin(LED_f_GPIO_Port, LED_f_Pin, SET);
		HAL_GPIO_WritePin(LED_g_GPIO_Port, LED_g_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(LED_a_GPIO_Port, LED_a_Pin, RESET);
		HAL_GPIO_WritePin(LED_b_GPIO_Port, LED_b_Pin, RESET);
		HAL_GPIO_WritePin(LED_c_GPIO_Port, LED_c_Pin, RESET);
		HAL_GPIO_WritePin(LED_d_GPIO_Port, LED_d_Pin, RESET);
		HAL_GPIO_WritePin(LED_e_GPIO_Port, LED_e_Pin, RESET);
		HAL_GPIO_WritePin(LED_f_GPIO_Port, LED_f_Pin, RESET);
		HAL_GPIO_WritePin(LED_g_GPIO_Port, LED_g_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(LED_a_GPIO_Port, LED_a_Pin, RESET);
		HAL_GPIO_WritePin(LED_b_GPIO_Port, LED_b_Pin, RESET);
		HAL_GPIO_WritePin(LED_c_GPIO_Port, LED_c_Pin, RESET);
		HAL_GPIO_WritePin(LED_d_GPIO_Port, LED_d_Pin, RESET);
		HAL_GPIO_WritePin(LED_e_GPIO_Port, LED_e_Pin, SET);
		HAL_GPIO_WritePin(LED_f_GPIO_Port, LED_f_Pin, RESET);
		HAL_GPIO_WritePin(LED_g_GPIO_Port, LED_g_Pin, RESET);
		break;
	default:
		break;
	}
}

void Led7SEGOff() {
	HAL_GPIO_WritePin(LED_a_GPIO_Port, LED_a_Pin, SET);
	HAL_GPIO_WritePin(LED_b_GPIO_Port, LED_b_Pin, SET);
	HAL_GPIO_WritePin(LED_c_GPIO_Port, LED_c_Pin, SET);
	HAL_GPIO_WritePin(LED_d_GPIO_Port, LED_d_Pin, SET);
	HAL_GPIO_WritePin(LED_e_GPIO_Port, LED_e_Pin, SET);
	HAL_GPIO_WritePin(LED_f_GPIO_Port, LED_f_Pin, SET);
	HAL_GPIO_WritePin(LED_g_GPIO_Port, LED_g_Pin, SET);
}

void DisplayClock2() {
	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);

	if (HAL_GPIO_ReadPin(EN2_GPIO_Port, EN2_Pin) == RESET) {
		Display7SEG(0);
	}
}

void DisplayClock3(int TimeOfRoad0) {
	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);

	if (HAL_GPIO_ReadPin(EN3_GPIO_Port, EN3_Pin) == RESET) {
		Display7SEG(TimeOfRoad0--);
	}
}

