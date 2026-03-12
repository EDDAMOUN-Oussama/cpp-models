#include "Zombie.hpp"

int main()
{
    Zombie *z;

    z = zombieHorde(10, "test");
    for (int i = 0; i < 10; i++){
        z[i].announce();
    }
    delete [] z;
    return (0);
}
