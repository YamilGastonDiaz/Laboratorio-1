#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
const int ARTICULO=15;
int numArticulo, stock;
int articulo, cantVendida, sucursal;

//punto A
int acuUnidadVendida[ARTICULO]={};

for(int i = 0; i < ARTICULO; i++){
    cout<<"Nro de articulo: ";
    cin>>numArticulo;
    cout<<"Stock: ";
    cin>>stock;
}

cout<<"Nro. de Artiiculo: ";
cin>>articulo;

while(articulo != 0){
    cout<<"Cantidad Vendida: ";
    cin>>cantVendida;
    cout<<"Nro. de Sucursal: ";
    cin>>sucursal;

    //A
    acuUnidadVendida[articulo-1]+=cantVendida;

    cout<<"Nro. de Artiiculo: ";
    cin>>articulo;
}
cout<<"-----------------------"<<endl;

for(int i = 0; i < ARTICULO; i++){
    if(acuUnidadVendida[i]>0){
        cout<<"Articulo "<<i<<": "<<acuUnidadVendida[i]<<endl;
    }

}


cout<<endl;
system("pause");
return 0;
}
