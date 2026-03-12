#include "FragTrap.hpp"

int main() {
    FragTrap a("A");
    a.attack("Target");
    a.takeDamage(3);
    a.beRepaired(5);
    a.highFivesGuys();
    for (int i = 0; i < 12; i++) a.attack("Dummy");

    a.takeDamage(150);
    a.beRepaired(1);
    a.takeDamage(1);
    a.attack("Target");
    std::cout << "test ptr-------" << std::endl;
    ClapTrap* ptr = new FragTrap("test");
    ptr->attack("test");
    delete ptr;
    std::cout << "Fin ptr test--------" << std::endl;
}
