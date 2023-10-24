#include <iostream>
#include <cstdlib> // para trabajar con rand
#include <ctime> // para trabajar con time

using namespace std;

int main(){
int const NUMSORTEO = 100;
const float costoNum= 500;
const float premioUno=30000;
const float premioDos=5000;
bool duplicado;
int i, numero, vVendido[NUMSORTEO];

//sorteo
int numSorteado1;
int numSorteado2;

//punto A
int contNumVendido=0;
float totalRecaudado;

//punto B
float gananciaNeta;
bool ganadorUno=false;
bool ganadorDOs=false;

//punto C
int totalNoVendidos;

for(int i = 0; i < NUMSORTEO; i++){
    vVendido[i] = -99;
}


cout << "Ingrese el numero que desea comprar: ";
cin >> numero;

while (numero != -1){

    duplicado=false;

    for(i = 0; i < NUMSORTEO; i++){
        if(vVendido[i]==numero){
            duplicado=true;
        }
    }

    if (!duplicado){
        vVendido[numero] = numero;
        contNumVendido++;
    }
    else{
        cout << "Este numero ya no esta disponible " << endl;
    }



    cout << "Ingrese el numero que desea comprar: ";
    cin >> numero;
}
cout<<"----------------------"<<endl;

totalRecaudado=contNumVendido*costoNum;
cout<<"Total recaudado en concepto de compra de numeros: "<<totalRecaudado<<endl;

cout<<"----------------------"<<endl;

numSorteado1;
numSorteado2;

srand(time(0));//semilla seed

numSorteado1 = (rand() % 99);
numSorteado2 = (rand() % 99);

//para q no se repitan los numero del sorteo
while (numSorteado1 == numSorteado2){
    numSorteado2 = (rand() % 99);//si le agregas un +1 es para que no te salga el 0

}
cout<<"NUMEROS SORTEADOS: "<<endl;
cout<<"Primer numero sorteado: "<<numSorteado1<<endl;
cout<<"Segundo numero sorteado: "<<numSorteado2<<endl;

cout<<"----------------------"<<endl;

for(i = 0; i < NUMSORTEO; i++){
    if(vVendido[i]==numSorteado1){
        ganadorUno=true;
    }
    if(vVendido[i]==numSorteado2){
        ganadorDOs=true;
    }
}


if(ganadorUno && ganadorDOs){
    gananciaNeta= totalRecaudado-premioUno-premioDos;
}else{
    if(ganadorUno && !ganadorDOs){
        gananciaNeta=totalRecaudado-premioUno;
    }else{
        if(!ganadorUno && ganadorDOs){
            gananciaNeta=totalRecaudado-premioDos;
        }else{
            gananciaNeta=totalRecaudado;
        }
    }
}

if(gananciaNeta <= 0){
    cout<<"Total de dinero perdidio: "<<gananciaNeta<<endl;
}else{
    cout<<"Total de dinero ganado: "<<gananciaNeta<<endl;
}

cout<<"----------------------"<<endl;

totalNoVendidos=NUMSORTEO-contNumVendido;

cout<<"El porcentaje de numeros no vendidos: %"<<totalNoVendidos*100/NUMSORTEO<<endl;

cout<<"----------------------"<<endl;

cout<<"NUMERO GANADOR DEL PRIMER PREMIO: "<<endl;

if(ganadorUno){
    cout<<"El numero "<<numSorteado1<<" fue vendido."<<endl;
}else{
    cout<<"El numero "<<numSorteado1<<" no fue vendido."<<endl;
}
cout<<endl;

cout<<"NUMERO GANADOR DEL SEGUNDO PREMIO: "<<endl;

if(ganadorDOs){
    cout<<"El numero "<<numSorteado2<<" fue vendido."<<endl;
}else{
    cout<<"El numero "<<numSorteado2<<" no fue vendido."<<endl;
}

cout<<endl;
system("pause");
return 0;
}
