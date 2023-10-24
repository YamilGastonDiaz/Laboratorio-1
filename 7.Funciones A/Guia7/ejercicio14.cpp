#include <iostream>
#include <cstdlib>
using namespace std;

#include "header.h"

int cantidadValorB(int num, int vecNum[], int tam){
    int contador=0;
    for(int i = 0; i < tam; i++){
        if(vecNum[i]==num){
            contador++;
        }
    }
    return contador;
}
