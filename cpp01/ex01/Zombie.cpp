#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(std::string str):name(str){}

void Zombie::announce(void){
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(){
    std::cout << "Good Bye: " << name << std::endl;
}

void Zombie::set_name(std::string name){
    this->name = name;
}
