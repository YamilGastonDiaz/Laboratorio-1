#include <iostream>
#include <cstdlib>
using namespace std;

#include "header.h"

int cantidadCaracterB(char valor_buscado, char vecCaracter[], int tam){
    int c=0;
    int repeticion=0;
    while(vecCaracter[c] != '\0'){
        if(vecCaracter[c]==valor_buscado){
            repeticion++;
        }
        c++;
    }
    return repeticion;
}
