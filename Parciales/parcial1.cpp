#include <iostream>
#include <locale>

using namespace std;

void Punto2(bool vPuntoB[]);
void Punto3(float mPuntoC[][2]);

int main(){
setlocale(LC_ALL, "");

const int GENERO=7;
const int SUCURSAL=4;
const int AUTOR=1000;
int venta, autor, genero, pagina, sucursal;
float precio;

//PUNTO A
bool mPuntoA[GENERO][SUCURSAL]={};

//PUNTO B
bool vPuntoB[AUTOR]={};

//PUNTO C
float mPuntoC[GENERO][2]={};

//PUNTO D
float vPuntoD[AUTOR]={};
float mayorRecaudacion=0;
int mayorId;

cout<<"ID de Venta: ";
cin>>venta;

while(venta != 0){
    cout<<"ID de Autor: ";
    cin>>autor;
    cout<<"ID de Género Literario: ";
    cin>>genero;
    cout<<"Precio: ";
    cin>>precio;
    cout<<"Páginas del libro: ";
    cin>>pagina;
    cout<<"ID de Sucursal: ";
    cin>>sucursal;
    cout<<endl;

    mPuntoA[genero-1][sucursal/1000-1]=true;

    if(pagina > 1200){
        vPuntoB[autor-500]=true;
    }

    mPuntoC[genero-1][0]+=precio;
    mPuntoC[genero-1][1]++;

    vPuntoD[autor-500]+=precio;

    cout<<"ID de Venta: ";
    cin>>venta;

}
cout<<"Punto A: "<<endl;
for(int i = 0; i < SUCURSAL; i++){
    if(!mPuntoA[0][i] && !mPuntoA[3][i]){
        cout<<(i+1)*1000<<endl;
    }
}
cout<<"Punto B: "<<endl;
Punto2(vPuntoB);

cout<<"Punto C: "<<endl;
Punto3(mPuntoC);

cout<<"Punto D "<<endl;
for(int i = 0; i < AUTOR; i++){
    if(vPuntoD[i]>mayorRecaudacion){
        mayorRecaudacion=vPuntoD[i];
        mayorId=i;
    }
}
cout<<"El id que mas recaudo: "<<mayorId+500;

cout<<endl;
system("pause");
return 0;
}
void Punto2(bool vPuntoB[]){
    int contAutor=0;
    for(int i = 0; i < 1000; i++){
        if(vPuntoB[i]){
            contAutor++;
        }

    }
    cout<<"Cantidad de autores: "<<contAutor<<endl;
}

void Punto3(float mPuntoC[][2]){
    string nombre[7]={"Terror", "Biografía", "Novela", "Ciencia ficción", "Historia", "Ciencia", "Salud"};
    float promedio;
    for(int i = 0; i < 7; i++){
        if(mPuntoC[i][1]>0){
            promedio=(float)mPuntoC[i][0]/mPuntoC[i][1];
            cout<<nombre[i]<<": "<<promedio<<endl;
        }
    }
}
