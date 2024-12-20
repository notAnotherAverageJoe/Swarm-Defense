#include "turret.h"

Turret::Turret(const std::string &turretName, int turretAmmo, int turretHealth)
    : name(turretName), ammo(turretAmmo), health(turretHealth) {}

void Turret::fire()
{
    std::cout << name << " begins shooting" << std::endl;
}

// g++ turret.cpp - o turret
