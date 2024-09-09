/*
 * Exercise3.c
 *
 *  Created on: Sep 7, 2024
 *      Author: LENOVO
 */
#include <Exercise4.h>

int num=0;

void init_exercise4(){
	HAL_GPIO_TogglePin(SEG_0_GPIO_Port, SEG_0_Pin);
	HAL_GPIO_TogglePin(SEG_1_GPIO_Port, SEG_1_Pin);
	HAL_GPIO_TogglePin(SEG_2_GPIO_Port, SEG_2_Pin);
	HAL_GPIO_TogglePin(SEG_3_GPIO_Port, SEG_3_Pin);
	HAL_GPIO_TogglePin(SEG_4_GPIO_Port, SEG_4_Pin);
	HAL_GPIO_TogglePin(SEG_5_GPIO_Port, SEG_5_Pin);
	HAL_GPIO_TogglePin(SEG_6_GPIO_Port, SEG_6_Pin);
}

void exercise4_run(){
	display7SEG(num);
	num++;
	if(num>9)
		num=0;
}

void  display7SEG(int count){
	switch(count){
		case 0:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
			break;
		case 1:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
			break;
		case 2:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, SET);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
			break;
		case 8:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
			break;
	}
}


