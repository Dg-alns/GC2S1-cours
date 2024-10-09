#include <iostream>
#include <string>
#include <vector>

#include "E6_StaticObject.h"
#include "E7_BreakableObject.h"
#include "E8_Mob.h"
#include "E9_Player.h"

int main(int argc, const char* argv[])
{
    StaticObject Sobj(11, 15);

    BreakableObject Bobj(7, 9, 100, 100);
    Mob mob(7, 9, 100, 100, 14, 5, 1);
    Player player(7, 9, 100, 100, 14, 5, 1);




    return 0;
}
