#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int i, num1, num2, mayor, menor;

cout<<"Ingrese el primer numero: ";
cin>>num1;
cout<<"Ingrese el segundo numero: ";
cin>>num2;

if(num1>num2){
    mayor=num1;
    menor=num2;
}else{
    mayor=num2;
    menor=num1;
}

for(i = menor; i <= mayor; i++){
    cout<<i<<endl;
}

cout<<endl;
system("pause");
return 0;
}
