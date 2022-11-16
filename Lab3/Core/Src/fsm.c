/*
 * fsm.c
 *
 *  Created on: Nov 12, 2022
 *      Author: 84336
 */
#include "fsm.h"

void fsm_run() {
	switch (status) {
	case MODE1:
		DisplayClock2();

		Traffic0();
		break;
	default:
		break;
	}
}

