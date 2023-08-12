#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int numA, numB, numC, medio;

cout<<"Ingrese el primer numero: ";
cin>>numA;
cout<<"Ingrese el segundo numero: ";
cin>>numB;
cout<<"Ingrese el tercer numero: ";
cin>>numC;

if(numA>numB && numA<numC){
    medio=numA;
}
if(numA<numB && numA>numC){
    medio=numA;
}
if(numB>numA && numB<numC){
    medio=numB;
}
if(numB<numA && numB>numC){
    medio=numB;
}
if(numC>numA && numC<numB){
    medio=numC;
}
if(numC<numA && numC>numB){
    medio=numC;
}
cout<<"EL numero del medio: "<<medio;


cout<<endl;
system("pause");
return 0;
}
