#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
float num1, num2, diferenciaAbs;

cout<<"Ingrese el primer numero: ";
cin>>num1;
cout<<"Ingrese el segundo numero: ";
cin>>num2;

if(num1>num2){
    diferenciaAbs=num1-num2;
}else{
    diferenciaAbs=num2-num1;
}
cout<<"La diferencia absoluta es: "<<diferenciaAbs;

cout<<endl;
system("pause");
return 0;
}
