#ifndef STATICOBJECT_H__
#define STATICOBJECT_H__

//Faire la classe :
//StaticObject
//Elle doit h�rit� de Entity.
//Elle doit faire � sa cr�ation :
//-Un set le x et y. (Prendre les valeurs en param�tre)
//- Afficher �Static Object just created at x = ici - la - position - x and y = ici - la - position - y�

#include "E2_Entity.h"

class StaticObject : public Entity
{
public:
	StaticObject(float, float);
};

#endif // !STATICOBJECT_H__
