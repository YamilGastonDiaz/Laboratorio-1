#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int num;
int ultimoNum=999;
int numNegativo3, numDivisiblex3;
int contNegativo=0;
bool numIguales=false;
bool tercerNumNegativo=false;
bool numDivisiblex3no4=false;

while(numIguales==false){
    cout<<"ingrese un numero: ";
    cin>>num;

    if(num == ultimoNum){
        numIguales=true;
    }else{
        ultimoNum=num;
    }

    if(num<0){
        contNegativo++;
    }

    if(contNegativo==3 && tercerNumNegativo==false){
        numNegativo3=num;
        tercerNumNegativo=true;
    }

    if(num%3==0 && num%4!=0 && numDivisiblex3no4==false){
        numDivisiblex3=num;
        numDivisiblex3no4=true;
    }


}
if(tercerNumNegativo){
    cout<<"El tercer numero negativo es: "<<numNegativo3<<endl;
}else{
    cout<<"No se ingresaron numeros negativos"<<endl;
}
cout<<"El primer numero divisible por 3 pero no por 4: "<<numDivisiblex3;


cout<<endl;
system("pause");
return 0;
}
