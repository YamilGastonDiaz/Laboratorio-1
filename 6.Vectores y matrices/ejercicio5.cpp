#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
const int TAM=100;
int vecPositivo[TAM]={};
int vecNegativo[TAM]={};
int contPositivo=0, contNegativo=0;
int i, num;

for(i = 0; i < TAM; i++){
    cout<<"Ingrese un numero: ";
    cin>>num;

    if(num>0){
        vecPositivo[i]=num;
        contPositivo++;
    }
    if(num<0){
        vecNegativo[i]=num;
        contNegativo++;
    }
}
cout<<"Cantidad de numero posivos: "<<contPositivo<<endl;
cout<<"Cantidad de numero negativos: "<<contNegativo<<endl;

cout<<"numeros positivos: "<<endl;
for(i = 0; i < TAM; i++){
    if(vecPositivo[i]>0){
        cout<<vecPositivo[i]<<"\t";
    }
}
cout<<endl;
cout<<"numero negativo: "<<endl;
for(i = 0; i < TAM; i++){
    if(vecNegativo[i]<0){
        cout<<vecNegativo[i]<<"\t";
    }
}

cout<<endl;
system("pause");
return 0;
}
