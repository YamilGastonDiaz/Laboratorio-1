#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int legajo, codMateria;
float nota;

//Punto A
int conNota=0;
float acuNOta=0.0f;
//Punto B
int legajoMenor;
float notaMenor;
bool bandMenor=0;
//Punto C
int contMateria10=0;
//Punto D
float porcentajeA=0, porcentajeD=0, total;

cout<<"Legajo del estudiante: ";
cin>>legajo;

while(legajo <= 30000){
    cout<<"Codigo de materia: ";
    cin>>codMateria;
    cout<<"Nota: ";
    cin>>nota;

    acuNOta+=nota;
    conNota++;

    if(bandMenor==0){
        notaMenor=nota;
        legajoMenor=legajo;
        bandMenor=1;
    }else{
        if(nota<notaMenor){
            notaMenor=nota;
            legajoMenor=legajo;
        }
    }

    if(codMateria==10){
        contMateria10++;
    }

    if(nota>=6){
        porcentajeA++;
    }else{
        porcentajeD++;
    }

    cout<<"Legajo del estudiante: ";
    cin>>legajo;
}
total=porcentajeA+porcentajeD;
cout<<"La nota promedio entre todos los estudiantes: "<<acuNOta/conNota<<endl;
cout<<"El legajo del estudiante con menor nota: "<<legajoMenor<<endl;
cout<<"La cantidad de examenes rendidos para la materia 10: "<<contMateria10<<endl;
cout<<"El porcentaje de aprobados: "<<porcentajeA*100/total<<endl;
cout<<"El porcentaje de no aprobados: "porcentajeD*100/total<<endl;

cout<<endl;
system("pause");
return 0;
}
