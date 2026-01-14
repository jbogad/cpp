

#include "Zombie.hpp"


Zombie* zombieHorde(int n, string name){

    if(n < 1){
        std::cout << "Impossible create Horde";
        return 0;
    }
    Zombie *horde;
    horde = new Zombie[n];

    int i = 0;

    while (i < n){    //va creado zombies con ese nombre en una dirección de memoria
        new (&horde[i]) Zombie(name);
        i++;
    }
    return horde;
}