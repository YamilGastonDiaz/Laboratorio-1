#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int asistentes;
int aulas_necesarias = 0;

cout << "Ingrese la cantidad de asistentes: ";
cin>>asistentes;

while(asistentes>0){
    asistentes -= 60;
    aulas_necesarias++;
}

cout << "Se necesitaran: "<<aulas_necesarias;

cout<<endl;
system("pause");
return 0;
}
