#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int const CATEGORIA=10;
int const DIA=31;
int dia, categoria;
float importe;
string nombreCat[CATEGORIA] = {"1-Servicios", "2-Alimentacion", "3-Limpieza", "4-Transporte", "5-Educacion", "6-Salud", "7-Ocio", "8- Impuestos", "9-Vestimenta", "10-Inveriones"};

cout<<"Dia: ";
cin>>dia;

//punto A y B
float vAcuGastos[CATEGORIA]={};
float mayorGasto;
int mayorCategoria;
//punto C
int cantCategoria=0;
//punto D
int vCantDia[DIA]={};


while(dia!=0){
    cout<<"ID de Categoria de gasto: ";
    cin>>categoria;
    cout<<"Importe del gasto: ";
    cin>>importe;

    //punto A y B
    vAcuGastos[categoria-1]+=importe;
    //punto D
    vCantDia[dia-1]++;


    cout<<"Dia: ";
    cin>>dia;
}
//punto A
mayorGasto=vAcuGastos[0];
mayorCategoria=0;
for(int i = 1; i < CATEGORIA; i++){
    if(vAcuGastos[i]>mayorGasto){
        mayorGasto=vAcuGastos[i];
        mayorCategoria=i;
    }
}
cout<<"La categoria que mayor gasto realizo: "<<nombreCat[mayorCategoria]<<", importe: "<<mayorGasto<<endl;
//punto B
for(int i = 0; i < CATEGORIA; i++){
    cout<<nombreCat[i]<<": "<<vAcuGastos[i]<<endl;
}
//punto C
for(int i = 0; i < CATEGORIA; i++){
    if(vAcuGastos[i]==0){
        cantCategoria++;
    }
}
for(int i = 0; i < DIA; i++){
    if(vCantDia[i]>0){
        cout << "La cantidad de gastos del día " << i + 1 << " es de: " << vCantDia[i] << endl;
    }

}
cout<<"Cantidad de categorias: "<<cantCategoria<<endl;
cout<<endl;
system("pause");
return 0;
}
