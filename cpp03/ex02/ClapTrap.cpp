#include "ClapTrap.hpp"

ClapTrap::ClapTrap():Name(""), Hit(10), Energy(10), AttackDamage(0)
{
    std::cout << "Default constructor called" << std::endl;
};

ClapTrap::ClapTrap(std::string name):Name(name), Hit(10), Energy(10), AttackDamage(0)
{
    std::cout << "Constructor with the name called" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "Copy constructor called" << std::endl;
    if (this != &other)
        *this = other;
};

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    Name = other.Name;
    Hit = other.Hit;
    Energy = other.Energy;
    AttackDamage = other.AttackDamage;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (Hit == 0 || Energy == 0)
    {
        std::cout << "cannot attack" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << Name << " attacks " << target << " causing " << AttackDamage << " points of damage!" << std::endl;
    Energy--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (Hit == 0)
    {
        std::cout << "ClapTrap " << Name << " is already destroyed" << std::endl;
        return ;
    }
    if (amount >= Hit)
    {
        Hit = 0;
        std::cout << "ClapTrap " << Name << " loses all points of Hit!" << std::endl;
    }

    else
    {
        Hit -= amount;
        std::cout << "ClapTrap " << Name << " loses " << amount  << " points of Hit!" << std::endl;
    }

}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (Hit == 0 || Energy == 0)
    {
        std::cout << "cannot beRepaired" << std::endl;
        return ;
    }
    Energy--;
    Hit += amount;
    std::cout << "ClapTrap " << Name << " repairs itself for " << amount  << ", His Hit Now is: " << Hit << std::endl;
}
