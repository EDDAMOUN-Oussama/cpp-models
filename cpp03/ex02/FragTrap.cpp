#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap(){
    std::cout << "Default Constructor of FragTrap called" << std::endl;
    Hit = 100;
    Energy = 100;
    AttackDamage = 30;
};

FragTrap::FragTrap(std::string name):ClapTrap(name){
    std::cout << "Constructor with the name of FragTrap called" << std::endl;
    Hit = 100;
    Energy = 100;
    AttackDamage = 30;
};

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other) 
{
    std::cout << "Copy constructor of FragTrap called" << std::endl;
};

FragTrap& FragTrap::operator=(const FragTrap &other)
{
    ClapTrap::operator=(other);
    std::cout << "Copy assignment operator of FragTrap called" << std::endl;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor of FragTrap called" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
    if (Hit == 0 || Energy == 0)
    {
        std::cout << "cannot attack (FragTrap)" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << Name << " attacks " << target << " causing " << AttackDamage << " points of damage!" << std::endl;
    Energy--;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << Name << " requests a positive high five!" << std::endl;
}