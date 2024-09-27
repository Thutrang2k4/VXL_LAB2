/*
 * Exercise2.h
 *
 *  Created on: Sep 15, 2024
 *      Author: LENOVO
 */

#ifndef INC_EXERCISE_H_
#define INC_EXERCISE_H_

#include "main.h"
#include "Output.h"

#define  MAX_LED 4;
#define  MAX_LED_MATRIX 8;

void update7SEG(int index);

void updateClockBuffer();

void updateMatrixBuffer();
void setRowPin(int index);

void updateLEDMatrix(int index);
void animation_Shift_Left();
void clocktime();
void updatestringBuffer(int index);


#endif /* INC_EXERCISE_H_ */
