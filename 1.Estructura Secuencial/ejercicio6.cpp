#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
float recaudacion1, recaudacion2, recaudacion3, recaudacion4, totalRecaudacion;
float promedio, porcentaje1, porcentaje2, porcentaje3, porcentaje4;

cout<<"Ingrese recaudacion en pesos semana 1: ";
cin>>recaudacion1;
cout<<"Ingrese recaudacion en pesos semana 2: ";
cin>>recaudacion2;
cout<<"Ingrese recaudacion en pesos semana 3: ";
cin>>recaudacion3;
cout<<"Ingrese recaudacion en pesos semana 4: ";
cin>>recaudacion4;

totalRecaudacion=recaudacion1+recaudacion2+recaudacion3+recaudacion4;

if(totalRecaudacion>0){
    promedio=totalRecaudacion/4;
    cout<<"Recaudacion promedio: "<<promedio<<endl;
}
if(recaudacion1>0){
porcentaje1=recaudacion1*100/totalRecaudacion;
cout<<"El porcentaje de recaudación de la semana 1: "<<porcentaje1<<endl;
}
if(recaudacion2>0){
porcentaje2=recaudacion2*100/totalRecaudacion;
cout<<"El porcentaje de recaudación de la semana 2: "<<porcentaje2<<endl;
}
if(recaudacion3>0){
porcentaje3=recaudacion3*100/totalRecaudacion;
cout<<"El porcentaje de recaudación de la semana 3: "<<porcentaje3<<endl;
}
if(recaudacion4>0){
porcentaje4=recaudacion4*100/totalRecaudacion;
cout<<"El porcentaje de recaudación de la semana 4: "<<porcentaje4;
}


cout<<endl;
system("pause");
return 0;
}
