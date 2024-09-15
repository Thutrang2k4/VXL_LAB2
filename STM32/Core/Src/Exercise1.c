/*
 * Exercise1.c
 *
 *  Created on: Sep 15, 2024
 *      Author: LENOVO
 */


#include "Exercise1.h"
int num=0;
void init_exercise1(){
	  setTimer_ledred(100);
	  setTimer_led7seg(50);
}
void exercise1_run(){
	  if(timer_ledred_flag==1){
		  setTimer_ledred(100);
		  HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
	  }
	  if(timer_led7seg_flag==1){
		  setTimer_led7seg(50);
		  switch(num){
		  		case 0:
		  			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
		  			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		  			display7SEG(1);
		  			num=1;
		  			break;
		  		case 1:
		  			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		  			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
		  			display7SEG(2);
		  			num=0;
		  			break;
		  		default:
		  			break;
		  	}
	  }
}
