#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
const int tam=7;
int i, num, primerImpar, segundoImpar;
bool primerBandera, segundaBandera;

primerBandera=0;
segundaBandera=0;

for(i = 0; i < tam; i++){
    cout<<"Ingrese un numero: ";
    cin>>num;

    if(num%2 != 0){
        if(primerBandera==0){
            primerImpar=num;
            primerBandera=1;
        }else{
            if(segundaBandera==0){
                segundoImpar=num;
                segundaBandera=1;
            }
        }
    }

}
cout<<"Primer impar: "<<primerImpar<<endl;
cout<<"Segundo impar: "<<segundoImpar;

cout<<endl;
system("pause");
return 0;
}
