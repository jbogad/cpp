

#include "Zombie.hpp"

int main(int argc, char **av){

    (void)av;
    if(argc != 1){
        std::cout << "Error -> ./a.out" << std::endl;
        return 0;
    }
    int i = 0;
    int n = 2;
    Zombie* horde;
    horde = zombieHorde(n, "prueba");
    while(i < n){
        std::cout << "Hi my possitions is : '" << i << "' and my name is : ";
        horde[i].announce(); // no entiendo
        i++;
    }

    delete[] horde; // se pone eso [] para borrar un array
    return 0;
}