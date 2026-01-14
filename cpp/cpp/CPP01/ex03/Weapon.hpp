

#ifndef WEAPON_HPP
#define WEAPON_HPP


#include <iostream>
#include <string>

typedef std::string string;

class Weapon{

private:
    string type;
public:
    Weapon(string type);
    ~Weapon();

};


#endif