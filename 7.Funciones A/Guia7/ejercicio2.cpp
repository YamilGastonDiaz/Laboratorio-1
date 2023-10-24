#include <iostream>
#include <cstdlib>
using namespace std;

#include "header.h"

//ejercicio 2
int devolverRedondeo(float num1){
   int entero;
   entero=num1;
   if(num1-entero>=0.5){
        entero++;
   }
   return entero;
}
