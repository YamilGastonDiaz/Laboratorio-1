#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int i, j, numPrimos;

for(i = 1; i < 1000; i++){
    numPrimos=0;
    for(j = 1; j <= i; j++){
        if(i%j==0){
            numPrimos++;
        }
    }
    if(numPrimos==2){
        cout<<i<<endl;
    }
}


cout<<endl;
system("pause");
return 0;
}
