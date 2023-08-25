#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
const int tam=14;
int i, numMovimiento, dia, cantExtraccion=0, cantDeposito=0, maxDia, maxNumMovimiento, cantMovimieto10=0;
char tipo;
float importe, acuDeposito=0, acuExtraccion=0, maxImporte, porcentajeE, porcentajeD;


for(i = 0; i < tam; i++){
    cout<<"Numero de movimiento: ";
    cin>>numMovimiento;
    cout<<"Dia: ";
    cin>>dia;
    cout<<"Tipo ('E' - Extraccion / 'D' - Deposito): ";
    cin>>tipo;
    cout<<"Importe: ";
    cin>>importe;
    cout<<"-------------------------------------------"<<endl;

    switch(tipo){
        case 'E':
            acuExtraccion+=importe;
            break;
        case 'D':
            acuDeposito+=importe;
            break;
    }

    switch(tipo){
        case 'E':
            cantExtraccion++;
            break;
        case 'D':
            cantDeposito++;
            break;
    }

    if(tipo == 'D'){
        if(i==0 || importe>maxImporte){
        maxImporte=importe;
        maxDia=dia;
        maxNumMovimiento=numMovimiento;
        }
    }

    if(dia == 10){
        cantMovimieto10++;
    }
}
porcentajeE=cantExtraccion*100/tam;
porcentajeD=cantDeposito*100/tam;

cout<<"El saldo final de la cuenta: "<<acuDeposito-acuExtraccion<<endl;
cout<<"El porcentaje de movimientos de extraccion: "<<porcentajeE<<" el porcentaje de deposito: "<<porcentajeD<<endl;
cout<<"El deposito de mayor importe: "<<maxImporte<<" dia: "<<maxDia<<" numero de movimiento: "<<maxNumMovimiento<<endl;
cout<<"La cantidad de movimientos del dia 10: "<<cantMovimieto10;

cout<<endl;
system("pause");
return 0;
}
