#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
const int tam=5;
int i, num, auxPri, auxSeg;
bool bandera=0;


for(i = 0; i < tam; i++){
    cout<<"Ingrese un numero: ";
    cin>>num;

    if(i==0){
        auxPri=num;
    }else{
        if(num>auxPri){
            auxSeg=auxPri;
            auxPri=num;
            bandera=1;
        }else{
            if(bandera==0){
                auxSeg=num;
                bandera=1;
            }else{
                if(num>auxSeg){
                   auxSeg=num;
                }
            }
        }
    }


}
cout<<"Primer mayor: "<<auxPri<<endl;
cout<<"Segundo mayor: "<<auxSeg;


cout<<endl;
system("pause");
return 0;
}
