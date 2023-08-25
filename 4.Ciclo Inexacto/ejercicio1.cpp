#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int num, positivos=0, negativos=0;

cout<<"Ingrese un numero: ";
cin>>num;

while(num!=0){

    if(num>0){
        positivos++;
    }else{
        negativos++;
    }

    cout<<"Ingrese un numero: ";
    cin>>num;
}
cout<<"Positivos: "<<positivos<<endl;
cout<<"Negativos: "<<negativos;

cout<<endl;
system("pause");
return 0;
}
