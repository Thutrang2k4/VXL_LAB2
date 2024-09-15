/*
 * sortware_time.h
 *
 *  Created on: Sep 14, 2024
 *      Author: LENOVO
 */

#ifndef INC_SORTWARE_TIME_H_
#define INC_SORTWARE_TIME_H_
#include "main.h"

extern int timer_ledred_flag;
extern int timer_led7seg_flag;
void setTimer_ledred(int duration);
void setTimer_led7seg(int duration);
void timer_run();

#endif /* INC_SORTWARE_TIME_H_ */
