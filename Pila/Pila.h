#ifndef PILA_H
#define PILA_H
#include <iostream>
#include <cstdlib>

/* ---------------------------------------------------------------------------
**
** Pila.h
** Implementacion de una Pila (Stack)
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
             
