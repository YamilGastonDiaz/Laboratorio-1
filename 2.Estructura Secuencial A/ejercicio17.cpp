#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
const int pildoras=75;
int frascos, totalB, totalP, totalA;
const int briancetamol=45;
const int pintoxicilina=2000;
const int acidoSimonitico=7;

cout<<"Ingrese la cantidad de frascos: ";
cin>>frascos;

totalB=pildoras*briancetamol*frascos;
totalP=pildoras*pintoxicilina*frascos;
totalA=pildoras*acidoSimonitico*frascos;

cout<<endl;
cout<<"Miligramos de Briancetamol: "<<totalB<<endl;
cout<<"Miligramos de Pintoxicilina: "<<totalP<<endl;
cout<<"Miligramo Acido Simonítico: "<<totalA;

cout<<endl;
system("pause");
return 0;
}
