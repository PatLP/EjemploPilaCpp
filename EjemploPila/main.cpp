#include <iostream>
#include <stdlib.h>
#include "Pila.h"


using namespace std;


void recorrer(Pila& pila){
    while(top(pila)!= NULL){
        cout << "Dato top ->" << top(pila)->dato<< endl;
        pop(pila);
    }
}


int main(){
    system("Color 0B");
    cout << "Crear Pila" << endl <<endl;
    Pila* pila=new Pila;
    crearPila(*pila);
    cout << "Agregar elementos a la Pila" << endl <<endl;
    for (int i = 0 ; i < 5; i++){
        Dato* dato = new Dato;
        *dato = i+1;
        push(*pila, *dato);
        delete dato;
    }

    cout << "Recorrer Pila" << endl;
    cout << "--------------" <<endl;
    recorrer(*pila);
    cout << "--------------" <<endl;

    cout << "\nEliminando Pila" << endl;
    destruirPila(*pila);
    delete pila;
    return 0;
}

