#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();


    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();  


    delete i;
    delete j;
    delete meta;


    std::cout << "\n\n----testing the Wrong Class----" << std::endl;

    const WrongAnimal* Wrongmeta = new WrongAnimal();
    const WrongAnimal* Wrongi = new WrongCat();

    std::cout << Wrongi->getType() << " " << std::endl;

    Wrongi->makeSound();
    Wrongmeta->makeSound(); 

    delete Wrongi;
    delete Wrongmeta;

    return 0;
}