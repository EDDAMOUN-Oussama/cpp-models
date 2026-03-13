#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Default constructor of 'Ice' called" << std::endl;
}

Ice::Ice(const Ice &other) : AMateria(other)
{
    std::cout << "Copy constructor of 'Ice' called" << std::endl;
}

Ice& Ice::operator=(const Ice &other)
{
    std::cout << "Copy assignment operator of 'Ice' called" << std::endl;
    AMateria::operator=(other);
    return (*this);
}

Ice::~Ice()
{
    std::cout << "Destructor of 'Ice' called" << std::endl;
}

AMateria* Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
