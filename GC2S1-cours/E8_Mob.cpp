#include <iostream>
#include "E8_Mob.h"

Mob::Mob(float _pos_x, float _pos_y, float _max_vie, float _vie, float _dir_x, float _dir_y, float _speed) : Entity(_pos_x, _pos_y), Alive(_vie), AMovable(_dir_x, _dir_y, _speed) {
	std::cout << "Mob just created at x = " << _pos_x << " and y = " << _pos_y << " with " << _max_vie << " life with direction x = " << _dir_x << " and y = " << _dir_y << std::endl;
}

void Mob::Take_Damadge(float _dmg) {
	float tmp_vie(Get_Vie());
	vie -= _dmg;

	std::cout << "Mob vie: " << tmp_vie << " -> " << Get_Vie() << std::endl;

	if (Get_Vie() <= 0) {
		std::cout << "Mob just die" << std::endl;
	}
}


void Mob::Deplacement(Entity & target) {
	float distance_x(target.position.Get_x() - position.Get_x());
	float distance_y(target.position.Get_y() - position.Get_y());

	Set_Direction(distance_x, distance_y);

	float k(Get_Speed() / (direction.Get_x() + direction.Get_y()));

	if (direction.Get_x() + direction.Get_y() < 0) {
		k *= -1;
	}

	position.Set_x(position.Get_x() + k * direction.Get_x());
	position.Set_y(position.Get_y() + k * direction.Get_y());

	std::cout << "Mob move to x = " << position.Get_x() << " and y = " << position.Get_y() << std::endl;
}