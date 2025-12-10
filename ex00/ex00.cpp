

#include <iostream>

int main(int argc, char **av){
    std::string frase;

    if(argc < 2)
        std::cout << "MENSAJE ERROR" << std::endl;
    else
    {
        int j = 1;
        int i = 0;

        while(j < argc)
        {
            i = 0;
            while (av[j][i] != '\0')
            {
                if(av[j][i] >= 'a' && av[j][i] <= 'z')
                    std::cout << (char)(av[j][i] - 32);
                else
                    std::cout << av[j][i];
                i++;
            }
            j++;
            
        }
        std::cout << std::endl;
    }


}