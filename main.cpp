#include "include/turret.h"
#include "include/enemy.h"
#include "include/base.h"

int main()
{
    // creation for individual turrets
    Turret turret1("Ironside", 100, 100);
    Turret turret2("Steelclad", 80, 120);

    // creatior for swarm and add turrets
    Swarm swarm1("BileGuts", 10, 20);

    std::string baseName;
    std::cout << "Welcome to Swarm Base Defense!" << std::endl;
    std::cout << "Alright commander let's make your base -> ";
    std::getline(std::cin, baseName);

    Base mainBase(baseName, 100);
    mainBase.status();

    return 0;
}

//    g++ main.cpp turret.cpp enemy.cpp base.cpp -o main
