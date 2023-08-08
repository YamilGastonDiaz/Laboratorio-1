#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int num1, num2, num3, mayor;

cout<<"Ingrese el primer numero: ";
cin>>num1;
cout<<"Ingrese el segundo numero: ";
cin>>num2;
cout<<"Ingrese el tercer numero: ";
cin>>num3;

if(num1>num2){
    mayor=num1;
}else{
    mayor=num2;
}
if(num3>mayor){
    mayor=num3;
}
cout<<"El maximo de ellos: "<<mayor;

cout<<endl;
system("pause");
return 0;
}
