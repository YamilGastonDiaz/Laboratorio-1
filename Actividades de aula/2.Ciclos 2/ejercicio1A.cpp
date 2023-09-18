#include <iostream>
#include <cstdlib>
using namespace std;


int main(){

int numero;
int digito;
int par=0, cantDigitos=0;


cout << "Ingrese un numero: ";
cin >> numero;

while (numero != 0)	{
		digito = numero   % 10;
        cantDigitos++;
        if(digito%2==0){
            par++;
        }

		numero = numero / 10;
}
if(par==cantDigitos){
    cout<<"Todos los digitos son pares"<<endl;
}else{
    cout<<"No todos los digitos son pares"<<endl;
}


cout<<endl;
system("pause");
return 0;
}
