#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ClapTrap("_clap_name"){
    std::cout << "Default Constructor of DiamondTrap called" << std::endl;
    Name = "";
    Hit = 100;
    Energy = 50;
    AttackDamage = 30;
};

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name + "_clap_name"){
    std::cout << "Constructor with the name of DiamondTrap called" << std::endl;
    Name = name;
    Hit = 100;
    Energy = 50;
    AttackDamage = 30;
};

DiamondTrap::DiamondTrap(const DiamondTrap &other): ClapTrap(other) 
{
    std::cout << "Copy constructor of DiamondTrap called" << std::endl;
};

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other)
{
    ClapTrap::operator=(other);
    std::cout << "Copy assignment operator of DiamondTrap called" << std::endl;
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructor of DiamondTrap called" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "Diamond name: " << Name << std::endl;
    std::cout << "ClapTrap name: " << ClapTrap::Name << std::endl;
}
