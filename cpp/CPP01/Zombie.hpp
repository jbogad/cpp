

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP


#include <string>
#include <iostream>
typedef std::string string;

class Zombie{

private:
    string name;
public:
    Zombie(void);
    Zombie(string name);
    ~Zombie();

    void    announce(void);

};
Zombie* zombieHorde(int n, string name);

#endif