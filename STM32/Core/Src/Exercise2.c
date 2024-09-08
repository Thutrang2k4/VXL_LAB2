/*
 * Exercise2.c
 *
 *  Created on: Sep 7, 2024
 *      Author: LENOVO
 */
#include "Exercise2.h"

int counter_2=GREEN;
int status_2=GREEN;

void init_exercise2(){
	HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
    HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
    HAL_GPIO_TogglePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin);
}

void exercise2_run(){
	switch(status_2){
		case RED:
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
			counter_2--;
			if(counter_2<=0){
				status_2=GREEN;
				counter_2=GREEN;
			}
			break;
		case YELLOW:
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
			counter_2--;
			if(counter_2<=0){
				status_2=RED;
				counter_2=RED;
			}
			break;
		case GREEN:
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
			counter_2--;
			if(counter_2<=0){
				status_2=YELLOW;
				counter_2=YELLOW;
			}
			break;
		default:
			break;
	}
}
