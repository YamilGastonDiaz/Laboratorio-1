#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int numCliente, numSucursal;
char codigoTransaccion;
float monto;

//punto A
int contDepositos=0;
//punto B
int clienteMayor, sucursalMayor;
float montoMayor;
bool extraccionMayor=false;
//punto C
int contTransaccionS1=0, contTransaccionS2=0, contTransaccionS3=0;
int totalTransacciones;
//punto E
int acuDepositoS1=0, acuDepositoS2=0, acuDepositoS3=0;
//punto F
int cantDepositoS3=0;
//punto G
int
int cantDepositoS1=0, cantDepositoS2=0;
int sucursal;
int mayor;

cout<<"Nro. de Cliente: ";
cin>>numCliente;

while(numCliente!=0){
    cout<<"Nro. de Sucursal (1, 2 o 3): ";
    cin>>numSucursal;
    cout<<"Codigo de Transaccion (‘D’ para depositos, ‘E’ para extracciones): ";
    cin>>codigoTransaccion;
    cout<<"Monto en pesos de la transaccion: ";
    cin>>monto;

    if(codigoTransaccion=='D' && monto>1000){
        contDepositos++;
    }

    if(extraccionMayor==false && codigoTransaccion=='E'){
        montoMayor=monto;
        clienteMayor=numCliente;
        sucursalMayor=numSucursal;
        extraccionMayor=true;
    }else{
        if(monto>montoMayor && codigoTransaccion=='E'){
            montoMayor=monto;
            clienteMayor=numCliente;
            sucursalMayor=numSucursal;
        }
    }

    switch(numSucursal){
        case 1:
            contTransaccionS1++;
            if(codigoTransaccion=='D'){
                acuDepositoS1+=monto;
                cantDepositoS1++;
            }
            break;
        case 2:
            contTransaccionS2++;
            if(codigoTransaccion=='D'){
                acuDepositoS2+=monto;
                cantDepositoS3++;
            }
            break;
        case 3:
            contTransaccionS3++;
            if(codigoTransaccion=='D'){
                acuDepositoS3+=monto;
                cantDepositoS3++;
            }
            break;
    }

    cout<<"Nro. de Cliente: ";
    cin>>numCliente;
}
totalTransacciones=contTransaccionS1+contTransaccionS2+contTransaccionS3;

if(cantDepositoS1>cantDepositoS2){
    mayor=cantDepositoS1;
    sucursal=1;
}else{
    mayor=cantDepositoS2;
    sucursal=2;
}
if(cantDepositoS3>mayor){
    mayor=cantDepositoS3;
    sucursal=3;
}

cout<<"Cantidad de depositos por mas de $1000: "<<contDepositos<<endl;
cout<<"La extraccion de mayor monto fue del cliente: "<<clienteMayor<<" ,en la sucursal: "<<sucursalMayor<<endl;
cout<<"Porcentaje de operaciones de la sucursal 1: "<<contTransaccionS1*100/totalTransacciones<<endl;
cout<<"Porcentaje de operaciones de la sucursal 2: "<<contTransaccionS2*100/totalTransacciones<<endl;
cout<<"Porcentaje de operaciones de la sucursal 3: "<<contTransaccionS3*100/totalTransacciones<<endl;
cout<<"Total de depositos en la sucursal 1: "<<acuDepositoS1<<endl;
cout<<"Total de depositos en la sucursal 2: "<<acuDepositoS2<<endl;
cout<<"Total de depositos en la sucursal 3: "<<acuDepositoS3<<endl;
cout<<"Cantidad de depositos en la sucursal tigre: "<<cantDepositoS3<<endl;
cout<<"Numero de sucursal con mas depositos: "<<sucursal;

cout<<endl;
system("pause");
return 0;
}
