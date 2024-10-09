#include <iostream>
#include "E8_Mob.h"

Mob::Mob(float _pos_x, float _pos_y, float _max_vie, float _vie, float _dir_x, float _dir_y, float _speed) : Entity(_pos_x, _pos_y), Alive(_vie), AMovable(_dir_x, _dir_y, _speed) {
	std::cout << "Mob just created at x = " << _pos_x << " and y = " << _pos_y << " with " << _max_vie << " life with direction x = " << _dir_x << " and y = " << _dir_y << std::endl;
}

void Mob::Take_Damadge(float dmg) {
	std::cout << "Mob just die" << std::endl;
}

void Mob::Deplacement() {
	position.Set_x(position.Get_x() + direction.Get_x() * vitesse);
	position.Set_y(position.Get_y() + direction.Get_y() * vitesse);

	std::cout << "Player move to x = " << position.Get_x() << " and y = " << position.Get_y() << std::endl;
}