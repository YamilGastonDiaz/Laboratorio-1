#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
const int tam=8;
int i, num, auxiliar;
bool bandera=0;

for(size_t i = 0; i < tam; i++){
    cout<<"Ingrese un numero: ";
    cin>>num;

    if(i==0){
        auxiliar=num;
    }else{
        if(num>=auxiliar){
        auxiliar=num;
    }else{
        bandera=1;
    }
    }
}
if(bandera==0){
    cout<<"Conjunto ordenado";
}else{
    cout<<"Conjunto no ordenado";
}




cout<<endl;
system("pause");
return 0;
}
