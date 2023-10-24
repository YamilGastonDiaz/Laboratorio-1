#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
const int TAM=15;
int vecNum[TAM]={};
int i, num, numNuevo;

for(i = 0; i < TAM; i++){
    cout<<"Ingrese un numero: ";
    cin>>num;

    vecNum[i]=num;
}
cout<<"Ingrese un numero nuevamente: ";
cin>>numNuevo;

for(i = 0; i < TAM; i++){
    if(vecNum[i]==numNuevo){
        cout<<"El numero ingresado pertenece a la lista";
}
}

cout<<endl;
system("pause");
return 0;
}
