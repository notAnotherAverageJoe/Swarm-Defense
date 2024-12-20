#ifndef BASE_H
#define BASE_H

#include <string>
#include <iostream>

class Base
{
private:
    std::string name;
    int health;

public:
    Base(const std::string &baseName, int baseHealth);
    void status();
};

#endif