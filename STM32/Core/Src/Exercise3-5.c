/*
 * Exercise3_5.c
 *
 *  Created on: Sep 7, 2024
 *      Author: LENOVO
 */

#include "Exercise3-5.h"

int traffic_status_1=GREEN;
int traffic_status_2=RED;
int traffic_counter_1=GREEN;
int traffic_counter_2=RED;

void init_exercise3_5(){
	HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, SET);
	HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, SET);
	HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, SET);
	HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
	HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, SET);
	HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, SET);
	HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, SET);
	HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, SET);
	HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, SET);
	HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, SET);
	HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, SET);
	HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, SET);
}
void exercise3_5_run(){
	switch(traffic_status_1){
		case RED:
			HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, SET);
			HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, RESET);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, SET);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
			HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, RESET);
			traffic_counter_1--;
			display7SEG(traffic_counter_1);
			if(traffic_counter_1<=0){
				traffic_status_1=GREEN;
				traffic_counter_1=GREEN;
			}
			break;
		case YELLOW:
			HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, RESET);
			HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, SET);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, SET);
			HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, RESET);
			traffic_counter_1--;
			display7SEG(traffic_counter_1);
			if(traffic_counter_1<=0){
				  traffic_status_1=RED;
				  traffic_counter_1=RED;
			  }
			break;
		case GREEN:
			HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, RESET);
			HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, RESET);
			HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, SET);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
			HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, SET);
			traffic_counter_1--;
			display7SEG(traffic_counter_1);
			if(traffic_counter_1<=0){
				traffic_status_1=YELLOW;
				traffic_counter_1=YELLOW;
			}
			break;
		default:
			break;
	}
	switch(traffic_status_2){
		case RED:
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, SET);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
			HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, SET);
			HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, RESET);
			HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, RESET);
			traffic_counter_2--;
			display7SEG_2(traffic_counter_2);
			if(traffic_counter_2<=0){
				traffic_status_2=GREEN;
				traffic_counter_2=GREEN;
			}
			break;
		case YELLOW:
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, SET);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
			HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, RESET);
			HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, SET);
			HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, RESET);
			traffic_counter_2--;
			display7SEG_2(traffic_counter_2);
			if(traffic_counter_2<=0){
				traffic_status_2=RED;
				traffic_counter_2=RED;
			}
			break;
		case GREEN:
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
			HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, RESET);
			HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, RESET);
			HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, SET);
			traffic_counter_2--;
			display7SEG_2(traffic_counter_2);
			if(traffic_counter_2<=0){
				traffic_status_2=YELLOW;
				traffic_counter_2=YELLOW;
			}
			break;
		  default:
			break;
	}
}
