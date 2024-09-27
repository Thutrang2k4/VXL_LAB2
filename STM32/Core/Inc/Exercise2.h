/*
 * Exercise2.h
 *
 *  Created on: Sep 15, 2024
 *      Author: LENOVO
 */

#ifndef INC_EXERCISE2_H_
#define INC_EXERCISE2_H_

#include "main.h"
#include "sortware_time.h"

#define  MAX_LED 4;
#define  MAX_LED_MATRIX 8;

void init_ledred();

void init_dot();

void init_7SEG();
void display7SEG(int count);

void update7SEG(int index);
void updateClockBuffer();
void updateMatrixBuffer();
void setRowPin(int index);
void init_LEDMatrix();
void updateLEDMatrix(int index);
void animation_Shift_Left();

void init_exercise2();
void exercise2_run();

#endif /* INC_EXERCISE2_H_ */
