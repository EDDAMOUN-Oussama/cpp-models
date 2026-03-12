#include "Cat.hpp"

Cat::Cat():Animal("Cat")
{
    std::cout << "Default constructor of 'Cat' called" << std::endl;
    brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Copy constructor of 'Cat' called" << std::endl;
    brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat &other)
{
    std::cout << "Copy assignment operator of 'Cat' called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        *brain = *other.brain;
    }
    return (*this);
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Destructor of 'Cat' called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meeeoow Meeeoow Meeeoow (Meow)" << std::endl;
}

void Cat::setIdeaByid(std::string idea, int id)
{
    brain->setIdeaByid(idea, id);
}

void Cat::write_idea(int id)
{
    brain->write_idea(id);
}