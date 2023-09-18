#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int numVenta, butacas;
float precio=5000;
//punta A
int acuButacas=0, totalRecaudado;
//punto B
int butacasSinV;

cout<<"ingrese en numero de venta: ";
cin>>numVenta;


while (numVenta !=0 && acuButacas != 1200){
    cout<<"cantidad de butacas: ";
    cin>>butacas;
    acuButacas+=butacas;


    cout<<"---------------------------------"<<endl;
    cout<<"ingrese en numero de venta: ";
    cin>>numVenta;
}
cout<<endl;

totalRecaudado=acuButacas*precio;
butacasSinV=1200-acuButacas;
cout<<"El total recaudado: "<<totalRecaudado<<endl;
cout<<"La cantidad de butacas que quedaron sin vender: "<<butacasSinV;

cout<<endl;
system("pause");
return 0;
}
