#ifndef STATICOBJECT_H__
#define STATICOBJECT_H__

//Faire la classe :
//StaticObject
//Elle doit hérité de Entity.
//Elle doit faire à sa création :
//-Un set le x et y. (Prendre les valeurs en paramètre)
//- Afficher “Static Object just created at x = ici - la - position - x and y = ici - la - position - y”

#include "E2_Entity.h"

class StaticObject : public Entity
{
public:
	StaticObject(float, float);
};

#endif // !STATICOBJECT_H__
