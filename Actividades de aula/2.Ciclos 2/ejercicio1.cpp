#include <iostream>
#include <cstdlib>
using namespace std;


int main(){

int numero;
int digito;


cout << "Ingrese un numero: ";
cin >> numero;

while (numero != 0)	{
		digito = numero   % 10;
        cout<<digito<<endl;
		numero = numero / 10;
	}

cout<<endl;
system("pause");
return 0;
}
