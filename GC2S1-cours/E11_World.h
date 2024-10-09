#ifndef WORLD_H__
#define WORLD_H__

#include <vector>

//Faire la classe :
//World
//Elle doit stocker des pointeur sur Entity dans un Vector.
//Elle doit avoir une fonction membre Init :
//-Qui va initialiser un StaticObject, un BreakableObject avec 1 point de vie, un Mob avec 20 point de vie, un Player avec 10 point de vie
//- Mettez les positions et vitesses que vous voulez.
//- Qui va stocker leurs pointeurs dans le Vector
//Elle doit avoir une fonction membre “Step” qui doit faire :
//-Parcourir tous les pointeurs Entity du Vector et les faires les choses suivante en fonction de leur type :
//-Mob : Il doit se deplacer vers le BreakableObject.
//- Player : Si le Mob est en Vie : Il doit se déplacer vers un Mob et l’attaquer si il est à moins de 1 de distance du joueur.Si le Mob est mort, il doit se déplacer vers un
//BreakableObject et l’attaquer si il est à moins de 1 de distance du joueur.
//- Si tous les Mobs et BreakableObjects sont morts, écrire “Simulation Finished”
//Pour la vérification de type, regardez comment marche dynamic_cast

#include "E2_Entity.h"
#include "E6_StaticObject.h"
#include "E7_BreakableObject.h"
#include "E8_Mob.h"
#include "E9_Player.h"

class World
{
	std::vector<Entity*> vEntity;
public:
	World();
	void Init();
	void Step();

};

#endif // !WORLD_H__
