#include <iostream>
#include <cstdlib>
using namespace std;

#include "header.h"

bool devolverPrimo(int numP){
    int contador=0;
    for(int i = 1; i <= numP; i++){
        if(numP%i==0){
            contador++;
        }
    }
    if(contador==2){
       return true;
    }else{
        return false;
    }
}
