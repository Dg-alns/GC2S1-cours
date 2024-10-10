#include <iostream>
#include "E7_BreakableObject.h"

BreakableObject::BreakableObject(float _x, float _y, float _max_vie, float _vie) : Entity(_x, _y), Alive(_vie) {
	std::cout << "Breakable Object just created at x = " << _x << " and y = " << _y << " with " << _max_vie << " life" << std::endl;
}

void BreakableObject::Take_Damadge(float _dmg) {
	vie -= _dmg;
	std::cout << "Breakable Object just broke" << std::endl;
}