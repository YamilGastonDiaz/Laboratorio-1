#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int asientosD, asientosO, totalAsientos;
float porcetajeD, porcetajeO;

cout<<"Ingrese la cantidad de asientos disponibles: ";
cin>>asientosD;
cout<<"Ingrese la cantidad de asientos ocupados: ";
cin>>asientosO;

totalAsientos=asientosD+asientosO;

porcetajeD=(asientosD*100)/totalAsientos;
porcetajeO=(asientosO*100)/totalAsientos;

cout<<endl;
cout<<"Porcentaje de asientos Disponibles: "<<porcetajeD<<endl;
cout<<"Porcentaje de asientos Ocupados: "<<porcetajeO;

cout<<endl;
system("pause");
return 0;
}
