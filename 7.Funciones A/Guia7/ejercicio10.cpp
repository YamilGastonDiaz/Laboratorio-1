#include <iostream>
#include <cstdlib>
using namespace std;

#include "header.h"

void asignarDia(int dia, string& nombre){
switch (dia){
case 0:
	nombre = "Domingo";
	break;
case 1:
	nombre = "Lunes";
	break;
case 2:
	nombre = "Martes";
	break;
case 3:
	nombre = "Miercoles";
	break;
case 4:
	nombre = "Jueves";
	break;
case 5:
	nombre = "Viernes";
	break;
case 6:
	nombre = "Sabado";
	break;
default:
	nombre = "Dia incorrecto";
	break;
}
}
