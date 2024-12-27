#include "include/turret.h"
#include "include/enemy.h"
#include "include/base.h"
#include <vector>

int main()
{
    std::string turretNames;
    // creation for individual turrets
    Turret turrets(turretNames, 100, 100, 29);
    // Turret turret2("Steelclad", 80, 120, 23);
    std::vector<Turret> turretLocker{};

    // creatior for swarm and add turrets
    Swarm swarm1("BileGuts", 10, 20);

    std::string baseName;
    std::cout << "Welcome to Swarm Base Defense!" << std::endl;
    std::cout << "Alright commander let's make your base -> ";
    std::getline(std::cin, baseName);

    Base mainBase(baseName, 100);
    mainBase.status();

    std::cout << "Turrets are your only way to defend yourself!\n"
              << "Let's make sure you have one ready!\n"
              << "Enter a name for your turret: ";
    std::getline(std::cin, turretNames);
    Turret newTurret(turretNames, 100, 100, 20);
    turretLocker.push_back(newTurret);

    bool gameStart = true;
    while (gameStart)
    {
        std::cout << "Welcome back commander" << std::endl;
        std::cout << "Choose an action:\n";
        std::cout << "1. Check base status\n";
        std::cout << "2. Armory\n";
        std::cout << "3. Attack swarm\n";
        std::cout << "4. Exit game\n";

        int choice;
        std::cin >> choice;
        if (choice < 1 || choice > 5)
            break;

        switch (choice)
        {
        case 1:
            mainBase.status();
            break;
        case 2:
        {
            int choice;
            std::cout << "What would you like to do?\n";
            "1. Build a turret\n";
            "2. Check turret status a turret\n";
            "3. Exit armory\n";
            std::cin >> choice;
            switch (choice)
            {
            case 1:
            }

            std::cout
                << "upgrade facility coming soon\n\n"
                << std::endl;
            break;
        }

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
