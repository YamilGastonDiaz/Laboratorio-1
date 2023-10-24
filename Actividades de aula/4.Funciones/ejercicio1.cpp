#include <iostream>
#include <cstdlib>
using namespace std;

bool numPrimo(int num);

int main(){
int num=13;

if(numPrimo(num)){
    cout<<"TRUE";
}else{
    cout<<"FALSE";
}


cout<<endl;
system("pause");
return 0;
}

bool numPrimo(int num){
    int contPrimo=0;
    for(int i = 1; i <= num; i++){
        if(num%i==0){
            contPrimo++;
        }
    }
    if(contPrimo==2){
        return true;
    }else{
        return false;
    }
}
