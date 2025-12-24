#include <iostream>
#include <string>

int main(int argc, char **av){

    int i = 0;
    int j = 1;

    if(argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE";
    while (j < argc)
    {
        i = 0;
        while(av[j][i] != '\0'){
            if(av[j][i] >= 'a' && av[j][i] <= 'z')
                std::cout << (char)std::toupper(av[j][i]);
            else
                std::cout << av[j][i];
            i++;
        }
        j++;
    }
    std::cout << std::endl;
}
