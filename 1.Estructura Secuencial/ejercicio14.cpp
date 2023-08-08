#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
float precio, descuento, descuentoAplicado, totalPago;

cout<<"ingresar el importe de una compra: ";
cin>>precio;
cout<<"ingresar el descuento de una compra: ";
cin>>descuento;

descuentoAplicado=precio*descuento/100;
totalPago=precio-descuentoAplicado;

cout<<endl;
cout<<"Iporte sin descuento: "<<precio<<endl;
cout<<"Descuento aplicado: "<<descuentoAplicado<<endl;
cout<<"Total: "<<totalPago;

cout<<endl;
system("pause");
return 0;
}
