#ifndef ELEMENTO_H
#define ELEMENTO_H

#include <Persona.h>
#include <memory>

struct Elemento{
    Elemento(const Persona &p){dato=p;}
    Persona dato;
    std::shared_ptr<Elemento> next{nullptr};
};

#endif // ELEMENTO_H
