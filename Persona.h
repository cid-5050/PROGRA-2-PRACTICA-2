#ifndef PERSONA_H
#define PERSONA_H

#include <string>

struct Persona{
    std::string nombre;
    int edad{0};

    bool operator == (Persona);
};

#endif // PERSONA_H
