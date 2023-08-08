#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int minutos, dia, restoDia, hora, minTotal;

cout<<"ingresar una cantidad de minutos: ";
cin>>minutos;

dia=minutos/1440;
restoDia=minutos%1440;
hora=restoDia/60;
minTotal=restoDia%60;

cout<<"Dias: "<<dia<<endl;
cout<<"Horas: "<<hora<<endl;
cout<<"Minutos: "<<minTotal;

cout<<endl;
system("pause");
return 0;
}
