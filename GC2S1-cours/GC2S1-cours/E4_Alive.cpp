#include "E4_Alive.h"

Alive::Alive(float _vie) : vie(_vie) {

}

float Alive::Get_Max_Vie() {
	return max_vie;
}

float Alive::Get_Vie() {
	return vie;
}

void Alive::Take_Damadge(float dmg) {
	vie -= dmg;
}