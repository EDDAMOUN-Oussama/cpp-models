#include "Cat.hpp"

Cat::Cat():Animal("Cat")
{
    std::cout << "Default constructor of 'Cat' called" << std::endl;
}

Cat::Cat(const Cat &other)
{
    std::cout << "Copy constructor of 'Cat' called" << std::endl;
        *this = other;
}

Cat& Cat::operator=(const Cat &other)
{
    std::cout << "Copy assignment operator of 'Cat' called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Destructor of 'Cat' called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meeeoow Meeeoow Meeeoow (Meow)" << std::endl;
}