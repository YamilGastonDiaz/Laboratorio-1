#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
const int TAM=10;
int vecNum[TAM]={};
int i, num;
int contPositivi=0;

for(i = 0; i < TAM; i++){
    cout<<"Ingrese un numero: ";
    cin>>num;

    vecNum[i]=num;

    if(vecNum[i]>0){
        contPositivi++;
    }
}
cout<<"Cantida de numero positivos: "<<contPositivi<<endl;

cout<<endl;
system("pause");
return 0;
}
