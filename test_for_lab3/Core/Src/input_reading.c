/*
 * input_processing.c
 *
 *  Created on: Oct 30, 2022
 *      Author: 84336
 */
#include "main.h"

# define N0_OF_BUTTONS 					1
# define DURATION_FOR_AUTO_INCREASING 	100
# define BUTTON_IS_PRESSED 				GPIO_PIN_RESET
# define BUTTON_IS_RELEASED 			GPIO_PIN_SET

static GPIO_PinState buttonBuffer[N0_OF_BUTTONS];
static GPIO_PinState debounceButtonBuffer1[N0_OF_BUTTONS];
static GPIO_PinState debounceButtonBuffer2[N0_OF_BUTTONS];
static uint8_t flagForButtonPress1s[N0_OF_BUTTONS];
static uint16_t counterForButtonPress1s[N0_OF_BUTTONS];

void button_reading (void) {
	for (char i = 0; i < N0_OF_BUTTONS; i++) {
		debounceButtonBuffer2[i] = debounceButtonBuffer1[i];
		debounceButtonBuffer1[i] = HAL_GPIO_ReadPin(BUTTON_1_GPIO_Port , BUTTON_1_Pin);
		if (debounceButtonBuffer1[i] == debounceButtonBuffer2[i]) {
			buttonBuffer[i] = debounceButtonBuffer1[i];
		}
		if( buttonBuffer [i ] == BUTTON_IS_PRESSED ) {
			if(counterForButtonPress1s [i] < DURATION_FOR_AUTO_INCREASING ) {
				counterForButtonPress1s [i]++;
			}
			else {
				flagForButtonPress1s [i] = 1;
			}
		}
		else {
			counterForButtonPress1s [i ] = 0;
			flagForButtonPress1s [i ] = 0;
		}
	}
}

unsigned char is_button_pressed ( uint8_t index ) {
	if( index >= N0_OF_BUTTONS ) return 0;
	return ( buttonBuffer [ index ] == BUTTON_IS_PRESSED ) ;
}

unsigned char is_button_pressed_1s ( unsigned char index ) {
	if( index >= N0_OF_BUTTONS ) return 0xff ;
	return ( flagForButtonPress1s [ index ] == 1) ;
}



