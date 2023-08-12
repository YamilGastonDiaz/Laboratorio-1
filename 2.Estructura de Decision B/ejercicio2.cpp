#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int edad1, edad2, edad3, edad4, edad5, cantAlturaM30=0, cantMayor30=0, cantAltura=0, cantEdad=0;
float altura1, altura2, altura3, altura4, altura5, promedio, sumaAltura=0;

cout<<"Ingrese la edad de la persona: ";
cin>>edad1;
cout<<"Ingrese la altura de la persona: ";
cin>>altura1;

if(edad1>30 && altura1>1.8){
    cantAlturaM30+;
}

if(edad1>30){
    cantMayor30++;
    sumaAltura+=altura1;
}

if(altura1>=1.7 && altura1<=1.8){
    cantAltura++;
}

if(edad1==20 || edad1==30 || edad1==40){
    cantEdad++;
}

cout<<"Ingrese la edad de la persona: ";
cin>>edad2;
cout<<"Ingrese la altura de la persona: ";
cin>>altura2;

if(edad2>30 && altura2>1.8){
    cantAlturaM30++;
}

if(edad2>30){
    cantMayor30++;
    sumaAltura+=altura2;
}

if(altura2>=1.7 && altura2<=1.8){
    cantAltura++;
}

if(edad2==20 || edad2==30 || edad2==40){
    cantEdad++;
}

cout<<"Ingrese la edad de la persona: ";
cin>>edad3;
cout<<"Ingrese la altura de la persona: ";
cin>>altura3;

if(edad3>30 && altura3>1.8){
    cantAlturaM30++;
}

if(edad3>30){
    cantMayor30++;
    sumaAltura+=altura3;
}

if(altura3>=1.7 && altura3<=1.8){
    cantAltura++;
}

if(edad3==20 || edad3==30 || edad3==40){
    cantEdad++;
}

cout<<"Ingrese la edad de la persona: ";
cin>>edad4;
cout<<"Ingrese la altura de la persona: ";
cin>>altura4;

if(edad4>30 && altura4>1.8){
    cantAlturaM30++;
}

if(edad4>30){
    cantMayor30++;
    sumaAltura+=altura4;
}

if(altura4>=1.7 && altura4<=1.8){
    cantAltura++;
}

if(edad4==20 || edad4==30 || edad4==40){
    cantEdad++;
}

cout<<"Ingrese la edad de la persona: ";
cin>>edad5;
cout<<"Ingrese la altura de la persona: ";
cin>>altura5;

if(edad5>30 && altura5>1.8){
    cantAlturaM30++;
}

if(edad5>30){
    cantMayor30++;
    sumaAltura+=altura5;
}

if(altura5>=1.7 && altura5<=1.8){
    cantAltura++;
}

if(edad5==20 || edad5==30 || edad5==40){
    cantEdad++;
}

cout<<"La cantidad de personas mayores a 30 años que midan más de 1.8 metros: "<<cantAlturaM30<<endl;
if(cantMayor30>0){
    promedio=(float)sumaAltura/cantMayor30;
}
cout<<"El promedio de altura de las personas mayores a 30 años: "<<promedio<<endl;
cout<<"La cantidad de personas con altura entre 1.7 y 1.8: "<<cantAltura<<endl;
cout<<"La cantidad de personas cuya edad sea de 20, 30 o 40 años: "<<cantEdad;

cout<<endl;
system("pause");
return 0;
}
