#include <iostream>
#include <locale>

using namespace std;

bool TieneEnvioGratis(int suc, int hor);

int main(){
setlocale(LC_ALL, "");

int venta, cliente, sucursal, saborHelado, horario;
float peso;

const int CLIENTE=51;
const int SUCURSAL=6;
const int SABOR=8;

//punto A
float kiloA;
float vPuntoA[SUCURSAL]={};
string nombreS[6]={"Pacheco", "Tigre I", "San Fernando", "Tigre II", "Garin", "Don Torcuato"};
//punto B
int contCliente=0;
bool vPuntoCh[CLIENTE]={};
bool vPuntoF[CLIENTE]={};
//Punto C
int vPuntoC[CLIENTE]={};
//Punto D
float kiloD=0;
float vPuntoD[SABOR]={};
string nombreH[SABOR]={"Chocolate", "Atún", "Mate cocido", "Jengibre granizado", "Frutilla", "Café con roquefort", "Pochoclo", "Ensalada Mixta: Lechuga, tomate y cebolla"};

cout<<"Número de venta: ";
cin>>venta;

while(venta != 999){
    cout<<"Número de cliente: ";
    cin>>cliente;
    cout<<"Número de sucursal: ";
    cin>>sucursal;
    cout<<"Número de sabor de helado: ";
    cin>>saborHelado;
    cout<<"Peso en gramos: ";
    cin>>peso;
    cout<<"Horario: ";
    cin>>horario;
    cout<<endl;

    vPuntoA[sucursal-1]+=peso;

    if(saborHelado==100){
        vPuntoCh[cliente-100]=true;
    }else if(saborHelado==500){
        vPuntoF[cliente-100]=true;
    }

    if(TieneEnvioGratis(sucursal, horario)){
        vPuntoC[cliente-100]++;
    }

    vPuntoD[saborHelado/100-1]+=peso;

    cout<<"Número de venta: ";
    cin>>venta;
}
cout<<"PUNTO A:"<<endl;
for(int i = 0; i < SUCURSAL; i++){
    kiloA=vPuntoA[i]/1000;
    cout<<nombreS[i]<<": "<<vPuntoA[i]<<endl;
}
cout<<"PUNTO B:"<<endl;
for(int i = 0; i < CLIENTE; i++){
    if(vPuntoCh[i] && !vPuntoF[i]){
        contCliente++;
    }
}
cout<<"Cantidad de clientes: "<<contCliente<<endl;
cout<<"PUNTO C:"<<endl;
for(int i = 0; i < CLIENTE; i++){
    if(vPuntoC[i]>1){
        cout<<"Cliente: "<<i+100<<endl;
    }
}
cout<<"PUNTO D:"<<endl;
for(int i = 0; i < SABOR; i++){
    kiloD=vPuntoD[i]/1000;
    if(kiloD>15000){
        cout<<nombreH[i]<<": "<<kiloD<<endl;
    }
}
cout<<endl;
system("pause");
return 0;
}

bool TieneEnvioGratis(int suc, int hor){
    if(suc==1 && (hor>=12 && hor==15) || suc==2 && (hor>=16 && hor==18) || suc==4 && (hor>=20 && hor==22) || suc==5 && (hor>=14 && hor==17) || suc==6 && (hor>=14 && hor==16)){
        return true;
    }else{
        return false;
    }
}
