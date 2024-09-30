/*
 * software_time.c
 *
 *  Created on: Sep 14, 2024
 *      Author: LENOVO
 */
#include "sortware_time.h"

int timerCounter[10];
int timer_flag[10];

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
