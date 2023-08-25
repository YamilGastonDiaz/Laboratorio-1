#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int i, num;

cout<<"Ingrese un numero: ";
cin>>num;

for(i = 1; i <= num; i++){
    if(num%i==0){
        cout<<i<<endl;
    }
}

cout<<endl;
system("pause");
return 0;
}
