#include <iostream>
#include "E7_BreakableObject.h"

BreakableObject::BreakableObject(float _x, float _y, float _max_vie, float _vie) : Entity(_x, _y), Alive(_vie) {
	std::cout << "Breakable Object just created at x = " << _x << " and y = " << _y << " with " << _max_vie << " life" << std::endl;
}

void BreakableObject::Take_Damadge(float _dmg) {
	float tmp_vie(Get_Vie());
	vie -= _dmg;

	std::cout << "Breakable Object vie: " << tmp_vie << " -> " << Get_Vie() << std::endl;

	if (Get_Vie() <= 0) {
		std::cout << "Breakable Object just die" << std::endl;
	}
}