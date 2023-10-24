#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
const int CINCO=5;
const int DIEZ=10;
int num1, num2;
int vecUno[CINCO]={};
int vecDos[DIEZ]={};
int i, j, u;

//punto A
int const UNION=15;
int vecUnion[UNION]={};

cout<<"VECTOR UNO: "<<endl;
for(i = 0; i < CINCO; i++){
    cout<<"Ingrese un numero: ";
    cin>>num1;
    vecUno[i]=num1;
}
cout<<"VECTOR DOS: "<<endl;
for(i = 0; i < DIEZ; i++){
    cout<<"Ingrese un numero: ";
    cin>>num2;
    vecDos[i]=num2;
}

for(i = 0; i < CINCO; i++){
    vecUnion[i]=vecUno[i];

}
for(j = 0; j < DIEZ; j++){
    vecUnion[i++]=vecDos[j];
}
cout<<"VECTOR UNION: "<<endl;
for(u = 0; u < UNION; u++){
    cout<<vecUnion[u]<<"\t";
}


cout<<endl;
system("pause");
return 0;
}
