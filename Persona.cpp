#include "Persona.h"


bool Persona::operator == (Persona p) {
    return ((p.nombre == nombre) and (p.edad == edad));
}
