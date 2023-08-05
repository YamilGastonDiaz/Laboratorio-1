#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int num1, num2, vAuxiliar;

cout<<"Ingrese primer numero: ";
cin>>num1;
cout<<"ingrese segundo numero: ";
cin>>num2;

vAuxiliar=num1;
num1=num2;
num2=vAuxiliar;

cout<<"numero 1: "<<num1<<endl;;
cout<<"numero 2: "<<num2;

cout<<endl;
system("pause");
return 0;
}
