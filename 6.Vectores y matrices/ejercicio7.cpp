#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
const int TAM=10;
int vecNum[TAM]={};
int i, j, num, nuevoNum, posicion;

for(i = 0; i < TAM-1; i++){
    cout<<"Ingrese los numero de menor a mayor: ";
    cin>>num;

    vecNum[i]=num;
}
cout<<"Ingresar un nuevo numero: ";
cin>>nuevoNum;

for(i = 0; i < TAM-1; i++){
    if(vecNum[i]<=nuevoNum){
        posicion=i+1;
    }
}
cout<<posicion<<endl;
for(j = TAM; j >= posicion; j--){
    vecNum[j]=vecNum[j-1];
}

vecNum[posicion]=nuevoNum;

for(i = 0; i < TAM; i++){
    cout<<vecNum[i];
}

cout<<endl;
system("pause");
return 0;
}
