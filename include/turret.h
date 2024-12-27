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
    int range;

public:
    Turret(const std::string &turretName, int turretAmmo, int turretHealth, int turretRange);
    void fire();
    void creation();
    void turretStatus();
};

#endif // TURRET_H
