#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int num1, num2, num3;

cout<<"Ingrese el primer numero: ";
cin>>num1;
cout<<"Ingrese el segundo numero: ";
cin>>num2;
cout<<"Ingrese el tercer numero: ";
cin>>num3;

if(num1!=num2 && num2!=num3 && num1!=num3){
    cout<<"Triangulo Escaleno.";
}else{
    if(num1==num2 && num2==num3){
        cout<<"Triangulo Equilatero.";
    }else{
        cout<<"Triangulo Isosceles.";
    }
}



cout<<endl;
system("pause");
return 0;
}
