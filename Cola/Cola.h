#ifndef COLA_H
#define COLA_H
#include <iostream>
#include <cstdlib>

using namespace std;
template <class ElementoCola>
class Cola{
      protected:
                class Nodo{
                      public:
                             ElementoCola valor;
                             Nodo *siguiente;
                };
                
                Nodo * inicio;
                Nodo * fin;
      public:
	         Cola(){inicio=0;fin=0;}
	         void agrega(ElementoCola valor);
	         ElementoCola extrae(void);
	         void despliega(void);
};

template <class ElementoCola>  
void Cola<ElementoCola>::agrega(ElementoCola valor){
     Nodo *nuevo = new Nodo();
     nuevo->valor = valor;
     nuevo->siguiente =0;
     if (inicio ==0){
        inicio = nuevo;
        fin = nuevo;
     }
     else{
          fin->siguiente = nuevo;
          fin=nuevo;
     } 
}
template <class ElementoCola>	         
ElementoCola Cola<ElementoCola>::extrae(void){
     if (inicio !=0){
        ElementoCola valor = inicio->valor;
        Nodo *aux=inicio;
        if (aux==fin) //solo un elemento en la cola  
           fin = inicio =0;
        else
            inicio = inicio->siguiente;
        delete aux;
        return valor;
        }
}

template <class ElementoCola>
void Cola<ElementoCola>::despliega(void){
       Nodo* aux = inicio;
       while(aux){
            cout << aux->valor << "\n";
            aux = aux->siguiente;
       } 
}   
           

#endif
