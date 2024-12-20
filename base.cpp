#include "include/base.h"

Base::Base(const std::string &baseName, int baseHealth) : name(baseName), health(baseHealth) {}

void Base::status()
{
    std::cout << name << " Status: " << health << std::endl;
}
