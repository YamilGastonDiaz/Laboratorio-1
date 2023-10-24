#include <iostream>
#include <cstdlib>
using namespace std;

#include "header.h"

bool buscarValor(int valor_buscado, int vecNum[], int tam){
    bool encontrado=false;

    for(int i = 0; i < tam; i++){
        if(vecNum[i]== valor_buscado){
            encontrado=true;
        }
    }
    return encontrado;
}
