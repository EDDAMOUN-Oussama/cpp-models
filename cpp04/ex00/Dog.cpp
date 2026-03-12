#include "Dog.hpp"

Dog::Dog():Animal("Dog")
{
    std::cout << "Default constructor of 'Dog' called" << std::endl;
}

Dog::Dog(const Dog &other)
{
    std::cout << "Copy constructor of 'Dog' called" << std::endl;
        *this = other;
}

Dog& Dog::operator=(const Dog &other)
{
    std::cout << "Copy assignment operator of 'Dog' called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Destructor of 'Dog' called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof Woof (bark)" << std::endl;

}