#include "Pila.h"


void crearPila(Pila& pila){
    pila.top=NULL;
}

PtrNodoPila top(Pila& pila){
    return pila.top;
}

PtrNodoPila push(Pila& pila,Dato dato){
    PtrNodoPila nuevoNodo = new NodoPila;
    nuevoNodo->dato = dato;
    nuevoNodo->sgte = pila.top;
    pila.top = nuevoNodo;
    return nuevoNodo;
}

Dato pop(Pila& pila){
    Dato dato = NULL;
    if(top(pila) != NULL){
        PtrNodoPila ptrPrevio = pila.top;
        dato = ptrPrevio->dato;
        pila.top = ptrPrevio->sgte;
        delete ptrPrevio;
    }
     return dato;
}



void destruirPila(Pila& pila){
    while(top(pila)!= NULL)
        pop(pila);
}
