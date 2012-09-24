#include "Pila.h"

void Pila::agrega(int valor){
     Nodo *nuevo = new Nodo();
     nuevo->valor = valor;
     nuevo->siguiente =inicio;
     inicio=nuevo;
}
     
     
int Pila::extrae(void){
     if (inicio !=0){
                int num = inicio->valor;
                Nodo *aux=inicio;
                if (aux->siguiente)
                    inicio = inicio->siguiente;
                else
                   inicio=0;
                delete aux;
                return num;
       }
}           


