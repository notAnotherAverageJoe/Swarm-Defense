#include "include/turret.h"

Turret::Turret(const std::string &turretName, int turretAmmo, int turretHealth, int turretRange)
    : name(turretName), ammo(turretAmmo), health(turretHealth), range(turretRange) {}

void Turret::fire()
{
    std::cout << name << " begins shooting" << std::endl;
}

void Turret::creation()
{
    std::cout << name << " Has been created!\n"
              << std::endl;
}

void Turret::turretStatus()
{
    std::cout << "Turret Name: " << name << ""
}

// g++ turret.cpp - o turret
