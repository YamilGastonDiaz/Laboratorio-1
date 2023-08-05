#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
const int sueldoFijo=15000;
const int premio=2000;
int autos, sueldoTotal;


cout<<"Ingrese la cantidad de autos: ";
cin>>autos;

sueldoTotal=(autos*premio)+sueldoFijo;

cout<<"Sueldo total: "<<sueldoTotal;


cout<<endl;
system("pause");
return 0;
}
