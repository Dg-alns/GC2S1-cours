#ifndef MOB_H__
#define MOB_H__

//Faire la classe :
//Mob
//Elle doit h�rit� de Entity, de Alive et de AMovable.
//Elle doit faire a sa cr�ation :
//-Set le x et y de la position. (Prendre les valeurs en param�tre)
//- Set le maximum de vie et la vie actuel. (Prendre les valeurs en param�tre)
//- Set le vector d�placement. (Prendre les valeurs en param�tre)
//- Afficher �Mob just created at x = ici - la - position - x and y = ici - la - position - y with ici - la - maxlife life with direction x = ici - la - direction - x and y = ici - la - direction - y�
//Elle doit override la fonction membre virtuel �Recevoir des d�g�ts� pour afficher :
//-�Mob just die�
//Elle doit override la fonction membre virtual de d�placement :
//-�Mob move to x = ici - la - position - x and y = ici - la - position - y
//Ne pas oublier de d'appeler la fonction parent dans les overrides

#include "E2_Entity.h"
#include "E4_Alive.h"
#include "E3_AMovable.h"

class Mob : public Entity, public Alive, public AMovable
{
public:
	Mob(float, float, float, float, float, float, float);
	void Take_Damadge(float) override;
	void Deplacement(float, float) override;
};


#endif // !MOB_H__
