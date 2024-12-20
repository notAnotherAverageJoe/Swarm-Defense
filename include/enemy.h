#ifndef ENEMY_H
#define ENEMY_H

#include <string>
#include <iostream>

class Swarm
{
private:
    std::string name;
    int size;
    int health;

public:
    // Constructor declaration
    Swarm(const std::string &swarmName, int swarmSize, int swarmHealth);

    // Method declaration
    void charge();
};

#endif // ENEMY_H
