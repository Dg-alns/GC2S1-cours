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
#include "E2_Entity.h"

class AMovable
{
public:
	float vitesse;
	Vector2 direction;
	AMovable(float, float, float);
	virtual void Set_Direction(float, float);
	virtual void Set_Speed(float);
<<<<<<< Updated upstream
	virtual void Deplacement() = 0;
=======
	virtual float Get_Speed();
	virtual void Deplacement(Entity&) = 0;
>>>>>>> Stashed changes

};

#endif // !AMOVABLE_H__
