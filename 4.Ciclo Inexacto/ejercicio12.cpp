#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int num=1, posicion=1;
//punto A
int numSimonirico;

while (num <= 100000){
         num++;

        if((num%15 == 0 && num%3 == 0 )&& num%6!=0){
             cout<<"posicion "<<posicion<<":"<<num<<endl;
             posicion++;
        }

}

//el 520º número Simonírico 15585 (ejercicio 13)



cout<<endl;
system("pause");
return 0;
}
