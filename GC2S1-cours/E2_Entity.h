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
	Vector2 vector2;
public:
	Entity();
	virtual void Set_x(float _nb);
	virtual void Set_y(float _nb);
	virtual void Get_x();
	virtual void Get_y();
	
	void Position();
};

#endif // !ENTITY_H__

