#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int dado1, dado2, diferencia;
int puntosAcumulados = 0, puntosRonda=0;

for(int i=1; i<=3; i++){
cout << "Ingrese dado 1:";
cin >> dado1;

cout << "Ingrese dado 2:";
cin >> dado2;

diferencia = dado1 - dado2;

if(diferencia < 0){
    diferencia *= -1;
}

if((dado1 == 1 || dado1 == 6 ) && dado1 == dado2){
    puntosRonda = 10;
}
else if(diferencia == 1 || diferencia == 5){
         puntosAcumulados = 0;
         puntosRonda = 0;
}
else if(diferencia > 1){
         puntosRonda = diferencia;
}
else{
    puntosRonda = 0;
}

puntosAcumulados += puntosRonda;

cout << "Puntaje ronda: " << puntosRonda<< endl;
cout << "Puntaje acumulado: " << puntosAcumulados << endl;
}

cout << "Puntaje acumulado: " << puntosAcumulados << endl;


cout<<endl;
system("pause");
return 0;
}
