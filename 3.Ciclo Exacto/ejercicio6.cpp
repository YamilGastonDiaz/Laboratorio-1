#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int i, num, positivos=0, negativos=0, ceros=0;

for(i = 1; i <= 10; i++){
    cout<<"ingrese un numero: ";
    cin>>num;

    if(num>0){
        positivos++;
    }else{
        if(num==0){
            ceros++;
        }else{
            negativos++;
        }
    }

}
cout<<"Positivos: "<<positivos<<endl;
cout<<"Negativos: "<<negativos<<endl;
cout<<"Ceros: "<<ceros;

cout<<endl;
system("pause");
return 0;
}
