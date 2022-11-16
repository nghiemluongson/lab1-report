/*
 * software_timer.h
 *
 *  Created on: Nov 2, 2022
 *      Author: 84336
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag, timer2_flag, timer3_flag;
extern int timer1ms_flag, timer100ms_flag;

void SetTimer1(int duration);
void SetTimer2(int duration);
void SetTimer3(int duration);
void TimerRun();


#endif /* INC_SOFTWARE_TIMER_H_ */
