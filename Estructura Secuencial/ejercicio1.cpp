#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int hora;
float valorHora, sueldo;

cout<<"Ingrese las horas tabajadas: ";
cin>>hora;
cout<<"Ingrese el valor de las horas trabajadas: ";
cin>>valorHora;

sueldo=hora*valorHora;

cout<<"Sueldo a cobrar: "<<sueldo;



cout<<endl;
system("pause");
return 0;
}
