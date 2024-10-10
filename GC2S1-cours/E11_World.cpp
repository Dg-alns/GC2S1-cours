#include <iostream>
#include "E11_World.h"

World::World() {

}

void World::Init() {
	StaticObject* Sobject = new StaticObject(0, 0);
	BreakableObject* Bobject = new BreakableObject(12, 0, 1, 1);
	Mob* mob = new Mob(0, 10, 20, 20, 0, 0, 0.5);
	Player* player = new Player(10, 10, 10, 10, 0, 0, 1);

	vEntity.push_back(Sobject);
	vEntity.push_back(Bobject);
	vEntity.push_back(mob);
	vEntity.push_back(player);
}

void World::Step(bool Dead_Mob, bool Dead_BreakableObjects) {
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

	if (mob->position.Get_x() == breakable->position.Get_x() and mob->position.Get_y() == breakable->position.Get_y()) {
		std::cout << "Mob can't move" << std::endl;
	}
	else
	{
		mob->Deplacement(*breakable);
	}

	if (!Dead_Mob)
	{		
		player->Deplacement(*mob);
	}
	else {
		player->Deplacement(*breakable);
	}

	/*if (player->position.Get_x() == (mob->position.Get_x() - 1) or player->position.Get_x() == (mob->position.Get_x() + 1)) {
		if (player->position.Get_y() == (mob->position.Get_y() - 1) or player->position.Get_y() == (mob->position.Get_y() + 1)) {
			player->Attack(*mob);
			if (mob->Get_Vie() <= 0) {
				Dead_Mob = true;
			}
		}
	}*/

	/*if (player->position.Get_x() == (breakable->position.Get_x() - 1) or player->position.Get_x() == (breakable->position.Get_x() + 1)) {
		if (player->position.Get_y() == (breakable->position.Get_y() - 1) or player->position.Get_y() == (breakable->position.Get_y() + 1)) {
			player->Attack(*breakable);
			if (mob->Get_Vie() <= 0) {
				Dead_BreakableObjects = true;
			}
		}
	}*/

	/*if (Dead_BreakableObjects and Dead_Mob) {
		std::cout << "Simulation Finished" << std::endl;
	}*/





	/*Mob* mob = nullptr;
	Player* player = nullptr;
	BreakableObject* breakable = nullptr;

	for (Entity* ent : vEntity) {
		if (Player* p = dynamic_cast<Player*>(ent)) {
		}
		else if (mob = dynamic_cast<Mob*>(ent)) {
			if (!Dead_Mob)
			{
				mob->Deplacement(*breakable);
			}
		}
		else if (BreakableObject* b = dynamic_cast<BreakableObject*>(ent)) {
		}
	}*/
}