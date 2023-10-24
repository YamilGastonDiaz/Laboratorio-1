#include <iostream>
#include <cstdlib>
using namespace std;

#include "header.h"

bool primoSG(int num){
    if(devolverPrimo(num)&&devolverPrimo(2*num+1)){
        return true;
    }else{
        return false;
    }
}
