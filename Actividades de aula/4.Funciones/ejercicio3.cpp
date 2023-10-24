#include <iostream>
#include <locale>

using namespace std;

bool esPrimo(int num);
bool esPrimoDeSG(int num);
int main(){
setlocale(LC_ALL, "");

int num;

cout << "Ingrese un número: ";
cin >> num;

if(esPrimoDeSG(num)){
    cout << "El número " << num << " es primo de Sophie Germain" << endl;
}else{
    cout << "El número " << num << " NO es primo de Sophie Germain" << endl;
}


cout<<endl;
system("pause");
return 0;
}
bool esPrimo(int num){
    if(num < 2){
        return false;
    }
    int contDiv = 2;
    int i;
    for(i=2; i<num; i++){
        if(num % i == 0){
            contDiv++;
        }
    }
    if(contDiv == 2){
        return true;
    }else{
        return false;
    }
}

bool esPrimoDeSG(int num){
    if(esPrimo(num) && esPrimo(num*2+1)){
        return true;
    }
    return false;
}
