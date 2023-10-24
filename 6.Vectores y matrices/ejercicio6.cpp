#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
const int NUM=10;
int vecNum[NUM];
int mayor=0;
int posicion=0;
int num, i;

for(int i = 0; i < 10; i++){
	cout<<"Ingrese un numero: ";
	cin>>num;

	vecNum[i]=num;

	if(vecNum[i]>mayor){
        mayor=vecNum[i];
        posicion = i;
    }
}

for(i = posicion; i < 10; i++){
    vecNum[i] = vecNum[i + 1];
}

for(i = 0; i < 9; i++){
	cout << vecNum[i] << endl;
}

cout<<endl;
system("pause");
return 0;
}
