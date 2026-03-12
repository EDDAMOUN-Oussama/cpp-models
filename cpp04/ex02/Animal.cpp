#include "Animal.hpp"

Animal::Animal():type("")
{
    std::cout << "Default constructor of 'Animal' called" << std::endl;
}

Animal::Animal(std::string str):type(str)
{
    std::cout << "constructor with type parameter of 'Animal' called" << std::endl;
}

Animal::Animal(const Animal &other)
{
    std::cout << "Copy constructor of 'Animal' called" << std::endl;
    *this = other;
}

Animal& Animal::operator=(const Animal &other)
{
    std::cout << "Copy assignment operator of 'Animal' called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Destructor of 'Animal' called" << std::endl;
}

std::string const & Animal::getType() const 
{
    return (type);
}