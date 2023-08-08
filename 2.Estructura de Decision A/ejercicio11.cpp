#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int num1, num2, num3, num4, num5, contPositivo=0;

cout<<"ingrese el primer numero: ";
cin>>num1;
cout<<"ingrese el segundo numero: ";
cin>>num2;
cout<<"ingrese el tercer numero: ";
cin>>num3;
cout<<"ingrese el cuarto numero: ";
cin>>num4;
cout<<"ingrese el quinto numero: ";
cin>>num5;

if(num1>0){
    contPositivo++;
}
if(num2>0){
    contPositivo++;
}
if(num3>0){
    contPositivo++;
}
if(num4>0){
    contPositivo++;
}
if(num5>0){
    contPositivo++;
}
cout<<"Los numeros positivos: "<<contPositivo;

cout<<endl;
system("pause");
return 0;
}
