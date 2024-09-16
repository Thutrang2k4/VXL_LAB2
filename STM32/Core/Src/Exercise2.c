/*
 * Exercise2.c
 *
 *  Created on: Sep 15, 2024
 *      Author: LENOVO
 */


#include "Exercise2.h"
int num_ledred=0;

void init_exercise2(){
	setTimer_ledred(100);
	setTimer_led7seg(1);
	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN3_Pin, RESET);
}
const int MAX_LED = 4;
int index_7SEG = 0;
int led_buffer[4] = {1, 2, 3, 4};
void update7SEG(int index){
	index = index % MAX_LED;
	switch(index){
	case 0:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
		display7SEG(led_buffer[index]);
		index=1;
		break;
	case 1:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
		display7SEG(led_buffer[index]);
		index=2;
		break;
	case 2:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
		display7SEG(led_buffer[index]);
		index=3;
		break;
	case 3:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
		display7SEG(led_buffer[index]);
		index=0;
		break;
	default:
		break;
	}
}
void updateClockBuffer(int hour,int minute,int second){
	led_buffer[0] = hour / 10;
	led_buffer[1] = hour % 10;
	led_buffer[2] = minute / 10;
	led_buffer[3] = minute % 10;
}
int hour = 15, minute = 8, second = 49;
void exercise2_run(){
	if(timer_ledred_flag==1){
		setTimer_ledred(100);
		HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
		HAL_GPIO_TogglePin(DOT_GPIO_Port, DOT_Pin);
		second++;
			  if (second >= 60){
			  second = 0;
			  minute++;
			  }
			  if(minute >= 60){
			  minute = 0;
			  hour++;
			  }
			  if(hour >=24){
			  hour = 0;
			  }
			  updateClockBuffer(hour,minute,second);
	}
	if(timer_led7seg_flag==1){
	  setTimer_led7seg(1);
	  update7SEG(index_7SEG++);
	}

}
