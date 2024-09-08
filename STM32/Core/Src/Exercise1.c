/*
 * Exercise1.c
 *
 *  Created on: Sep 7, 2024
 *      Author: LENOVO
 */
#include "Exercise1.h"

int counter=2;
int status=RED;

void init_exrcise1(){
	HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
	HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
}

void exercise1_run(){
	switch(status){
		case RED:
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
			counter--;
			if(counter<=0){
				status=YELLOW;
				counter=2;
			}
			break;
		case YELLOW:
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
			counter--;
			if(counter<=0){
				status=RED;
				counter=2;
			}
			break;
		default:
			break;
	}
}

