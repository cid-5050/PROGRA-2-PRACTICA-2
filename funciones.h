#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <iostream>
#include <Persona.h>

std::ostream& operator << (std::ostream &o, const Persona &p) {
    o << p.nombre << ", " << p.edad;
    return o;
}

#endif // FUNCIONES_H
