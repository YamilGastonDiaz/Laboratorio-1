#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int diaActual, mesActual, anioActual;
int diaNacimiento, mesNacimiento, anioNacimiento;
int edad;

cout<<"Dia Nacimiento: ";
cin>>diaNacimiento;
cout<<"Mes Nacimiento: ";
cin>>mesNacimiento;
cout<<"Anio Nacimiento: ";
cin>>anioNacimiento;
cout<<"------------------"<<endl;
cout<<"Dia Actual: ";
cin>>diaActual;
cout<<"Mes Actual: ";
cin>>mesActual;
cout<<"Anio Actual: ";
cin>>anioActual;

edad=anioActual-anioNacimiento;
if(mesActual<mesNacimiento){
    edad=edad-1;
}else{
    if(diaActual<diaNacimiento && mesActual==mesNacimiento){
        edad=edad-1;
    }else{
        edad=edad-1;
    }
}
cout<<"Edad: "<<edad;


cout<<endl;
system("pause");
return 0;
}
