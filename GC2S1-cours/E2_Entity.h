#ifndef ENTITY_H__
#define ENTITY_H__

//Faire la classe :
//Entity
//Elle doit stocker une position dans un Vector2.
//Elle doit avoir un constructeur pour set la position.
//Elle doit avoir un getter / setter virtuel pour la position.

#include "E1_Vector2.h"

class Entity 
{
	Vector2 position;
public:
	Entity(float, float);
	virtual void Set_position(float, float);
	virtual Vector2 Get_position();
	
};

#endif // !ENTITY_H__

