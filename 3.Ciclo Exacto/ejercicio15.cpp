#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int i, num, contDivisores;
contDivisores=0;

cout<<"Ingresar un num: ";
cin>>num;

for(i = 1; i <= num; i++){
    if(num%i==0){
        contDivisores++;
    }
}
if(contDivisores==2){
    cout<<"Es primo";
}else{
    cout<<"No es primo";
}

cout<<endl;
system("pause");
return 0;
}
