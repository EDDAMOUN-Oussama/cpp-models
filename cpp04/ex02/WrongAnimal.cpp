#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("")
{
    std::cout << "Default constructor of 'WrongAnimal' called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string str):type(str)
{
    std::cout << "constructor with type parameter of 'WrongAnimal' called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    std::cout << "Copy constructor of 'WrongAnimal' called" << std::endl;
        *this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
    std::cout << "Copy assignment operator of 'WrongAnimal' called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor of 'WrongAnimal' called" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "This WrongAnimal doesn't make any sound." << std::endl;

}

std::string const & WrongAnimal::getType() const 
{
    return (type);
}
