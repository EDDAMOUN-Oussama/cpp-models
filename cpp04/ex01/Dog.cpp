#include "Dog.hpp"

Dog::Dog():Animal("Dog")
{
    std::cout << "Default constructor of 'Dog' called" << std::endl;
    brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Copy constructor of 'Dog' called" << std::endl;
    brain = new Brain(*other.brain);
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Copy assignment operator of 'Dog' called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        *brain = *other.brain;
    }
    return *this;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Destructor of 'Dog' called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof Woof (bark)" << std::endl;
}