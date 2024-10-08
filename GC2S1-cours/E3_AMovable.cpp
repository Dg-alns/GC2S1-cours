#include <iostream>

#include "E3_AMovable.h"

AMovable::AMovable(float _direction_x, float _direction_y, float _speed) : direction(_direction_x, _direction_y), vitesse(_speed) {

}

void AMovable::Set_Direction(float _x, float _y) {
	direction.Set_x(_x);
	direction.Set_y(_y);
}

void AMovable::Set_Speed(float _speed) {
	vitesse = _speed;
}