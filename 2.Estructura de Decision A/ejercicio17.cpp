#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int consumo, pago, resta;

cout<<"Ingrese el consumo de su servicio: ";
cin>>consumo;

if(consumo<=100){
    pago=consumo*10;
}else{
    if(consumo>100 && consumo<=200){
        resta=consumo-100;
        pago=100*10+resta*12;
    }else{
        resta=consumo-200;
        pago=100*10+100*12+resta*15;
    }
}
cout<<"Total a pagar: "<<pago;


cout<<endl;
system("pause");
return 0;
}
