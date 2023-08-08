#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
char letra;
int diferencia;

cout<<"Ingresar una letra en mayusculas: ";
cin>>letra;

diferencia=letra-65;

cout<<endl;
cout<<diferencia<<" letras de diferencias.";

cout<<endl;
system("pause");
return 0;
}
