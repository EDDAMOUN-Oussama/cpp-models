#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Default constructor of 'Cure' called" << std::endl;
}

Cure::Cure(const Cure &other) : AMateria(other)
{
    std::cout << "Copy constructor of 'Cure' called" << std::endl;
}

Cure& Cure::operator=(const Cure &other)
{
    std::cout << "Copy assignment operator of 'Cure' called" << std::endl;
    AMateria::operator=(other);
    return (*this);
}

Cure::~Cure()
{
    std::cout << "Destructor of 'Cure' called" << std::endl;
}

AMateria* Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}