/*
 * software_time.c
 *
 *  Created on: Sep 14, 2024
 *      Author: LENOVO
 */
#include "sortware_time.h"

int timer_ledred_counter =0;
int timer_ledred_flag = 0;

int timer_dot_counter =0;
int timer_dot_flag = 0;

int timer_led7seg_counter =0;
int timer_led7seg_flag = 0;

int timer_clock_counter =0;
int timer_clock_flag = 0;

int timer_ledmatrix_counter =0;
int timer_ledmatrix_flag = 0;

int timer_animation_counter =0;
int timer_animation_flag = 0;

int timerCounter[10];
int timer_flag[10];

void setTimer_ledred(int duration){
	timer_ledred_counter = duration/TICK;
	timer_ledred_flag = 0;
}
void setTimer_dot(int duration){
	timer_dot_counter = duration/TICK;
	timer_dot_flag = 0;
}
void setTimer_led7seg(int duration){
	timer_led7seg_counter = duration/TICK;
	timer_led7seg_flag = 0;
}
void setTimer_clock(int duration){
	timer_clock_counter = duration/TICK;
	timer_clock_flag = 0;
}
void setTimer_ledmatrix(int duration){
	timer_ledmatrix_counter = duration/TICK;
	timer_ledmatrix_flag = 0;
}
void setTimer_animation(int duration){
	timer_animation_counter = duration/TICK;
	timer_animation_flag = 0;
}
void setTimer(int index, int counter){
	timerCounter[index]=counter/TICK;
	timer_flag[index]=0;
}
void timer_run(){
	for(int i=0;i<10;i++){
		if(timerCounter[i]>=0){
			timerCounter[i]--;
			if(timerCounter[i]<=0){
				timer_flag[i]=1;
			}
		}
	}
}
