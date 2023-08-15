#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int i, lista, num, positivos=0;

cout<<"Ingrese un numero que indica la cantidad que componen una lista: ";
cin>>lista;

for(i = 0; i < lista; i++){
    cout<<"Ingrese un numero: ";
    cin>>num;

    if(num>0){
        positivos++;
    }

}
cout<<"La cantidad de numero positivo es: "<<positivos;

cout<<endl;
system("pause");
return 0;
}
