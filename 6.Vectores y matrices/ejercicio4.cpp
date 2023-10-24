#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
const int DIA=31;
int numVenta, numDia, i;
float importe;

//punto A
float acuImporteDia[DIA]={};
//punto B
int mayor, numDiaMayor;

cout<<"Numero de venta: ";
cin>>numVenta;

while(numVenta!=0){
    cout<<"El numero de dia: ";
    cin>>numDia;
    cout<<"Importe de la venta: ";
    cin>>importe;

    acuImporteDia[numDia-1]+=importe;


    cout<<"Numero de venta: ";
    cin>>numVenta;
}
for(i = 0; i < DIA; i++){
    if(acuImporteDia[i]>0){
        cout<<"dia "<<i+1<<" ,recaudacion total: "<<acuImporteDia[i]<<endl;
    }
}

mayor=acuImporteDia[0];
numDiaMayor=0;

for(i = 0; i < DIA; i++){
    if(acuImporteDia[i]>mayor){
        mayor=acuImporteDia[i];
        numDiaMayor=i+1;
      }
}
cout<<"Total recaudado mayor: "<<mayor<<" ,dia: "<<numDiaMayor;

cout<<endl;
system("pause");
return 0;
}
