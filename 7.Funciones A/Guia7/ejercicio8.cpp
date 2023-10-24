#include <iostream>
#include <cstdlib>
using namespace std;

#include "header.h"

int contarCaracteres(char vecCaracter[], int tam){
    int c=0;
     while(vecCaracter[c] != '\0'){
        c++;
    }
    return c;
}
