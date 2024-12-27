#include "include/turret.h"

Turret::Turret(const std::string &turretName, int turretAmmo, int turretHealth, int turretRange)
    : name(turretName), ammo(turretAmmo), health(turretHealth), range(turretRange) {}

void Turret::fire()
{
    std::cout << name << " begins shooting" << std::endl;
}

Turret Turret::creation()
{
    std::string turName;
    std::cout << "Enter a turret name: ";
    std::getline(std::cin, turName);
    Turret newTurrets(turName, 100, 100, 20);

    std::cout << "Turret Name: " << name << "\n"
              << "Current Ammo: " << ammo << "\n"
              << "Turret Health: " << health << "\n"
              << "Turret Range: " << range << "\n"
              << std::endl;

    return newTurrets;
}
// this may be useless in the future.
void Turret::turretStatus()
{
    std::cout << "Turret Name: " << name << "\n"
              << "Current Ammo: " << ammo << "\n"
              << "Turret Health: " << health << "\n"
              << "Turret Range: " << range << "\n"
              << std::endl;
}

// g++ turret.cpp - o turret
