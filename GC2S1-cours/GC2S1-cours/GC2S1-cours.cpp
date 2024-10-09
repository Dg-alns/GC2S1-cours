#include <iostream>
#include <string>
#include <vector>

#include "E6_StaticObject.h"
#include "E7_BreakableObject.h"
#include "E8_Mob.h"
#include "E9_Player.h"
#include "E11_World.h"

int main(int argc, const char* argv[])
{
<<<<<<< Updated upstream
    StaticObject Sobj(11, 15);

    BreakableObject Bobj(7, 9, 100, 100);
    Mob mob(7, 9, 100, 100, 14, 5, 1);
    Player player(7, 9, 100, 100, 14, 5, 1);

=======
    /*StaticObject Sobj(11, 15);
    BreakableObject Bobj(5, 5, 100, 100);
    Mob mob(0, 0, 100, 100, 14, 5, 1);
    Player player(7, 9, 100, 100, 14, 5, 1);

    mob.Deplacement(Bobj);
    mob.Deplacement(Bobj);
    mob.Deplacement(Bobj);*/

    World world;

    world.Init();
    world.Step();
>>>>>>> Stashed changes



    return 0;
}
