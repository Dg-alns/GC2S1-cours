#ifndef BREAKABLEOBJECT_H__
#define BREAKABLEOBJECT_H__

//Faire la classe :
//BreakableObject
//Elle doit h�rit� de Entity et de Alive.
//Elle doit faire a sa cr�ation :
//-Un set le x et y. (Prendre les valeurs en param�tre)
//- Set le maximum de vie et la vie actuel. (Prendre les valeurs en param�tre)
//- Afficher �Breakable Object just created at x = ici - la - position - x and y = ici - la - position - y with ici - la - maxlife life�
//Elle doit override la fonction membre virtuel �Recevoir des d�g�ts� pour afficher :
//-�Breakable Object just broke�
//Ne pas oublier de d'appeler la fonction parent dans l�override.

#include "E2_Entity.h"
#include "E4_Alive.h"

class BreakableObject : public Entity, public Alive
{
public:
	BreakableObject(float, float, float, float);
	void Take_Damadge(float) override;
private:

};

#endif // !BREAKABLEOBJECT_H__

