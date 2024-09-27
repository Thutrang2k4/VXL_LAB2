/*
 * sortware_time.h
 *
 *  Created on: Sep 14, 2024
 *      Author: LENOVO
 */

#ifndef INC_SORTWARE_TIME_H_
#define INC_SORTWARE_TIME_H_
#include "main.h"

#define TICK 10
extern int time_flag[10];
extern int timer_ledred_flag;
extern int timer_dot_flag;
extern int timer_led7seg_flag;
extern int timer_clock_flag;
extern int timer_ledmatrix_flag;
extern int timer_animation_flag;

void setTimer(int index, int counter);
void setTimer_ledred(int duration);
void setTimer_dot(int duration);
void setTimer_led7seg(int duration);
void setTimer_clock(int duration);
void setTimer_ledmatrix(int duration);
void setTimer_animation(int duration);

void timer_run();

#endif /* INC_SORTWARE_TIME_H_ */
