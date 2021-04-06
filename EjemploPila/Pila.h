#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED

#ifndef NULL
#define NULL 0
#endif

typedef int Dato;

struct NodoPila{
    Dato dato;
    NodoPila* sgte;
};

typedef NodoPila* PtrNodoPila;

struct Pila{
    PtrNodoPila top;
};

/**-------------INTERFACES---------------**/

void crearPila(Pila& pila);
PtrNodoPila top(Pila& pila);
PtrNodoPila push(Pila& pila,Dato dato);
Dato pop(Pila& pila);
void destruirPila(Pila& pila);


#endif // PILA_H_INCLUDED
