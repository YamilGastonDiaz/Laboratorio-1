#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
float importe, restar, descuento;

cout<<"Ingresar el importe de una venta: ";
cin>>importe;
cout<<"Ingresar el porcentaje de descuento aplicada: ";
cin>>descuento;

restar=(100-descuento)/100;
descuento=importe*restar;

cout<<"El importe a pagar: "<<descuento;

cout<<endl;
system("pause");
return 0;
}
