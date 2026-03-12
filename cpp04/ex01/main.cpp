#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    delete j;
    delete i;

    std::cout << "\n\n----Array of Animals tests---" << std::endl;
    const Animal* array[10];
    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
            array[i] = new Dog();
        else
            array[i] = new Cat();
        array[i]->makeSound();
    }
    for (int i = 0; i < 10; i++)
        delete array[i];
    std::cout << "\n\n----deep copies tests---" << std::endl;
    Cat*cat1 = new Cat();
    Cat*cat2 = new Cat();

   cat1->setIdeaByid("idea_Brain_5", 5);
   *cat2 = *cat1;

   cat1->write_idea(5);
   cat2->write_idea(5);

   cat1->setIdeaByid("other_idea_Brain_5", 5);

   cat1->write_idea(5);
   cat2->write_idea(5);

    delete cat1;
    delete cat2;

    return 0;
}