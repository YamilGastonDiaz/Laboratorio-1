#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int num, divisible, anteUltimoImpar=0, ultimoImpar=0;

cout<<"Ingresa un numero: ";
cin>>num;

divisible=1;

while(divisible!=0){

    if(num%2!=0){
        anteUltimoImpar=ultimoImpar;
        ultimoImpar=num;
    }

    divisible=num%7;

    if(divisible!=0){
        cout<<"Ingresa un numero: ";
        cin>>num;
    }
}
if(ultimoImpar!=0 && anteUltimoImpar!=0){
    cout<<"Anteultimo impar: "<<anteUltimoImpar<<endl;
    cout<<"Ultimo impar: "<<ultimoImpar;
}else{
    cout<<"No se ingresaron numeros impares";
}


cout<<endl;
system("pause");
return 0;
}
