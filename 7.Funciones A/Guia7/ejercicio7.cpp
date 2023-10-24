#include <iostream>
#include <cstdlib>
using namespace std;

#include "header.h"

int posicionMayor(int vecNum[], int tam){
    int mayorV=0;
    int posicionM;

    for(int i = 0; i < tam; i++){
        if(vecNum[i]>mayorV){
            mayorV=vecNum[i];
            posicionM=i+1;
        }
    }
    return posicionM;
}
