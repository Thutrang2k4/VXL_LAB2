/*
 * Exercise2.c
 *
 *  Created on: Sep 15, 2024
 *      Author: LENOVO
 */


#include "Exercise.h"

int led_buffer[4] = {1, 2, 3, 0};
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
int hour = 15, minute = 8, second = 50;
void clocktime(){
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
}
void updateClockBuffer(){
	led_buffer[0] = hour / 10;
	led_buffer[1] = hour % 10;
	led_buffer[2] = minute / 10;
	led_buffer[3] = minute % 10;
}
uint8_t matrix_buffer[8] = {0x00,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7};
uint8_t matrix_buffer_2[8]={0x99,0x99,0x99,0x99,0x81,0x99,0x99,0x99};
void updateMatrixBuffer(){
int char_A[8] = {0xE7,0xC3,0x99,0x99,0x81,0x81,0x99,0x99};
	matrix_buffer[0] = char_A[0];
	matrix_buffer[1] = char_A[1];
	matrix_buffer[2] = char_A[2];
	matrix_buffer[3] = char_A[3];
	matrix_buffer[4] = char_A[4];
	matrix_buffer[5] = char_A[5];
	matrix_buffer[6] = char_A[6];
	matrix_buffer[7] = char_A[7];
}
const uint8_t string_buffer[][8]={
		{0x00,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7}, //char T
		{0x99,0x99,0x99,0x99,0x81,0x99,0x99,0x99}, //char H
		{0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7}, //char I
		{0x3C,0x1C,0x2C,0x34,0x38,0x3C,0x3C,0x3C}, //char N
		{0x99,0x99,0x99,0x99,0x81,0x99,0x99,0x99}  //char H
};
void updatestringBuffer(int index){
	index = index % MAX_LED;
	matrix_buffer_2[0]=string_buffer[index][0];
	matrix_buffer_2[1]=string_buffer[index][1];
	matrix_buffer_2[2]=string_buffer[index][2];
	matrix_buffer_2[3]=string_buffer[index][3];
	matrix_buffer_2[4]=string_buffer[index][4];
	matrix_buffer_2[5]=string_buffer[index][5];
	matrix_buffer_2[6]=string_buffer[index][6];
	matrix_buffer_2[7]=string_buffer[index][7];
	}
void setRowPin(int index){
	GPIOB -> ODR &= 0x00ff;
	GPIOB -> ODR += (matrix_buffer[index] << 8);
}
void updateLEDMatrix(int index){
	index = index % MAX_LED_MATRIX;
	setRowPin(index);
	init_LEDMatrix();
    switch(index){
    	case 0:
    		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, RESET);
			break;
    	case 1:
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, RESET);
			break;
    	case 2:
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, RESET);
			break;
    	case 3:
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, RESET);
			break;
    	case 4:
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, RESET);
			break;
    	case 5:
    		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, RESET);
    		break;
    	case 6:
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, RESET);
			break;
    	case 7:
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, RESET);
			break;
    	default:
    		break;
    }
}
void animation_Shift_Left(){

	matrix_buffer[0] = (matrix_buffer[0]<<1) | (matrix_buffer_2[0]>>7);
	matrix_buffer[1] = (matrix_buffer[1]<<1) | (matrix_buffer_2[1]>>7);
	matrix_buffer[2] = (matrix_buffer[2]<<1) | (matrix_buffer_2[2]>>7);
	matrix_buffer[3] = (matrix_buffer[3]<<1) | (matrix_buffer_2[3]>>7);
	matrix_buffer[4] = (matrix_buffer[4]<<1) | (matrix_buffer_2[4]>>7);
	matrix_buffer[5] = (matrix_buffer[5]<<1) | (matrix_buffer_2[5]>>7);
	matrix_buffer[6] = (matrix_buffer[6]<<1) | (matrix_buffer_2[6]>>7);
	matrix_buffer[7] = (matrix_buffer[7]<<1) | (matrix_buffer_2[7]>>7);

	matrix_buffer_2[0]=matrix_buffer_2[0]<<1;
	matrix_buffer_2[1]=matrix_buffer_2[1]<<1;
	matrix_buffer_2[2]=matrix_buffer_2[2]<<1;
	matrix_buffer_2[3]=matrix_buffer_2[3]<<1;
	matrix_buffer_2[4]=matrix_buffer_2[4]<<1;
	matrix_buffer_2[5]=matrix_buffer_2[5]<<1;
	matrix_buffer_2[6]=matrix_buffer_2[6]<<1;
	matrix_buffer_2[7]=matrix_buffer_2[7]<<1;
}
