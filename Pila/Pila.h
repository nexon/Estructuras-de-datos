#ifndef PILA_H
#define PILA_H
#include <iostream>
#include <cstdlib>

/* ---------------------------------------------------------------------------
**
** lista.h
** Implementacion de una lista enlazada (Ordenada)
**
** Author: Alberto Lagos Toro <alberto.lagos@gmail.com>
** -------------------------------------------------------------------------*/
	
using namespace std;

class Pila{
      protected:
                class Nodo{
                      public:
                             int valor;
                             Nodo *siguiente;
                };
                
                Nodo * inicio;
      public:
	         Pila(){inicio=0;}
	         void agrega(int valor);
	         int extrae(void);
};
#endif
             
