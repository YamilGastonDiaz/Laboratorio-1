#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
float importe, importeDescuento, restar, porcentaje;

cout<<"Ingresar el importe de una venta: ";
cin>>importe;
cout<<"Ingresar el importe de esa misma venta con el descuento aplicado: ";
cin>>importeDescuento;

restar=importe-importeDescuento;
porcentaje=restar*100/importe;

cout<<"Porcentaje de descuento aplicada: %"<<porcentaje;

cout<<endl;
system("pause");
return 0;
}
