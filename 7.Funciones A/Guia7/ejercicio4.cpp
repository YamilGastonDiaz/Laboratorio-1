#include <iostream>
#include <cstdlib>
using namespace std;

#include "header.h"

void cargarVector(int vecNum[], int tam){
    for(int i = 0; i < tam; i++){
        cout<<"ingrese un numero: ";
        cin>>vecNum[i];
    }
}
