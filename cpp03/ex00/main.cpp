#include "ClapTrap.hpp"

int main() {
    ClapTrap a("A");
    a.attack("Target");
    a.takeDamage(3);
    a.beRepaired(5);

    // for (int i = 0; i < 12; i++) a.attack("Dummy");

    // a.takeDamage(100);
    for (int i =0 ; i < 12; i++) 
        a.attack("ism");
    a.takeDamage(1);
    a.attack("Target");
}
