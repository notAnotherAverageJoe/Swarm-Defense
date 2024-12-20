#ifndef TURRET_H
#define TURRET_H

#include <string>
#include <iostream>

class Turret
{
private:
    std::string name;
    int ammo;
    int health;

public:
    Turret(const std::string &turretName, int turretAmmo, int turretHealth);
    void fire();
};

#endif // TURRET_H
