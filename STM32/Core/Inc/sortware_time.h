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
extern int timer_flag[10];

void setTimer(int index, int counter);

void timer_run();

#endif /* INC_SORTWARE_TIME_H_ */
