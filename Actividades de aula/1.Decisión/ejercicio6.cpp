#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
char codigoTarifa;
int  medidorAct, medidorAnt, consumo;
float cargoFijo=0.0;
float precioXkiloW=0.0;
float importe;

cout << "Medicion actual: ";
cin >> medidorAct;
cout << "Medicion anterior: ";
cin >> medidorAnt;
cout<<"Ingrese el codigo de tarifa: ";
cin>>codigoTarifa;

switch(codigoTarifa){
    case 'A':
    case 'a':
        cargoFijo=500;
        precioXkiloW=1;
        break;
    case 'B':
    case 'b':
        cargoFijo=750;
        precioXkiloW=1.25;
        break;
    case 'C':
    case 'c':
        cargoFijo=600;
        precioXkiloW=3.75;
        break;
    case 'D':
    case 'd':
        cargoFijo=1100;
        precioXkiloW=6;
        break;
    case 'E':
    case 'e':
        cargoFijo=1500;
        precioXkiloW=12.5;
        break;
    case 'F':
    case 'f':
        cargoFijo=1800;
        precioXkiloW=20;
        break;
}

consumo=medidorAct-medidorAnt;
importe= cargoFijo+consumo*precioXkiloW;

cout<<"El importe a abonar en concepto de suministro es: "<<importe;

cout<<endl;
system("pause");
return 0;
}
