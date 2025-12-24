#include <iostream>
#include <stdlib.h>

using namespace std;



class Persona{

public:
    std::string Nombre;
    int Edad;

    Persona(const std::string Nombre, int Edad)
        : Nombre(Nombre), Edad(Edad) {}

    void saludar(){
        std::cout << "hola " << Nombre << std::endl;
        std::cout << "Mi edad es" << Edad << std::endl;
    }
};

int main(){
    Persona persona("Carol", 22);

    persona.saludar();
}













// class Persona{

// public:
//     std::string Nombre;
//     int Edad;

//     Persona(const std::string Nombre, int edad)
//         : Nombre(Nombre), Edad(edad) {}


//     void Saludar(){
//         std::cout << "Hola mi nombre es " << Nombre 
//                 << " y tengo " << Edad << " años" <<std::endl;
//     }

// };


// int main(){

//     Persona persona("javier", 2222);

//     persona.Saludar();
// }

