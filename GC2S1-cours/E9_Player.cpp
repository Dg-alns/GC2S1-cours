#include <iostream>
#include "E9_Player.h"

Player::Player(float _pos_x, float _pos_y, float _max_vie, float _vie, float _dir_x, float _dir_y, float _speed) : Entity(_pos_x, _pos_y), Alive(_vie), AMovable(_dir_x, _dir_y, _speed) {
	std::cout << "Player just created at x = " << _pos_x << " and y = " << _pos_y << " with " << _max_vie << " life with direction x = " << _dir_x << " and y = " << _dir_y << std::endl;
}

void Player::Take_Damadge(float dmg) {
	std::cout << "Player just die" << std::endl;
}

void Player::Deplacement(float _target_pos_x, float _target_pos_y) {
	float distance_x(_target_pos_x - position.Get_x());
	float distance_y(_target_pos_y - position.Get_y());
	Set_Direction(distance_x, distance_y);
	position.Set_x(position.Get_x() + (direction.Get_x() * vitesse));
	position.Set_y(position.Get_y() + (direction.Get_y() * vitesse));

	std::cout << "Player move to x = " << position.Get_x() << " and y = " << position.Get_y() << std::endl;
}

void Player::Attack(Alive* player) {
	player->Take_Damadge(10);
	std::cout << "Player just attacked." << std::endl;
}