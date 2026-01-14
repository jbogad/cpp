

#include "Zombie.hpp"

Zombie::Zombie(){

}

Zombie::~Zombie(){
    std::cout << name << " -> Bye Bye!" << std::endl;
}

Zombie::Zombie(string name){
    this->name = name;
}

void    Zombie::announce(void){
    std::cout << name << "' : BraiiiiiiinnnzzzZ...\n";
}
