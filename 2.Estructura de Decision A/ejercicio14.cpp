#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int anio;

cout<<"Ingrese el anio: ";
cin>>anio;

if((anio%4==0 && anio%100!=0)|| anio%400==0){
    cout<<"Bisiesto.";
}else{
    cout<<"No Bisiesto.";
}

cout<<endl;
system("pause");
return 0;
}
