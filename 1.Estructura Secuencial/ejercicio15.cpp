#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int amplitudTermica, temperaturaMax, temperaturaMin;

cout<<"Ingresar temperatura maxima: ";
cin>>temperaturaMax;
cout<<"Ingresar temperatura minima: ";
cin>>temperaturaMin;

amplitudTermica=temperaturaMax-temperaturaMin;

cout<<endl;
cout<<"Amplitud termica: "<<amplitudTermica;

cout<<endl;
system("pause");
return 0;
}
