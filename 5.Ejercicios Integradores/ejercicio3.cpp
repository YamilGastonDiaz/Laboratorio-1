#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
const int EMPLEADO=3;
const int DIA=2;
int i, j, nroLegajo, cantHorasxSemana, horaEntrada, horaSalida;

//punto A
bool falto=false;
//punto B
int horaxDia;
int horaxSemana;

for(i = 0; i < EMPLEADO; i++){
    horaxSemana=0;
    cout<<"Nro. de Legajo: ";
    cin>>nroLegajo;
    cout<<"Cantidad de horas teoricas a trabajar por semana: ";
    cin>>cantHorasxSemana;

    for(j = 0; j < DIA; j++){
        cout<<"Hora de entrada: ";
        cin>>horaEntrada;
        cout<<"Hora de salida: ";
        cin>>horaSalida;

        horaxDia=horaSalida-horaEntrada;
        horaxSemana+=horaxDia;

        if(horaEntrada==0 && horaSalida==0){
            falto=true;
        }
    }
    if(falto){
        cout<<"Empleados que faltaron algun dia en la semana: "<<endl;
        cout<<"Legajo: "<<nroLegajo<<endl;
        falto=false;
    }

    if(horaxSemana>cantHorasxSemana){
        cout<<"Trabajo de mas";
    }else{
        if(horaxSemana<cantHorasxSemana){
            cout<<"Trabajo de menos";
        }else{
            cout<<"Trabajo igual";
        }
    }
}

cout<<endl;
system("pause");
return 0;
}
