#include <iostream>
#include <cstdlib>
using namespace std;


int main(){

int n, i, minDiv = 0, maxDiv = 0;

cout << "Ingrese un n�mero: ";
cin >> n;

for(i = 2; i < n; i++){
    if(n % i == 0){
      if(minDiv == 0){
        minDiv = i;
      }
      maxDiv = i;
}
}

if(minDiv == 0){
    cout << "El n�mero " << n << " es primo" << endl;
}
else{
    cout << "M�nimo divisor: " << minDiv << endl;
    cout << "M�ximo divisor: " << maxDiv << endl;
}

cout<<endl;
system("pause");
return 0;
}
