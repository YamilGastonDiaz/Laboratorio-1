#include <iostream>
#include <locale>

using namespace std;

bool EsToxico(int tipoArbol);
void Punto4(int vPuntoD[21]);

int main(){
setlocale(LC_ALL, "");

const int ZONA=21;
const int ARBOL=10;
int numArbol, tipoArbol, zona, estadoArbol;
float altura;

//punto A
int vPuntoAo[ZONA]={};
int vPuntoAp[ZONA]={};

//Punto B
int vPuntoB[ZONA]={};

//Punto C
bool mPuntoC[ARBOL][ZONA]={};
string nombreA[10]={"Arce de Azúcar", "Pino", "Roble", "Abedul", "Almendro", "Nogal", "Cerezo", "Manzano", "Eucalipto", "Árbol del Caqui"};

//Punto D
int vPuntoD[ZONA]={};

cout<<"Número de árbol: ";
cin>>numArbol;

while(numArbol != 0){
    cout<<"Altura: ";
    cin>>altura;
    cout<<"Tipo de árbol: ";
    cin>>tipoArbol;
    cout<<"Número de zona: ";
    cin>>zona;
    cout<<"Estado del árbol: ";
    cin>>estadoArbol;
    cout<<endl;

    if(estadoArbol==5){
        vPuntoAo[zona-100]++;
    }else if(estadoArbol==1){
        vPuntoAp[zona-100]++;
    }

    if(EsToxico(tipoArbol) && altura > 2.5){
        vPuntoB[zona-100]++;
    }

    mPuntoC[tipoArbol-11][zona-100]=true;

    if(!EsToxico(tipoArbol)){
        vPuntoD[zona-100]=true;
    }






    cout<<"Número de árbol: ";
    cin>>numArbol;
}
cout<<"PUNTO A: "<<endl;
for(int i = 0; i < ZONA; i++){
    if(vPuntoAo[i]>vPuntoAp[i]){
        cout<<"Zona: "<<i+100<<endl;
    }
}
cout<<"PUNTO B: "<<endl;
for(int i = 0; i < ZONA; i++){
    cout<<i+100<<": "<<vPuntoB[i]<<endl;
}
cout<<"PUNTO C: "<<endl;
for(int f = 0; f < ARBOL; f++){
        cout<<nombreA[f]<<endl;
    for(int c = 0; c < ZONA; c++){
        if(mPuntoC[f][c]){
            cout<<"Zona: "<<c+100<<endl;
        }
    }
    cout<<endl;
}
cout<<"PUNTO D: "<<endl;
Punto4(vPuntoD);

cout<<endl;
system("pause");
return 0;
}
bool EsToxico(int tipoArbol){
    if(tipoArbol==12 || tipoArbol==15 || tipoArbol== 17 || tipoArbol==18 || tipoArbol==19){
        return true;
    }else{
        return false;
    }
}

void Punto4(int vPuntoD[21]){
    int contador=0;
    for(int i = 0; i < 21; i++){
        if(vPuntoD[i]){
            contador++;
        }
    }
    cout<<"cantidad de zonas: "<<contador;
}
