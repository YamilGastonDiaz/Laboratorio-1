#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int num1, num2, num3, num4;

cout<<"Ingrese el primer numero: ";
cin>>num1;
cout<<"Ingrese el segundo numero: ";
cin>>num2;
cout<<"Ingrese el tercer numero: ";
cin>>num3;
cout<<"Ingrese el cuarto numero: ";
cin>>num4;

if((num1<num2 && num1<num3 && num1<num4)&&
   (num2>num1 && num2<= num3 && num2<num4)&&
   (num3>num1 && num3>=num2 && num3<num4)){
    cout<<"Conjunto Ordenado";
}else{
    cout<<"Conjunto Desordenado";
}


cout<<endl;
system("pause");
return 0;
}
