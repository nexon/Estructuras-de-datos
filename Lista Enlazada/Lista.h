#ifndef LISTA_H
#define LISTA_H
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

class ListaO{
      protected:
                class Nodo{
                      public:
                             int valor;
                             Nodo *siguiente;
                };
                
                Nodo * inicio;
      public:
	         ListaO(){inicio=0;}
	         void inserta(int valor);
	         void elimina(int valor);
	         void despliega(void);
};

#endif
             
