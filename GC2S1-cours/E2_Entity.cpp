#include <iostream>

#include "E2_Entity.h"

Entity::Entity() {
	vector2.Set_x(2.9);
	vector2.Set_y(3.2);
}
void Entity::Set_x(float _nb) {
	vector2.Set_x(_nb);
}

void Entity::Set_y(float _nb) {
	vector2.Set_y(_nb);
}

void Entity::Get_x() {
	vector2.Get_x();
}

void Entity::Get_y() {
	vector2.Get_y();
}

void Entity::Position() {
	std::cout << vector2.Get_x() << " " << vector2.Get_y();
}