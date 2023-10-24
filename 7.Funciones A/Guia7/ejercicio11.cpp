#include <iostream>
#include <cstdlib>
using namespace std;

#include "header.h"

void asignarEstacion(int dia, int mes, int hemisferio, string& estacion){

if (hemisferio == 0) { // Hemisferio Sur
        if ((mes >= 1 && mes <= 3) || (mes == 12 && dia >= 21) || (mes == 3 && dia < 21))
            estacion = "Verano";
        else if ((mes >= 4 && mes <= 6) || (mes == 3 && dia >= 21))
            estacion = "Otoño";
        else if ((mes >= 7 && mes <= 9) || (mes == 6 && dia >= 21))
            estacion = "Invierno";
        else
            estacion = "Primavera";
    }
    else if (hemisferio == 1) { // Hemisferio Norte
        if ((mes >= 1 && mes <= 3) || (mes == 3 && dia < 21))
            estacion = "Invierno";
        else if ((mes >= 4 && mes <= 6) || (mes == 6 && dia >= 21))
            estacion = "Primavera";
        else if ((mes >= 7 && mes <= 9) || (mes == 9 && dia >= 21))
            estacion = "Verano";
        else
            estacion = "Otoño";
    }
}
