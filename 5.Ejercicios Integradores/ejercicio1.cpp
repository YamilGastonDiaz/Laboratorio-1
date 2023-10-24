#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
const int EMPLEADO=50;
float categoria1=38000;
float categoria2=70000;
float categoria3=105000;
float porAnio=1200;
int i, categoria, antiguedad;

//punto A
int cantEmpleadoC1=0, cantEmpleadoC2=0, cantEmpleadoC3=0;
//punto B
int sueldo, acuSueldoC1=0, acuSueldoC2=0, acuSueldoC3=0;
//punto C
float promedio;
//punto D
int categoriaMax;
float sueldoMax;

for(i = 1; i <= EMPLEADO; i++){
    cout<<"Categoria (1 a 3): ";
    cin>>categoria;
    cout<<"Antiguedad: ";
    cin>>antiguedad;

    sueldo=0;
    switch(categoria){
        case 1:
            cantEmpleadoC1++;
            sueldo=categoria1+antiguedad*porAnio;
            acuSueldoC1+=sueldo;
            break;
        case 2:
            cantEmpleadoC2++;
            sueldo=categoria2+antiguedad*porAnio;
            acuSueldoC2+=sueldo;
            break;
        case 3:
            cantEmpleadoC3++;
            sueldo=categoria3+antiguedad*porAnio;
            acuSueldoC3+=sueldo;
            break;
    }
    if(i==1 || sueldo>sueldoMax){
        sueldoMax=sueldo;
        categoriaMax=categoria;
    }
}
promedio=(float)(acuSueldoC1+acuSueldoC2+acuSueldoC3)/EMPLEADO;
cout<<"Cantidad de empleado categoria 1: "<<cantEmpleadoC1<<endl;
cout<<"Cantidad de empleado categoria 2: "<<cantEmpleadoC2<<endl;
cout<<"Cantidad de empleado categoria 3: "<<cantEmpleadoC3<<endl;
cout<<"Total sueldo categoria 1: "<<acuSueldoC1<<endl;
cout<<"Total sueldo categoria 2: "<<acuSueldoC2<<endl;
cout<<"Total sueldo categoria 3: "<<acuSueldoC3<<endl;
cout<<"Promedio: "<<promedio<<endl;
cout<<"Sueldo maximo: "<<sueldoMax<<", Categoria: "<<categoriaMax;



cout<<endl;
system("pause");
return 0;
}
