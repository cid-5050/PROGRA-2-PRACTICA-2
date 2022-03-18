// Renato Agustin Montenegro Palma
// Rodrigo Palop Bauza

#include <Fila.h>
#include <iostream>


int main() {
    Fila fila;

    fila.push(Persona {"Guillermo", 19});
    fila.push(Persona {"Ivan", 22});
    fila.push(Persona {"marta", 19});
    fila.push(Persona {"Inee", 24});

    std::cout << fila.size() << std::endl;
}
