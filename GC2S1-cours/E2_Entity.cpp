#include <iostream>

#include "E2_Entity.h"

Entity::Entity(float _x, float _y) : position(_x, _y) {

}

void Entity::Set_position(float _x, float _y) {
	position.Set_x(_x);
	position.Set_y(_y);
}

Vector2 Entity::Get_position() {
	return position;
}