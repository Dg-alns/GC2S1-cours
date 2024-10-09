#include <iostream>
#include "E1_Vector2.h"

Vector2::Vector2(float _x, float _y) : x(_x), y(_y){

}


void Vector2::Set_x(float _nb) {
	x = _nb;
}

void Vector2::Set_y(float _nb) {
	y = _nb;
}

float Vector2::Get_x() {
	return x;
}

float Vector2::Get_y() {
	return y;
}

