/*
 * display7seg.h
 *
 *  Created on: Nov 4, 2022
 *      Author: 84336
 */

#ifndef INC_DISPLAY7SEG_H_
#define INC_DISPLAY7SEG_H_

#include "main.h"
#include "global.h"
#include "traffic0.h"

void Display7SEG (int num);
void Led7SEGOff();
void DisplayClock2();
void DisplayClock3(int TimeOfRoad0);

#endif /* INC_DISPLAY7SEG_H_ */
