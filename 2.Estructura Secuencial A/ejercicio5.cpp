#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int alfajorA, alfajorB, alfajorC, totalAlfajores;
float porcentajeA, porcentajeB, porcentajeC;

cout<<"Ingrese la cantidad de alfajores vendidos maraca A: ";
cin>>alfajorA;
cout<<"Ingrese la cantidad de alfajores vendidos maraca B: ";
cin>>alfajorB;
cout<<"Ingrese la cantidad de alfajores vendidos maraca C: ";
cin>>alfajorC;

totalAlfajores=alfajorA+alfajorB+alfajorC;

porcentajeA=(float)alfajorA*100/totalAlfajores;
porcentajeB=(float)alfajorB*100/totalAlfajores;
porcentajeC=(float)alfajorC*100/totalAlfajores;

cout<<endl;
cout<<"Porcentaje Alfajor A: "<<porcentajeA<<endl;
cout<<"Porcentaje Alfajor B: "<<porcentajeB<<endl;
cout<<"Porcentaje Alfajor C: "<<porcentajeC;


cout<<endl;
system("pause");
return 0;
}
