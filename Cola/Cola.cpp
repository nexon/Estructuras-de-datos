#include "Cola.h"

void Cola::agrega(void* valor){
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
             
void* Cola::extrae(void){
     if (inicio !=0){
                void* valor = inicio->valor;
                Nodo *aux=inicio;
                if (aux==fin) //solo un elemento en la cola  
                   fin = inicio =0;
                else
                    inicio = inicio->siguiente;
                delete aux;
                return valor;
       }
}
      
    

