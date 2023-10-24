#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
const int CLIENTE=50;
const int ENTRENAMINETO=10;
int numEntrenamiento, cliente, tipo, tiempo;
int i, j;

cout<<"Numero de Entrenamiento: ";
cin>>numEntrenamiento;

//punto A
int acuTiempoTotal[CLIENTE]={};
int hora, minutos;
//punto B y E
int mTipoEntrenamiento[CLIENTE][ENTRENAMINETO]={};
//punto C
int mTiempoEntrenado[CLIENTE][ENTRENAMINETO]={};
//punto D
int mayor, mayorCliente;

while(numEntrenamiento!=0){
    cout<<"Cliente: ";
    cin>>cliente;
    cout<<"Tipo de Entrenamiento: ";
    cin>>tipo;
    cout<<"Tiempo del Entrenamiento: ";
    cin>>tiempo;
    cout<<endl;

    //A y D
    acuTiempoTotal[cliente-101]+=tiempo;
    //B y E
    mTipoEntrenamiento[cliente-101][tipo-1]++;
    //C
    mTiempoEntrenado[cliente-101][tipo-1]+=tiempo;


    cout<<"Numero de Entrenamiento: ";
    cin>>numEntrenamiento;
}
cout<<"--------------------------"<<endl;

cout<<"El tiempo total de entrenamiento: "<<endl;
for(i = 0; i < CLIENTE; i++){
    if(acuTiempoTotal[i]>0){
        hora=acuTiempoTotal[i]/60;
        minutos=acuTiempoTotal[i]%60;
        cout<<"cliente: "<<i+101<<" hora: "<<hora<<" minutos: "<<minutos<<endl;
    }
}
cout<<"--------------------------"<<endl;

cout<<"Los tipos de entrenamiento que realizo: "<<endl;
for(i = 0; i < CLIENTE; i++){
        cout<<"cliente "<<i+101<<" :";
    for(j = 0; j < ENTRENAMINETO; j++){
        if(mTipoEntrenamiento[i][j]>0){
            cout<<j+1<<"\t";
        }
    }
    cout<<endl;
}
cout<<"--------------------------"<<endl;

cout<<"La cantidad total de minutos entrenados: "<<endl;
for(i = 0; i < CLIENTE; i++){
    for(j = 0; j < ENTRENAMINETO; j++){
        if(mTiempoEntrenado[i][j]>0){
            cout<<"cliente "<<i+101<<" ,tipo de entrenamiento: "<<j+1<<" ,minutos: "<<mTiempoEntrenado[i][j]<<endl;
        }
    }
}
cout<<"--------------------------"<<endl;

mayor=acuTiempoTotal[0];
mayorCliente=0;

for(i = 1; i < CLIENTE; i++){
    if(acuTiempoTotal[i]>mayor){
        mayor=acuTiempoTotal[i];
        mayorCliente=i;
    }
}
cout<<"El numero de cliente que mas tiempo haya entrenado: "<<mayorCliente+101<<endl;
cout<<"--------------------------"<<endl;

cout<<"Los tipos de entrenamiento que no realizo: "<<endl;
for(i = 0; i < CLIENTE; i++){
    cout<<"cliente "<<i+101<<" :\t";
    for(j = 0; j < ENTRENAMINETO; j++){
        if(mTipoEntrenamiento[i][j]==0){
            cout<<j+1<<"\t";
        }
    }
    cout<<endl;
}

cout<<endl;
system("pause");
return 0;
}
