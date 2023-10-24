#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
//variables lote 1
int const CODIGO=3;
int codHamburguesa, stock;
float precio;
int vStock[CODIGO]={};
float vPrecio[CODIGO]={};
//variable lote 2
int codHamburguesa2, dia, cantidad;
char tipoAcompaniamiento;

//punto A
int vCantidadVenta[CODIGO]={};
//punto B
int vCantidadVentaB[CODIGO]={};
int mayorVenta, mayorP;
//punto C
int const DIA=7;
int const TIPO=2;
int mDiasVenta[DIA][TIPO]={};
//punto D
int const ACOMPANIAMIENTO=4;
int mAcuVdiaXacomp[DIA][ACOMPANIAMIENTO]={};
string nDias[DIA]={"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
string nAcompaniamiento[ACOMPANIAMIENTO]={"Batatas", "Papas", "Aros de cebolla", "sin acompaniamiento"};

//lote 1
for(int i = 0; i < CODIGO; i++){
    cout<<"Codigo de hamburguesa: ";
    cin>>codHamburguesa;
    cout<<"Precio: ";
    cin>>precio;
    cout<<"Stock al comienzo de la semana: ";
    cin>>stock;
     cout<<endl;

    vStock[i]=stock;
    vPrecio[i]=precio;
}

//lote 2

cout<<"Codigo de hamburguesa: ";
cin>>codHamburguesa2;

while(codHamburguesa2 != 0){
    cout<<"Dia: ";
    cin>>dia;
    cout<<"Cantidad vendida: ";
    cin>>cantidad;
    cout<<"Tipo de Acompaniamiento: ";
    cin>>tipoAcompaniamiento;
    cout<<endl;

    //punto A y lo uso para el punto D
    vCantidadVenta[codHamburguesa2-1]+=cantidad;
    //punto B
    if(dia == 5){
        vCantidadVentaB[codHamburguesa2-1]+=cantidad;
    }
    //punto C
    if(tipoAcompaniamiento=='B'){
        mDiasVenta[dia-1][0]++;
    }else if(tipoAcompaniamiento=='C'){
        mDiasVenta[dia-1][1]++;
    }
    //punto D
    if(tipoAcompaniamiento=='B'){
        mAcuVdiaXacomp[dia-1][0]+=cantidad;
    }else if(tipoAcompaniamiento=='P'){
        mAcuVdiaXacomp[dia-1][1]+=cantidad;
    }else if(mAcuVdiaXacomp[dia-1][2]=='C'){
        mAcuVdiaXacomp[dia-1][2]+=cantidad;
    }else{
        mAcuVdiaXacomp[dia-1][3]+=cantidad;
    }



    cout<<"Codigo de hamburguesa: ";
    cin>>codHamburguesa2;
}
system("cls");
cout<<"----A----"<<endl;
for(int i = 0; i < CODIGO; i++){
    cout<<"Cantidad #"<<i+1<<": "<<vCantidadVenta[i]<<endl;
    cout<<"Total recaudado: "<<vCantidadVenta[i]*vPrecio[i]<<endl;
}
cout<<"----B----"<<endl;
mayorVenta=vCantidadVentaB[0];
mayorP=0;
for(int i = 1; i < CODIGO; i++){
    if(vCantidadVentaB[i]>mayorVenta){
        mayorVenta=vCantidadVentaB[i];
        mayorP=i;
    }
}
if(mayorP>0){
cout<<"La hamburguesa mas vendida el viernes fue: "<<mayorP+1<<endl;
}else{
    cout<<"no se vendio hamburguesas el viernes"<<endl;
}

cout<<"----C----"<<endl;
for(int i = 0; i < DIA; i++){
    if(mDiasVenta[i][0]>0 && mDiasVenta[i][1]==0){
        cout<<"Los dias que se vendieron hamburguesas acompaniadas de Batatas pero no de Aros de Cebolla: "<<i+1<<endl;
    }
}
cout<<"----D----"<<endl;
for(int i = 0; i < CODIGO; i++){
    if(vCantidadVenta[i]-vStock[i]==0){
        cout<<"Las hamburguesas que lograron un sold out: "<<i+1<<endl;
    }
}
cout<<"----E----"<<endl;
for(int f = 0; f < DIA; f++){
    cout<<"DIA "<<nDias[f]<<endl;
    for(int c = 0; c < ACOMPANIAMIENTO; c++){
        cout<<nAcompaniamiento[c]<<": "<<mAcuVdiaXacomp[f][c]<<endl;
    }
    cout<<endl;
}
cout<<endl;
system("pause");
return 0;
}
