#include <iostream>
#include <cstdlib>
using namespace std;

#include "header.h"

void descomponerNumero(int numero, int vecCifras[], int tam) {
    for (int i = 4; i >= 0; i--) {
        vecCifras[i] = numero % 10; // Obtiene la cifra más baja
        numero /= 10; // Elimina la cifra más baja
    }
}
