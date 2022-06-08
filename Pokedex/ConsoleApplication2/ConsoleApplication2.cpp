#include <iostream>


// ---------------------- TIPS ---------------------------------
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

int main()
{
    int x;

    std::cout << "Choose your Pokemon!\n";
    std::cout << "1)Bulbusaur    2)Ivysaur    3)Venusaur\n";
    std::cout << "4)Charmander   5)Charmeleon 6)Charizard\n";
    std::cout << "7)Squirtle     8)Wartortle  9)Blastoise\n";

        std::cin >> (x);

    switch (x) {

    case 1:
        std::cout << "Bulbusaur\n";
        break;
    case 2:
        std::cout << "Ivysaur\n";
        break;
    case 3:
        std::cout << "Venusaur\n";
        break;
    case 4:
        std::cout << "Charmander\n";
        break;
    case 5:
        std::cout << "Charmeleon\n";
        break;
    case 6:
        std::cout << "Charizard\n";
        break;
    case 7:
        std::cout << "Squirtle\n";
        break;
    case 8:
        std::cout << "Wartortle\n";
        break;
    case 9:
        std::cout << "Blastoise\n";
        break;
    default:
        std::cout << "Unknown\n";

    }

}


