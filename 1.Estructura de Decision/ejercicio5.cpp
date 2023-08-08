#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
float importe, descuento;

cout<<"iIgrese el importe de la venta: ";
cin>>importe;

if(importe>500){
    descuento=importe*0.85;
}else{
    if(importe>=100 && importe<=500 ){
        descuento=importe*0.9;
    }else{
        descuento=importe*0.95;
    }
}
cout<<"El importe con el descuento ya aplicado: "<<descuento;

cout<<endl;
system("pause");
return 0;
}
