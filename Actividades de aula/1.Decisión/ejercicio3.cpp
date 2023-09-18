#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
string nomArticulo, formaPago;
float precioUnitario, subTotal, descuentoE=0.85, descuentoQ=0.95, recargoT=1.1, total;
int cantVendidaArt;
char pagos;

cout<<"ingrese el nombre del articulo: ";
getline(cin, nomArticulo);
cout<<"ingrese el precio unitario del articulo: ";
cin>>precioUnitario;
cout<<"ingrese la cantidad vendidad del articulo: ";
cin>>cantVendidaArt;
cout<<"Forma de pago 'E-efectivo', 'Q-QR', 'T-tarjeta': ";
cin>>pagos;

subTotal=cantVendidaArt*precioUnitario;

switch(pagos){
    case'E':
            total=subTotal*descuentoE;
            formaPago="Efectivo";
        break;
    case'Q':
            total=subTotal*descuentoQ;
            formaPago="QR";
        break;
     case'T':
            total=subTotal*recargoT;
            formaPago="Tarjeta";
        break;
}

cout<<"Nombre del articulo: "<<nomArticulo<<endl;
cout<<"Subtotal de la compra "<<subTotal<<endl;
cout<<"Forma de pago: "<<formaPago<<endl;
cout<<"Total de la compra: "<<total;

cout<<endl;
system("pause");
return 0;
}
