#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
char codigoTarifa;
string tipoServicio;
int categoria=0;
float cargoFijo=0.0;
float precioXkiloW=0.0;

cout<<"Ingrese el codigo de tarifa: ";
cin>>codigoTarifa;

switch(codigoTarifa){
    case 'A':
    case 'a':
        tipoServicio="Residencial";
        categoria=1;
        cargoFijo=500;
        precioXkiloW=1;
        break;
    case 'B':
    case 'b':
        tipoServicio="Residencial";
        categoria=2;
        cargoFijo=750;
        precioXkiloW=1.25;
        break;
    case 'C':
    case 'c':
        tipoServicio="Residencial";
        categoria=3;
        cargoFijo=600;
        precioXkiloW=3.75;
        break;
    case 'D':
    case 'd':
        tipoServicio="Comercial";
        categoria=1;
        cargoFijo=1100;
        precioXkiloW=6;
        break;
    case 'E':
    case 'e':
        tipoServicio="Comercial";
        categoria=2;
        cargoFijo=1500;
        precioXkiloW=12.5;
        break;
    case 'F':
    case 'f':
        tipoServicio="Comercial";
        categoria=3;
        cargoFijo=1800;
        precioXkiloW=20;
        break;
}

cout<<"Tipo de servicio: "<<tipoServicio<<endl;
cout<<"Categoria: "<<categoria<<endl;
cout<<"Cargo fijo: "<<cargoFijo<<endl;
cout<<"Precio por KWH: "<<precioXkiloW;

cout<<endl;
system("pause");
return 0;
}
