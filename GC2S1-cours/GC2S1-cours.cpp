#include <iostream>
#include <string>
#include <vector>

#include "E6_StaticObject.h"
#include "E7_BreakableObject.h"
#include "E8_Mob.h"
#include "E9_Player.h"
#include "E11_World.h"

int main(int argc, const char* argv[]){
    World world;

    world.Init();
    std::cout << std::endl;


    while (!world.Isfinishe())
    {
        world.Step();
        std::cout << std::endl;
    }
     return 0;
}
