#include <iostream>
#include <locale>

using namespace std;

void Punto1(bool vPuntoA[6]);
void Punto3(int mPuntoC[][2]);

int main(){
setlocale(LC_ALL, "");

const int SO=6;
const int PAIS=66;
const int GENERACION=4;
int nroEncuesta, edad, pais, grado, sistemaO, tiempo;

//PUNTO A
bool vPuntoA[SO]={};

//PUNTO B
int cantEncuestados=0;

//PUNTO C
int mPuntoC[PAIS][2]={};

//PUNTO D
bool mPuntoD[4][SO]={};
string nombre[4]={"Pixel", "Control", "Aventura", "Maestría"};

cout<<"Número de encuesta: ";
cin>>nroEncuesta;

while(nroEncuesta!=0){
    cout<<"Edad: ";
    cin>>edad;
    cout<<"País de residencia: ";
    cin>>pais;
    cout<<"Grado de satisfacción: ";
    cin>>grado;
    cout<<"ID de Sistema operativo utilizado: ";
    cin>>sistemaO;
    cout<<"Tiempo total de juego en minutos: ";
    cin>>tiempo;
    cout<<endl;

    if(edad>60){
        vPuntoA[sistemaO/100-1]=true;
    }

    if(tiempo >= 60 && tiempo<=180){
        cantEncuestados++;
    }

    mPuntoC[pais-50][0]+=grado;
    mPuntoC[pais-50][1]++;

    if(edad>=5 && edad<=15){
        mPuntoD[0][sistemaO/100-1]=true;
    }else if(edad>=16 && edad<=30){
         mPuntoD[1][sistemaO/100-1]=true;
    }else if(edad>=31 && edad<=50){
         mPuntoD[2][sistemaO/100-1]=true;
    }else{
         mPuntoD[3][sistemaO/100-1]=true;
    }


    cout<<"Número de encuesta: ";
    cin>>nroEncuesta;
}
system("cls");
cout<<"PUNTO A: "<<endl;
Punto1(vPuntoA);

cout<<"PUNTO B: "<<endl;
cout<<"La cantidad de encuestados: "<<cantEncuestados<<endl;

cout<<"PUNTO C: "<<endl;
Punto3(mPuntoC);

cout<<"PUNTO D: "<<endl;
for(int i = 0; i < GENERACION; i++){
    if(!mPuntoD[i][4] && mPuntoD[i][0]){
        cout<<nombre[i]<<endl;
    }
}



cout<<endl;
system("pause");
return 0;
}
void Punto1(bool vPuntoA[6]){
    string nombre[6]={"DOS", "Windows", "Linux", "MacOS", "Android", "iOS"};
    for(int i = 0; i < 6; i++){
        if(!vPuntoA[i]){
            cout<<nombre[i]<<endl;
        }
    }
}
void Punto3(int mPuntoC[][2]){
    float promedio;
    int contadorPais=0;
    for(int i = 0; i < 66; i++){
        if(mPuntoC[i][1]>0){
            promedio=(float)mPuntoC[i][0]/mPuntoC[i][1];
            if(promedio>3){
                contadorPais++;
            }
        }
    }
    cout<<"cantidad de países: "<<contadorPais<<endl;
}
