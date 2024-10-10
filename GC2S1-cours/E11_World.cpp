#include <iostream>
#include "E11_World.h"

World::World() {

}

void World::Init() {
	StaticObject* Sobject = new StaticObject(5, 5);
	BreakableObject* Bobject = new BreakableObject(0, 0, 1, 1);
	Mob* mob = new Mob(10, 10, 20, 20, 0, 0, 1);
	Player* player = new Player(20, 20, 10, 10, 0, 0, 1);

	vEntity.push_back(Sobject);
	vEntity.push_back(Bobject);
	vEntity.push_back(mob);
	vEntity.push_back(player);
}

void World::Step() {
	endSimulation = false;
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

	if (mob && breakable) {
		if (mob->Get_Vie() > 0) {
			if (mob->position.Get_x() >= (breakable->position.Get_x() - 1) && mob->position.Get_x() <= (breakable->position.Get_x() + 1)) {
				if (mob->position.Get_y() >= (breakable->position.Get_y() - 1) && mob->position.Get_y() <= (breakable->position.Get_y() + 1)) {
					std::cout << "Mob can't move" << std::endl;
				}
			}
			else {
				mob->Deplacement(*breakable);
			}
		}
	}

	if (player && mob && breakable) {
		if (mob->Get_Vie() >= 0)
		{
			if (player->position.Get_x() >= (mob->position.Get_x() - 1) && player->position.Get_x() <= (mob->position.Get_x() + 1)) {
				if (player->position.Get_y() >= (mob->position.Get_y() - 1) && player->position.Get_y() <= (mob->position.Get_y() + 1)) {
					player->Attack(*mob);
				}
			}
			else {
				player->Deplacement(*mob);
			}

		}
		else {
			if (breakable->Get_Vie() >= 0)
			{
				if (player->position.Get_x() >= (breakable->position.Get_x() - 1) && player->position.Get_x() <= (breakable->position.Get_x() + 1)) {
					if (player->position.Get_y() >= (breakable->position.Get_y() - 1) && player->position.Get_y() <= (breakable->position.Get_y() + 1)) {
						player->Attack(*breakable);
					}
				}
				else {
					player->Deplacement(*breakable);
				}
			}
		}
	}
	
	if (mob->Get_Vie() <= 0 && breakable->Get_Vie() <= 0) {
		std::cout << "Simulation Finished" << std::endl;
		endSimulation = true;
	}
}

bool World::Isfinishe() {
	return endSimulation;
}