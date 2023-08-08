#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
const int docena=100;
const int unidad=12;
int huevos, doceHuevos, huevoUno, totalPago;

cout<<"Ingresar la cantidad de huevos: ";
cin>>huevos;

doceHuevos=huevos/12;
huevoUno=huevos%12;

totalPago=doceHuevos*docena+huevoUno*unidad;

cout<<"El importe total a pagar: "<<totalPago;

cout<<endl;
system("pause");
return 0;
}
