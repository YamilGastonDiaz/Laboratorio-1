#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int minutos, hora, minTotal;

cout<<"ingresar la cantidad de minutos: ";
cin>>minutos;

hora=minutos/60;
minTotal=minutos%60;

cout<<"Horas: "<<hora<<endl;
cout<<"Minutos: "<<minTotal;

cout<<endl;
system("pause");
return 0;
}
