#include "HumanB.hpp"

HumanB::HumanB(std::string str) : weapon(NULL), name(str) {};

void HumanB::attack()
{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &club)
{
    weapon = &club;
}
