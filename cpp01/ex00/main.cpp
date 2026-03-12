#include "Zombie.hpp"

int main()
{
    Zombie* z;

    z = newZombie("dog");
    z->announce();
    randomChump("cat");
    delete z;
    return (0);
}
