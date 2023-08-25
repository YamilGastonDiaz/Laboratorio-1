#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int num, parMaximo;

parMaximo=0;

cout<<"Ingrese un numero: ";
cin>>num;

while(num!=0){

    if(num>parMaximo && num%2==0){
        parMaximo=num;
    }

    cout<<"Ingrese un numero: ";
    cin>>num;
}
cout<<"Maximo de los pares: "<<parMaximo;

cout<<endl;
system("pause");
return 0;
}
