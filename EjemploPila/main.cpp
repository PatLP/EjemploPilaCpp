#include <iostream>
#include <stdlib.h>
#include "Pila.h"


using namespace std;


void imprimirPila(Pila& pila){
    while(top(pila)!= NULL){
        cout << "Dato top ->" << top(pila)->dato<< endl;
        pop(pila);
    }
}


int main(){
    system("Color 0B");
    cout << "---------------------------" <<endl;
    cout << "Crear Pila" << endl ;
    cout << "---------------------------" <<endl;
    cout << "Pila *pila = new Pila;" <<endl;
    cout << "crearPila(*pila);" << endl;
    Pila* pila=new Pila;
    crearPila(*pila);
    cout << "---------------------------" <<endl <<endl <<endl;

    cout << "---------------------------" <<endl;
    cout << "Agregar elementos a la Pila" << endl;
    cout << "---------------------------" <<endl;
    cout << "push(*pila, *dato);" <<endl;
    for (int i = 0 ; i < 5; i++){
        Dato* dato = new Dato;
        *dato = i+1;
        push(*pila, *dato);
        delete dato;
    }
    cout << "---------------------------" <<endl <<endl <<endl;

    cout << "---------------------------" <<endl;
    cout << "Imprimir Pila" << endl;
    cout << "---------------------------" <<endl;
    imprimirPila(*pila);
    cout << "---------------------------" <<endl <<endl <<endl;

    cout << "---------------------------" <<endl;
    cout << "Eliminando Pila"<<endl ;
    cout << "---------------------------" <<endl;
    cout << "destruirPila(*pila);" << endl;
    cout << "---------------------------" <<endl <<endl;
    destruirPila(*pila);
    delete pila;
    return 0;
}

