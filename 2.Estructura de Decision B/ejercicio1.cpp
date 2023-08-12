#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int cantHoras;
char tipoLenguaje;
bool urgente;
float resultadoC, resultadoCs, resultadoP, resultadoG;

const float cMAs=2500;
const float cSharp=2100;
const float phyton=1400;
const float go=2000;

cout<<"Ingrese la cantidad de horas: ";
cin>>cantHoras;
cout<<"Ingrese el tipo de lenguaje: ";
cin>>tipoLenguaje;
cout<<"Ingrese 1 si es urgente o 0 si no es urgente: ";
cin>>urgente;

switch(tipoLenguaje){
    case 'C':
            if(urgente==1){
                resultadoC=cantHoras*cMAs*2.2;
                cout<<"Costo total del proyecto en C/C++: "<<resultadoC<<endl;
            }else{
                resultadoC=cantHoras*cMAs;
                cout<<"Costo total del proyecto en C/C++: "<<resultadoC<<endl;
            }
        break;
    case '#':
            if(urgente==1){
                resultadoCs=cantHoras*cSharp*2.2;
                cout<<"Costo total del proyecto en C#: "<<resultadoCs<<endl;
            }else{
                resultadoCs=cantHoras*cSharp;
                cout<<"Costo total del proyecto en C#: "<<resultadoCs<<endl;
            }
        break;
    case 'P':
            if(urgente==1){
                resultadoP=cantHoras*phyton*2.2;
                cout<<"Costo total del proyecto en Python: "<<resultadoP<<endl;
            }else{
                resultadoP=cantHoras*phyton;
                cout<<"Costo total del proyecto en Python: "<<resultadoP<<endl;
            }
        break;
    case 'G':
            if(urgente==1){
                resultadoG=cantHoras*go*2.2;
                cout<<"Costo total del proyecto en Go: "<<resultadoG<<endl;
            }else{
                resultadoG=cantHoras*go;
                cout<<"Costo total del proyecto en Go: "<<resultadoG<<endl;
            }
        break;
}

cout<<endl;
system("pause");
return 0;
}
