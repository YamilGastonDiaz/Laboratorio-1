#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int const ESTUDIANTES=5;
int nota, numExamen, suma;

//punto A
int vNotas[ESTUDIANTES]={};

//punto B
float promedio, cantEstudiantes=0;

//ingreso las notas
for(int i = 0; i < ESTUDIANTES; i++){
    cout<<"Ingrese la nota del primer parcial: ";
    cin>>nota;
    vNotas[i]=nota;
}

//sumo el vector
for(int i = 0; i < ESTUDIANTES; i++){
    suma+=vNotas[i];
}

//promedio de las noas
promedio=(float)suma/ESTUDIANTES;


//recorremos el vector para saber cuantos son mayores al promedio
for(int i = 1; i < ESTUDIANTES; i++){
    if(vNotas[i]>promedio){
        cantEstudiantes++;
    }
}


cout<<"Igrese el numero de examen que desea ver: ";
cin>>numExamen;

cout<<"La nota del examen es: "<<vNotas[numExamen-1]<<endl;

cout<<"la cantidad de estudiates es: "<<cantEstudiantes;

cout<<endl;
system("pause");
return 0;
}
