#include <iostream>
#include <string>
#include <vector>

#include "E6_StaticObject.h"
#include "E7_BreakableObject.h"
#include "E8_Mob.h"
#include "E9_Player.h"
#include "E11_World.h"

int main(int argc, const char* argv[]){

    /*StaticObject Sobj(11, 15);
    BreakableObject Bobj(5, 5, 100, 100);
    Mob mob(0, 0, 100, 100, 14, 5, 1);
    Player player(7, 9, 100, 100, 14, 5, 1);

    mob.Deplacement(Bobj);
    mob.Deplacement(Bobj);
    mob.Deplacement(Bobj);*/


    bool Dead_Mob(false);
    bool Dead_BreakableObjects(false);
    bool bStep(false);

    World world;

    world.Init();
    /*while (!bStep)
    {
        bStep = world.Step(Dead_Mob, Dead_BreakableObjects);
        std::cout << std::endl;
    }*/

    world.Step(Dead_Mob, Dead_BreakableObjects);
    world.Step(Dead_Mob, Dead_BreakableObjects);
    world.Step(Dead_Mob, Dead_BreakableObjects);



    


    /*while (int i = 0; i < 5; i++) {
        world.Step(Dead_Mob, Dead_BreakableObjects);
        std::cout << std::endl;
    }*/
    



    return 0;
}
