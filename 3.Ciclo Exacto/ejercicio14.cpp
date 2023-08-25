#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int i, num, contDivisores;
contDivisores=0;

cout<<"Ingrese un numero: ";
cin>>num;

for(i = 1; i <= num; i++){
    if(num%i==0){
        contDivisores++;
    }
}
cout<<"Cantidad de divisores: "<<contDivisores<<endl;

cout<<endl;
system("pause");
return 0;
}
