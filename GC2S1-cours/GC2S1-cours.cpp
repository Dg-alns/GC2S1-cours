#include <iostream>
#include <string>
#include <vector>

int main(int argc, const char* argv[])
{
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

    }

    return 0;
}
