#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include "ListaO.h"
#include "ListaO.cpp"

using namespace std;

int main(int argc, char *argv[]) {
    ListaO *mia = new ListaO(); 
    mia->inserta(5);
    mia->inserta(6);
    mia->inserta(7);
    mia->inserta(8);
    mia->inserta(9);
    mia->inserta(10); 
    mia->inserta(10); 
    mia->inserta(3); 
    mia->inserta(10); 
    mia->inserta(2); 
    cout << "se insertaron los elementos \n";
    mia->despliega();
    cout << "despues de eliminar el nro 8 el resultado es:\n";
    mia->elimina(8);
    mia->despliega();     
    system("PAUSE");
    return(0);
}
