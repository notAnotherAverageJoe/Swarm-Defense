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

    bool gameStart = true;
    while (gameStart)
    {
        std::cout << "Welcome back commander" << std::endl;
        std::cout << "Choose an action:\n";
        std::cout << "1. Check base status\n";
        std::cout << "2. Upgrade a turret\n";
        std::cout << "3. Attack swarm\n";
        std::cout << "4. Exit game\n";

        int choice;
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            mainBase.status();
            break;
        case 2:
            std::cout << "upgrade facility coming soon\n\n"
                      << std::endl;
            break;
        case 3:
            std::cout << "Swarm incorporation coming soon\n\n"
                      << std::endl;
            break;
        case 4:
            std::cout << "Goodbye commander! long live " << baseName << "\n\n"
                      << std::endl;
            gameStart = false;
            break;
        }
    }

    return 0;
}

//    g++ main.cpp turret.cpp enemy.cpp base.cpp -o main
