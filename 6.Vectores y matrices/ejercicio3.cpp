#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
const int TAM=15;
int vecNum[TAM]={};
int i, num, menor, contMenor=0;

for(i = 0; i < TAM; i++){
    cout<<"Ingrese un numero: ";
    cin>>num;

    vecNum[i]=num;

}

menor=vecNum[0];
for(i = 0; i < TAM; i++){
    if(vecNum[i]<menor){
        menor=vecNum[i];
    }
}

for(i = 0; i < TAM; i++){
    if(vecNum[i]==menor){
        contMenor++;
    }
}
cout<<"el numero menor es: "<<menor<<endl;
cout<<"cantidad de numeros iguales al menor: "<<contMenor;

cout<<endl;
system("pause");
return 0;
}
