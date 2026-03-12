#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default constructor of 'Brain' called" << std::endl;
}

Brain::Brain(const Brain &other)
{
    std::cout << "Copy constructor of 'Brain' called" << std::endl;
    *this = other;
}

Brain& Brain::operator=(const Brain &other)
{
    std::cout << "Copy assignment operator of 'Brain' called" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
    		this->ideas[i] = other.ideas[i];
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Destructor of 'Brain' called" << std::endl;
}

std::string Brain::getIdeaByid(int id)
{
    if (id >= 0 && id < 100)
        return(ideas[id]);
    return ("");
}

void Brain::setIdeaByid(std::string idea, int id)
{
    if (id >= 0 && id < 100)
        ideas[id] = idea;
}

void Brain::write_idea(int id)
{
    if (id >= 0 && id < 100)
        std::cout << "idea of " << id << " is " << ideas[id] << std::endl;
}
