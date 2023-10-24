#include <iostream>
#include <locale>

using namespace std;

int cantidadPrimo(int vecNum[], int tam);
int main(){
setlocale(LC_ALL, "");

const int TAM=10;
int vecNum[TAM]={1,2,3,4,5,6,7,8,9,10};
int contador;

contador=cantidadPrimo(vecNum,TAM);
cout<<contador;

cout<<endl;
system("pause");
return 0;
}
int cantidadPrimo(int vecNum[], int tam){
    int cantNumPrimo=0;
    for(int i = 0; i < tam; i++){
    int numPrimo=0;
        for(int j = 1; j <= vecNum[i]; j++){
            if(vecNum[i]%j==0){
                numPrimo++;
            }
        }
        if(numPrimo==2){
           cantNumPrimo++;
        }
    }
    return cantNumPrimo;
}
