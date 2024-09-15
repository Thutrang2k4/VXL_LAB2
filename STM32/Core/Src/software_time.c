/*
 * software_time.c
 *
 *  Created on: Sep 14, 2024
 *      Author: LENOVO
 */
#include "sortware_time.h"
int timer_ledred_counter =0;
int timer_ledred_flag = 0;

int timer_led7seg_counter =0;
int timer_led7seg_flag = 0;

void setTimer_ledred(int duration){
	timer_ledred_counter = duration;
	timer_ledred_flag = 0;
}
void setTimer_led7seg(int duration1){
	timer_led7seg_counter = duration1;
	timer_led7seg_flag = 0;
}
void timer_run(){
	if(timer_ledred_counter > 0){
		timer_ledred_counter--;
		if(timer_ledred_counter <= 0){
			timer_ledred_flag=1;
		}
	}
	if(timer_led7seg_counter > 0){
			timer_led7seg_counter--;
			if(timer_led7seg_counter <= 0){
				timer_led7seg_flag=1;
			}
	}
}
