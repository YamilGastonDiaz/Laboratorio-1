#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int num, numMaximo, posicion=1, posicionMax;

cout<<"Ingrese un numero: ";
cin>>num;

numMaximo=num;
posicionMax=posicion;

while(num!=0){

    if(num>numMaximo){
        numMaximo=num;
        posicionMax=posicion;
    }

    posicion++;

    cout<<"Ingrese un numero: ";
    cin>>num;

}
cout<<"Numero maximo: "<<numMaximo<<" posicion: "<<posicionMax;

cout<<endl;
system("pause");
return 0;
}
