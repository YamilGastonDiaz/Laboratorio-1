#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int municipio=3;
int codMunicipio, codLocalidad, facturaEmitida, facturaAbonada;

for(int i = 0; i < municipio ; i++){
    cout<<"Codigo de Municipio: ";
    cin>>codMunicipio;
    cout<<"Codigo de Localidad: ";
    cin>>codLocalidad;

    while(codLocalidad!=0){
        cout<<"Cantidad de facturas emitidas: ";
        cin>>facturaEmitida;
        cout<<"Cantidad de facturas abonadas: ";
        cin>>facturaAbonada;



        cout<<"Codigo de Localidad: ";
        cin>>codLocalidad;
    }
}



cout<<endl;
system("pause");
return 0;
}
