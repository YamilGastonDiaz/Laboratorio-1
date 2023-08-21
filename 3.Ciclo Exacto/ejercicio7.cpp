#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
const int tam=10;
float sueldo, sueldoPromedio;
int i, sueldoMayor, sueldoMenor, acuSueldo, cantSueldo;

acuSueldo=0;
cantSueldo=0;


for(i = 0; i < tam; i++){
    cout<<"Ingrese el sueldo: ";
    cin>>sueldo;

    if(i==0 || sueldo>sueldoMayor){
        sueldoMayor=sueldo;
    }

    if(i==0 || sueldo<sueldoMenor){
        sueldoMenor=sueldo;
    }

    acuSueldo+=sueldo;

    if(sueldo>50000){
        cantSueldo++;
    }


}
sueldoPromedio=(float)acuSueldo/5;
cout<<"Sueldo mayor: "<<sueldoMayor<<endl;
cout<<"Sueldo menor: "<<sueldoMenor<<endl;
cout<<"Sueldo Promedio: "<<sueldoPromedio<<endl;
cout<<"Cantidad de sueldo mayor a 50000: "<<cantSueldo;

cout<<endl;
system("pause");
return 0;
}
