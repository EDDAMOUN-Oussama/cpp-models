#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap(){
    std::cout << "Default Constructor of ScavTrap called" << std::endl;
    Hit = 100;
    Energy = 50;
    AttackDamage = 20;
};

ScavTrap::ScavTrap(std::string name):ClapTrap(name){
    std::cout << "Constructor with the name of ScavTrap called" << std::endl;
    Hit = 100;
    Energy = 50;
    AttackDamage = 20;
};

ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other) 
{
    std::cout << "Copy constructor of ScavTrap called" << std::endl;
};

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
    ClapTrap::operator=(other);
    std::cout << "Copy assignment operator of ScavTrap called" << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor of ScavTrap called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (Hit == 0 || Energy == 0)
    {
        std::cout << "cannot attack (ScavTrap)" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << Name << " attacks " << target << " causing " << AttackDamage << " points of damage!" << std::endl;
    Energy--;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << Name << " is now in Gate keeper mode" << std::endl;   
}