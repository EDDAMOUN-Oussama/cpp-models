#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal("WrongCat")
{
    std::cout << "Default constructor of 'WrongCat' called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
{
    std::cout << "Copy constructor of 'WrongCat' called" << std::endl;
        *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
    std::cout << "Copy assignment operator of 'WrongCat' called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor of 'WrongCat' called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongMeeeoow WrongMeeeoow WrongMeeeoow (Meow)" << std::endl;
}