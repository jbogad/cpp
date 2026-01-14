#include <iostream>
#include <string>

typedef std::string string;

int main(int argc, char **av){
    
    (void)av;
    if(argc != 1){
        std::cout << "Error, only ./a.out" << std::endl;
        return 0;
    }

    string var = "HI THIS IS BRAIN";
    string* ptr = &var;
    string ref = var;

    std::cout << "The memory address of var is: " << &var << std::endl;
    std::cout << "The memory address of ptr is: " << &ptr << std::endl;
    std::cout << "The memory address of ref is: " << &ref << std::endl;

    std::cout << std::endl;

    std::cout << "The value of var is: " << var << std::endl;
    std::cout << "The value of ptr is: " << *ptr << std::endl;
    std::cout << "The value of ref is: " << ref << std::endl;

    return 1;
}