#include <iostream>
#include <string>
#include <vector>

#include "Point.h"

int main(int argc, const char* argv[])
{
    Point point;
    int nb;

    std::cout << "Saisir un float: ";
    std::cin >> nb;

    std::cout << std::endl << "Saisir un float: ";
    std::cin >> nb;

    std::cout << std::endl << "Saisir un float: ";
    std::cin >> nb;

    std::string value = point.ToString();

    std::cout << value << std::endl;

    /*
    std::cout << "Hello World!" << std::endl;
    int nb;
    std::vector<int> tb_int;

    std::cout << "Saisir un int" << std::endl;
    std::cin >> nb;
    tb_int.push_back(nb);

    while (true) {
        system("cls");
        for (int i(0); i < tb_int.size(); i++) {
            std::cout << tb_int[i] << " ";

        }
        std::cout << std::endl <<"Saisir un int" << std::endl;
        std::cin >> nb;
        tb_int.push_back(nb);

    }*/








    /*
    srand(time(NULL));
    std::cout << "Hello World!" << std::endl;
    int nb;
    std::vector<int> tb_int;

    for (int size(0); size < 10; size++) {
        int rdm_nb(std::rand() % 100);
        tb_int.push_back(rdm_nb);
    }
    for (int i(0); i < tb_int.size(); i++) {
        std::cout << tb_int[i] << " ";
    }*/

    return 0;
}
