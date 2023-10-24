#include <iostream>
#include <cstdlib>
using namespace std;

#include "header.h"

int main(){
//ejercicio 1
int num1=13;
int  num2=2;
//ejercicio 2
float num3=2.65;
int redondeo;
//ejercicio 3
int numP=13;
//ejercicio 4, 5, 6
int vecNum[5];
//ejercicio 6
int valor_buscado=13;
//ejercicio 7
int posicionMax;
//ejercicio 8
char vecCaracter[25]="that's all folks";
int cantidad;
//ejercicio 9
char letra='l';
int cantidad2;
//ejercicio 10
int numDia=5;
string diaSemana;
//ejercicio 11
int numDia2=25, mes=2, hemisferio=1;
string estaciones;
//ejercicio 12
int numSG=2;
//ejercicio 13
int num5cifras=367;
int vecNum5[5];
//ejercicio 14
int numRepetido=14;
int cantidadRepetido;


cout<<"PUNTO 1"<<endl;
cout<<"Funcion que devuelve verdadero si n1 es multiplo de n2"<<endl;

if(devolverMultiplo(num1, num2)){
    cout<<"TRUE"<<endl;
}else{
    cout<<"FALSE"<<endl;
}
cout<<"-----------------------------"<<endl;
cout<<"PUNTO 2"<<endl;
cout<<"Funcion que recibe un float y devuelve un entero con el redondeo"<<endl;

redondeo=devolverRedondeo(num3);

cout<<"REDONDEO: "<<redondeo<<endl;

cout<<"-----------------------------"<<endl;
cout<<"PUNTO 3"<<endl;
cout<<"Funcion que devuelve verdadero si el numero ingresado es primo, de lo contrario devuelve falso"<<endl;

if(devolverPrimo(numP)){
    cout<<"TRUE"<<endl;
}else{
    cout<<"FALSE"<<endl;
}

cout<<"-----------------------------"<<endl;
cout<<"PUNTO 4"<<endl;
cout<<"Funcion que recibe un vector y su tamanio y lo carga"<<endl;

cargarVector(vecNum, 5);

cout<<"-----------------------------"<<endl;
cout<<"PUNTO 5"<<endl;
cout<<"Funcion que recibe un vector y su tamanio y lista sus elementos"<<endl;

mostrarVector(vecNum, 5);
cout<<endl;

cout<<"-----------------------------"<<endl;
cout<<"PUNTO 6"<<endl;
cout<<"Funcion que busca si un numero es un elemento del vector"<<endl;

if(buscarValor(valor_buscado, vecNum, 5)){
    cout<<"TRUE"<<endl;
}else{
    cout<<"FALSE"<<endl;
}

cout<<"-----------------------------"<<endl;
cout<<"PUNTO 7"<<endl;
cout<<"Funcion que devuelve la posicion de un numero en el vector"<<endl;

posicionMax=posicionMayor(vecNum, 5);

cout<<"POSICION MAYOR: "<<posicionMax<<endl;

cout<<"-----------------------------"<<endl;
cout<<"PUNTO 8"<<endl;
cout<<"Funcion que recibe un vector y devuelve la cantidad de caracteres"<<endl;

cantidad=contarCaracteres(vecCaracter, 25);
cout<<"CANTIDAD CARACTER: "<<cantidad<<endl;

cout<<"-----------------------------"<<endl;
cout<<"PUNTO 9"<<endl;
cout<<"Funcion que recibe un vector y un caracter y devuelve la cantidad de repeticiones del caracteres"<<endl;

cantidad2=cantidadCaracterB(letra, vecCaracter, 25);
cout<<"CANTIDAD DE CARACTER BUSCADO: "<<cantidad2<<endl;

cout<<"-----------------------------"<<endl;
cout<<"PUNTO 10"<<endl;
cout<<"Funcion que recibe un numero y devuelve el dia al que corresponde"<<endl;

asignarDia(numDia, diaSemana);
cout<<diaSemana<<endl;

cout<<"-----------------------------"<<endl;
cout<<"PUNTO 11"<<endl;
cout<<"Funcion que recibe un  numero de dia, mes , hemisferio y devuelve una estacion"<<endl;

asignarEstacion(numDia2, mes, hemisferio, estaciones);
cout<<estaciones<<endl;

cout<<"-----------------------------"<<endl;
cout<<"PUNTO 12"<<endl;
cout<<"Funcion que recibe un  numero y determina si es un numero primo Sophie Germain"<<endl;

if(primoSG(numSG)){
    cout<<"Es un numero primo Sophie Germain"<<endl;
}else{
    cout<<"No es un numero primo Sophie Germain"<<endl;
}

cout<<"-----------------------------"<<endl;
cout<<"PUNTO 13"<<endl;
cout<<"Funcion que recibe un  numero de 5 cifras y las asigne a cada elemento del vector"<<endl;

descomponerNumero(num5cifras, vecNum5, 5);

for(int i = 0; i < 5; i++){
    cout<<vecNum5[i]<<" ";
}
cout<<endl;

cout<<"-----------------------------"<<endl;
cout<<"PUNTO 14"<<endl;
cout<<"Funcion que recibe un numero y cuenta la cantidad de veces q se repite en el vector"<<endl;

cantidadRepetido=cantidadValorB(numRepetido, vecNum, 5);
cout<<"CANTIDAD REPETIDA: "<<cantidadRepetido<<endl;

cout<<endl;
system("pause");
return 0;
}
