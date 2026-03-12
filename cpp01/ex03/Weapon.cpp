#include "Weapon.hpp"

Weapon::Weapon(std::string str) : type(str) {};

const std::string &Weapon::getType() const
{
    return (type);
}

void Weapon::setType(std::string val)
{
    type = val;
}
