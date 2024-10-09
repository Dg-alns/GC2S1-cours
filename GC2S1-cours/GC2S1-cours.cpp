#include <iostream>
#include <string>
#include <vector>

#include "Integer.h"

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

    player.Attack(mob*)

    std::cout << player.Get_Vie();






















    /*Integer Int;
    Integer integer_surcharger(10);

    Integer op_plus = Int.operator+(integer_surcharger);
    Int.operator+=(integer_surcharger);

    std::cout << op_plus.Get_nb() << std::endl;
    std::cout << Int.Get_nb() << std::endl;

    Integer op_moins = Int.operator-(integer_surcharger);
    integer_surcharger.operator-=(Int);

    std::cout << op_moins.Get_nb() << std::endl;
    std::cout << Int.Get_nb() << std::endl;

    Integer op_mult = Int.operator*(integer_surcharger);
    Int.operator*=(Int);

    std::cout << op_mult.Get_nb() << std::endl;
    std::cout << Int.Get_nb() << std::endl;

    Integer op_div = Int.operator/(integer_surcharger);
    Int.operator/=(Int);

    std::cout << op_div.Get_nb() << std::endl;
    std::cout << Int.Get_nb() << std::endl;

    Integer op_mod = Int.operator%(integer_surcharger);
    Int.operator%=(Int);

    std::cout << op_mod.Get_nb() << std::endl;
    std::cout << Int.Get_nb() << std::endl;

    Int.operator<<(integer_surcharger);
    std::cout << Int.Get_nb() << std::endl;*/


    /*Integer Int(5);
    Int.pow(2);

    std::cout << Int.Get_nb() << std::endl;*/

    return 0;
}
