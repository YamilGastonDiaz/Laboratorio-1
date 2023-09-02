#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int num, contadorPar=1, negativo=0, contadorTerna=0;

cout<<"ingrese un numero: ";
cin>>num;

while (contadorPar != 5){
        if(num%2 == 0){
            contadorPar++;
        }

        if(num < 0){
            negativo++;
            if(negativo == 3){
                contadorTerna++;
            }
        }else{
            negativo=0;
        }

cout<<"ingrese un numero: ";
cin>>num;
}
cout<<"cantidad de ternas negativas: "<<contadorTerna;

cout<<endl;
system("pause");
return 0;
}
