#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int num;

cout<<"Ingresar un numero: ";
cin>>num;

if(num > 0){
    cout<<"El numero es positivo.";
}else{
    if(num < 0){
        cout<<"El numero es negativo.";
    }else{
        cout<<"El numero es cero.";
    }
}



cout<<endl;
system("pause");
return 0;
}
