#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
const int tam=5;
int i, num, maxNegativo, minPositivo;
bool positivo, negativo;

positivo=0;
negativo=0;

for(i = 0; i < tam; i++){
    cout<<"Ingrese un num: ";
    cin>>num;

    if(num>0){
            if(positivo==0){
                minPositivo=num;
                positivo=1;
            }else{
                if(num<minPositivo){
                    minPositivo=num;
                }
            }
        }else{
            if(negativo==0){
                maxNegativo=num;
                negativo=1;
            }else{
                if(num>maxNegativo){
                    maxNegativo=num;
                }
            }
        }
}
cout<<"Maximo negativo: "<<maxNegativo<<endl;
cout<<"Minimo positivo: "<<minPositivo;

cout<<endl;
system("pause");
return 0;
}
