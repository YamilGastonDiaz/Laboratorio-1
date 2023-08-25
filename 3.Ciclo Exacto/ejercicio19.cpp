#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
const int tam=5;
int i, j, num, numPar, numPrimo, cantNumPrimo;
bool banderaPar=0, banderaPrimo=0;

for(i = 0; i < tam; i++){
    cout<<"Ingresar un numero: ";
    cin>>num;
    cantNumPrimo=0;

    if(num%2==0 && banderaPar==0){
        numPar=num;
        banderaPar=1;
    }

    for(j = 1; j <= num; j++){
        if(num%j==0){
          cantNumPrimo++;
        }
    }
    if(cantNumPrimo==2 && banderaPrimo==0){
        numPrimo=num;
        banderaPrimo=1;
    }
}
cout<<"Primer numero Par: "<<numPar<<endl;
cout<<"Primer numero Primo: "<<numPrimo;

cout<<endl;
system("pause");
return 0;
}
