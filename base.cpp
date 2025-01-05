#include "include/base.h"

Base::Base(const std::string &baseName, int baseHealth) : name(baseName), health(baseHealth) {}

void Base::status()
{
    std::cout << "Base: " << name << "\n"
              << "Health Status: " << health << std::endl;
}

void Base::repair()
{
    if (health == 100)
    {
        std::cout << "No need for repairs! Base is full health" << std::endl;
    }
    else
    {
        std::cout << "Base: " << health << std::endl;
        std::cout << "Repairs are underway commander" << std::endl;
        std::cout << "The extra noise from repairs may invoke a swarm stay alert!" << std::endl;

        int findHp = 100 - health;
        health += findHp;
    }
}
