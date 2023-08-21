#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
const int tam=10;
int i, legajo, sueldoMayor, legajoMayor;
float sueldo;

for(i = 0; i < tam; i++){
    cout<<"Ingrese el sueldo: ";
    cin>>sueldo;
    cout<<"Ingrese el legajo: ";
    cin>>legajo;

    if(i==0 || sueldo>sueldoMayor){
        sueldoMayor=sueldo;
        legajoMayor=legajo;
    }

}
cout<<"El legajo del empleado con mayor sueldo: "<<legajoMayor<<endl;


cout<<endl;
system("pause");
return 0;
}
