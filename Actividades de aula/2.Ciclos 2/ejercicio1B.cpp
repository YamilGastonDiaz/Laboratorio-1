#include <iostream>
#include <cstdlib>
using namespace std;


int main(){

int numero, aux;
int digito;
int potencia;
int narciso=0;

cout << "Ingrese un numero: ";
cin >> numero;
aux=numero;

while (numero != 0)	{
		digito = numero   % 10;
		numero = numero / 10;

        potencia=digito*digito*digito;

        narciso+=potencia;
}
if(aux==narciso){
    cout<<"Numero Narcisista"<<endl;
}

cout<<endl;
system("pause");
return 0;
}
