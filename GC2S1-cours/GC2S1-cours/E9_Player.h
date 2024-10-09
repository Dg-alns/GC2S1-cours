#ifndef PLAYER_H__
#define PLAYER_H__

//Faire la classe :
//Player
//Elle doit hérité de Entity, de Alive, de AMovable et IAttacker.
//Elle doit faire a sa création :
//-Set le vector position. (Prendre les valeurs en paramètre)
//- Set le maximum de vie et la vie actuel. (Prendre les valeurs en paramètre)
//- Set le vector déplacement. (Prendre les valeurs en paramètre)
//- Afficher “Player just created at x = ici - la - position - x and y = ici - la - position - y with ici - la - maxlife life with direction x = ici - la - direction - x and y = ici - la - direction - y”
//Elle doit override la fonction membre virtuel “Recevoir des dégâts” pour afficher :
//-“Player just died”
//Elle doit override la fonction membre virtual de déplacement :
//-“Player moved to x = ici - la - position - x and y = ici - la - position - y”
//Elle doit implémenter la fonction de IAttacker :
//-Enlever 10 point de vie du pointeur de Alive pris en paramètre
//- Afficher “Player just attacked.”
//Ne pas oublier de d'appeler la fonction parent dans les overrides.

#include "E2_Entity.h"
#include "E3_AMovable.h"
#include "E4_Alive.h"
#include "E5_IAttacker.h"

class Player : public Entity, public Alive, public AMovable, public IAttacker
{
public:
	Player(float, float, float, float, float, float, float);
	void Take_Damadge(float) override;
<<<<<<< Updated upstream
	void Deplacement() override;
	void Attack(Alive* cible) override;
=======
	void Deplacement(Entity&) override;
	void Attack(Alive& cible) override;
>>>>>>> Stashed changes
};

#endif // !PLAYER_H__
