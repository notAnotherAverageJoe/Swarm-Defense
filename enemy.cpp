#include <iostream>
#include <string>
#include "enemy.h" // Include the header file for declaration consistency

// Constructor implementation
Swarm::Swarm(const std::string &swarmName, int swarmSize, int swarmHealth)
    : name(swarmName), size(swarmSize), health(swarmHealth) {}

// Method implementation
void Swarm::charge()
{
    if (health > 0)
    {
        std::cout << name << " begins charging the base!\nCurrent swarm health: "
                  << health << std::endl;
    }
    else
    {
        std::cout << "This swarm has been defeated!" << std::endl;
    }
}

// g++ enemy.cpp -o enemy