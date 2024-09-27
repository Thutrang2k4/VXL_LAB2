/*
 * Exercise1.c
 *
 *  Created on: Sep 15, 2024
 *      Author: LENOVO
 */


#include "Exercise1.h"
int num=0;
void init_exercise1(){
	  setTimer_ledred(1000);
}
void exercise1_run(){
	  if(timer_ledred_flag==1){
	  		  setTimer_ledred(1000);
	  		  HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
	  }
}
