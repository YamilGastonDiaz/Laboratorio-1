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
int interseccion=0;
int vecInterseccion[13]={};

cout<<"Vector uno: "<<endl;
for(i = 0; i < CINCO; i++){
    cout<<"Ingrese un numero: ";
    cin>>num1;
    vecUno[i]=num1;
}
cout<<"Vector dos: "<<endl;
for(i = 0; i < DIEZ; i++){
    cout<<"Ingrese un numero: ";
    cin>>num2;
    vecDos[i]=num2;
}

for(i = 0; i < CINCO; i++){
    for(j = 0; j < DIEZ; j++){
        if(vecUno[i]==vecDos[j]){
            vecInterseccion[interseccion]=vecUno[i];
            interseccion++;
        }
    }
}
cout<<"VECTOR INTERSECCION: "<<endl;
for(i = 0; i < interseccion; i++){
    cout<<vecInterseccion[i]<<"\t";
}

cout<<endl;
system("pause");
return 0;
}
