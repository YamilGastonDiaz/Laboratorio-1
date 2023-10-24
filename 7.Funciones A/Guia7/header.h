#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

//ejercicio 1
bool devolverMultiplo(int num1, int num2);

//ejercicio 2
int devolverRedondeo(float num1);

//ejercicio 3
bool devolverPrimo(int numP);

//ejercicio 4
void cargarVector(int vecNum[], int tam);

//punto 5
void mostrarVector(int vecNum[], int tam);

//punto 6
bool buscarValor(int valor_buscado, int vecNum[], int tam);

//punto 7
int posicionMayor(int vecNum[], int tam);

//punto 8
int contarCaracteres(char vecCaracter[], int tam);

//punto 9
int cantidadCaracterB(char valor_buscado, char vecCaracter[], int tam);

//punto 10
void asignarDia(int dia, string& nombre);

//punto 11
void asignarEstacion(int dia, int mes, int hemisferio, string& estacion);

//punto 12
bool primoSG(int num);

//punto 13
void descomponerNumero(int numero, int vecCifras[], int tam);

//punto 14
int cantidadValorB(int num, int vecNum[], int tam);

#endif // HEADER_H_INCLUDED
