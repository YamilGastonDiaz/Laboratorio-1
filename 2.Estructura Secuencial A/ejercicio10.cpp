#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int hora, dia, horaTotal;

cout<<"ingresar una cantidad de horas: ";
cin>>hora;

dia=hora/24;
horaTotal=hora%24;

cout<<"Dias: "<<dia<<endl;
cout<<"Horas: "<<horaTotal;

cout<<endl;
system("pause");
return 0;
}
