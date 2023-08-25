#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int num, numMaximo;

cout<<"Ingrese un numero: ";
cin>>num;

numMaximo=num;

while(num!=0){

    if(num>numMaximo){
        numMaximo=num;
    }


    cout<<"Ingrese un numero: ";
    cin>>num;
}
cout<<"Numero maximo: "<<numMaximo;

cout<<endl;
system("pause");
return 0;
}
