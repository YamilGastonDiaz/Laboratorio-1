#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int num, auxiliar;
bool bandera=0;

cout<<"Ingrese un nemero: ";
cin>>num;

auxiliar=num;

while(num != 0){

    if(num>=auxiliar){
        auxiliar=num;
    }else{
        bandera=1;
    }

    cout<<"Ingrese un nemero: ";
    cin>>num;
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
