#ifndef AMOVABLE_H__
#define AMOVABLE_H__

//Faire la classe abstraite :
//Pour rappel :
//Une classe abstraite est une classe qui a au moins une fonction membre virtuel pur.
//AMovable
//Elle doit stocker un vecteur unitaire de direction dans un Vector2.
//Elle doit stocker un float pour la vitesse.
//Elle doit avoir un constructeur pour set la direction et la vitesse.
//Elle doit avoir une fonction membre public virtuel pour setter la direction.
//Elle doit avoir une fonction membre public virtuel pour setter la speed.
//Elle doit avoir une fonction membre public virtuel pur pour se déplacer.

#include "E1_Vector2.h"

class AMovable
{
public:
	float vitesse;
	Vector2 direction;
	AMovable(float, float, float);
	virtual void Set_Direction(float, float);
	virtual void Set_Speed(float);
	virtual void Deplacement() = 0;

};

#endif // !AMOVABLE_H__
