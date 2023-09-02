#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int num, diferencia=0, maximo=0, minimo=0, cantidadNum=1;
bool bandera=0;
cout<<"ingrese un numero: ";
cin>>num;

diferencia=0;
while (diferencia < 10){
        if(bandera==0){
            maximo=num;
            minimo=num;
            bandera=1;
        }else{
            if (num > maximo){
            maximo=num;
        }else{
            if(num < minimo){
                minimo=num;
            }
        }
        }

        diferencia=maximo-minimo;

        if (diferencia < 10){
             cout<<"ingrese un numero: ";
             cin>>num;
             cantidadNum++;
        }

}
cout<<"cantidad de numero: "<<cantidadNum;

cout<<endl;
system("pause");
return 0;
}
