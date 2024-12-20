#include "include/turret.h"
#include "include/enemy.h"

int main()
{
    // Create individual turrets
    Turret turret1("Ironside", 100, 100);
    Turret turret2("Steelclad", 80, 120);

    // Create a swarm and add turrets
    Swarm swarm1("BileGuts", 10, 20);
    std::cout << "Welcome to Swarm Base Defense!" << std::endl;

    return 0;
}

//    g++ main.cpp turret.cpp enemy.cpp -o main
