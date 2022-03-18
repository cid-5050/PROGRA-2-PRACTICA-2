#include "Fila.h"

int Fila::size() const {
    int cont{0};
    std::shared_ptr<Elemento> elemAux{_ultimo};

    if (Fila::empty())
        return 0;

    while (elemAux->next != nullptr) {
        elemAux = elemAux->next;
        cont++;
    }

    return ++cont;
}

bool Fila::empty() const {
    return (_ultimo == nullptr);
}

Persona Fila::getFront() const {
    std::shared_ptr<Elemento> elemAux{_ultimo};

    while (elemAux->next != nullptr) {
        elemAux = elemAux->next;
    }

    return elemAux->dato;
}

Persona Fila::getBack() const {
    return _ultimo->dato;
}

bool Fila::PersonPresent(const Persona& dato) {
    std::shared_ptr<Elemento> elemAux{_ultimo};

    while (elemAux->next != nullptr) {
        if (elemAux->dato == dato)
            return true;
        elemAux = elemAux->next;
    }

    return false;
}

void Fila::push(const Persona& dato) {
    Elemento elementoAux(dato);
    elementoAux.next = _ultimo;

    _ultimo = std::make_shared<Elemento>(elementoAux);

}
