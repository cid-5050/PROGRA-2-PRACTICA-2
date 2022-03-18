// Renato Agustin Montenegro Palma
// Rodrigo Palop Bauza

#include <Fila.h>
#include <iostream>
#include <funciones.h>


int main() {
    Fila fila;

    fila.push(Persona {"Guillermo", 19});
    fila.push(Persona {"Ivan", 22});
    fila.push(Persona {"marta", 19});
    fila.push(Persona {"Ines", 24});

    std::cout << fila.size() << std::endl;
    std::cout << fila.getFront() << std::endl;
    std::cout << fila.getBack() << std::endl;

    std::cout << (fila.PersonPresent(Persona {"marta", 19}) ? "PRESENTE" : "NO PRESENTE")
              << std::endl;

    std::cout << (fila.PersonPresent(Persona {"putin", 69}) ? "PRESENTE" : "NO PRESENTE")
              << std::endl;
}
