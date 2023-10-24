#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
//primer lote
const int EMPLEADO=80;
int numEmpleado;
float valorHora, valorHoraExtra;
float vHora[EMPLEADO]={};
float vHoraExtra[EMPLEADO]={};
int i;
//segundo lote
int dia, totalHoraTrabajada;

//punto A
int hora, horaExtra;
float vSueldo[EMPLEADO]={};

for(i = 0; i < EMPLEADO; i++){
    cout<<"Nro. empleado: ";
    cin>>numEmpleado;
    cout<<"Valor de una hora de trabajo: ";
    cin>>valorHora;
    cout<<"Valor de la hora extra de trabajo: ";
    cin>>valorHoraExtra;

    vHora[numEmpleado-1]=valorHora;
    vHoraExtra[numEmpleado-1]=valorHoraExtra;
}

cout<<"Nro. empleado: ";
cin>>numEmpleado;

while(numEmpleado!=0){
    cout<<"Dia: ";
    cin>>dia;
    cout<<"Total de horas trabajadas en el dia: ";
    cin>>totalHoraTrabajada;

    if(totalHoraTrabajada < 9){
        hora=totalHoraTrabajada;
        horaExtra=0;
    }else{
        hora=8;
        horaExtra=totalHoraTrabajada-8;
    }

    vSueldo[numEmpleado-1]+=vHora[numEmpleado-1]*hora+vHoraExtra[numEmpleado-1]*horaExtra;

    cout<<"Nro. empleado: ";
    cin>>numEmpleado;
}

for(i = 0; i < EMPLEADO; i++){
    if(vSueldo[i]>0){
        cout << "Empleado numero: " << i+1 << " sueldo: $" << vSueldo[i] << endl;
    }
}
cout<<endl;
system("pause");
return 0;
}

