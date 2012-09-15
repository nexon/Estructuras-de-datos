#include "ListaO.h"

//Inserta un valor en la lista
void ListaO::inserta(int valor){
     Nodo *nuevo = new Nodo();
     nuevo->valor = valor;
     nuevo->siguiente =0;
     if (inicio ==0)
        inicio = nuevo;
     else{
          if (valor <= inicio->valor){
                    nuevo->siguiente = inicio;
                    inicio = nuevo;
          }
          else{
               Nodo *prev = inicio;
               Nodo *aux = inicio->siguiente;
               while (aux!=0 && aux->valor< valor){
                     prev=aux;
                     aux = aux->siguiente;
               }
               nuevo->siguiente = aux;
               prev->siguiente = nuevo;
          }     
         
     }
}
//Elimina un valor en la lista             
void ListaO::elimina(int valor){
     if (inicio !=0){
        Nodo *aux = inicio;
        if (inicio->valor == valor){
           inicio = inicio->siguiente;
           delete aux;
        }
        else{
             Nodo *prev=aux;
             aux = aux->siguiente;
             while (aux && (aux->valor!=valor)){
                   prev = aux;
                   aux = aux->siguiente;
             }
             if (aux !=0){
                prev->siguiente = aux->siguiente;
                delete aux;
             }
        }
     }
} 
//Imprime o Muestat todos los valores de la lista
void ListaO::despliega(){
     Nodo *aux = inicio;
     cout <<"Lista::Inicio \n";
     if (aux){
        cout << aux->valor <<"\n";
        while (aux->siguiente!=0){
              aux = aux->siguiente;
              cout << aux->valor <<"\n";
        }
     }
     cout <<"Lista::Fin \n";
}               


