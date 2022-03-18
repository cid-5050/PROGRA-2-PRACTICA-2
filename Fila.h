#ifndef FILA_H
#define FILA_H

#include <Persona.h>
#include <Elemento.h>

class Fila{
    public:
        int size() const; //Devuelve el tamaño de la fila [2 puntos]
        bool empty() const; //Devuelve true si la fila está vacía [1 punto]
        Persona getFront() const; //Devuelve primera persona de la fila [2 puntos]
        Persona getBack() const; //Devuelve última persona de la fila [0,5 puntos]
        bool PersonPresent(const Persona& dato); //Busca una persona en la fila, devolverá true si está y false si no está [2 puntos]
        //Para el método PersonPresent necesitarás sobrecargar el operador == para comparar las personas [1,5 puntos]
        void push(const Persona& dato); //Coloca persona en la fila [1 punto]
    private:
        std::shared_ptr<Elemento> _ultimo = nullptr;
};

#endif // FILA_H
