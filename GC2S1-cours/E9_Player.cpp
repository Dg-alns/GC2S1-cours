#include <iostream>
#include "E9_Player.h"

Player::Player(float _pos_x, float _pos_y, float _max_vie, float _vie, float _dir_x, float _dir_y, float _speed) : Entity(_pos_x, _pos_y), Alive(_vie), AMovable(_dir_x, _dir_y, _speed) {
	std::cout << "Player just created at x = " << _pos_x << " and y = " << _pos_y << " with " << _max_vie << " life with direction x = " << _dir_x << " and y = " << _dir_y << std::endl;
}

void Player::Take_Damadge(float _dmg) {
	float tmp_vie(Get_Vie());
	vie -= _dmg;

	std::cout << "Player vie: " << tmp_vie << " -> " << Get_Vie() << std::endl;

	if (Get_Vie() <= 0) {
		std::cout << "Player just die" << std::endl;
	}
}

void Player::Deplacement(Entity& target) {
	float distance_x(target.position.Get_x() - position.Get_x()); 
	float distance_y(target.position.Get_y() - position.Get_y());

	Set_Direction(distance_x, distance_y);

	float k(Get_Speed() / (direction.Get_x() + direction.Get_y())); 

	if (direction.Get_x() + direction.Get_y() < 0) {
		k *= -1;
	}

	position.Set_x(position.Get_x() + k * direction.Get_x());
	position.Set_y(position.Get_y() + k * direction.Get_y());

	std::cout << "Player move to x = " << position.Get_x() << " and y = " << position.Get_y() << std::endl;
}

void Player::Attack(Alive & target) {
	std::cout << "Player just attacked." << std::endl;
	target.Take_Damadge(10);
}