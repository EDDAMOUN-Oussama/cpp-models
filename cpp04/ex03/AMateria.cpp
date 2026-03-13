#include "AMateria.hpp"

AMateria::AMateria() : type("")
{
    std::cout << "Default constructor of 'AMateria' called" << std::endl;
}

AMateria::AMateria(std::string const & str) : type(str)
{
    std::cout << "Constructor with type parameter of 'AMateria' called" << std::endl;
}

AMateria::AMateria(const AMateria &other) : type(other.type)
{
    std::cout << "Copy constructor of 'AMateria' called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria &other)
{
    std::cout << "Copy assignment operator of 'AMateria' called" << std::endl;
    (void)other;
    return (*this);
}

AMateria::~AMateria()
{
    std::cout << "Destructor of 'AMateria' called" << std::endl;
}

std::string const & AMateria::getType() const
{
    return type;
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}
