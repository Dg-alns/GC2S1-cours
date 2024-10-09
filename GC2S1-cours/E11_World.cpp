#include <iostream>
#include "E11_World.h"

World::World() {

}

void World::Init() {
	StaticObject* Sobject= new StaticObject(0, 0);
	BreakableObject* Bobject = new BreakableObject(2, 2, 1, 1);
	Mob* mob = new Mob(4, 4, 20, 20, 0, 0, 0.5);
	Player* player = new Player(6, 6, 10, 10, 0, 0, 1);

	vEntity.push_back(Sobject);
	vEntity.push_back(Bobject);
	vEntity.push_back(mob);
	vEntity.push_back(player);
}

void World::Step() {
	Player* player = nullptr;
	Mob* mob = nullptr;
	BreakableObject* breakable = nullptr;

	for (Entity* ent : vEntity) {
		if (Player* p = dynamic_cast<Player*>(ent)) {
			player = p;
		}
		else if (Mob* m = dynamic_cast<Mob*>(ent)) {
			mob = m;
		}
		else if (BreakableObject* b = dynamic_cast<BreakableObject*>(ent)) {
			breakable = b;
		}
	}


	bool Dead_Mob(false);
	bool Dead_BreakableObjects(false);

	if (!Dead_Mob)
	{
		//directionx = postargetx - posmodx
		mob->Set_Direction();
		mob->Deplacement();
	}
}