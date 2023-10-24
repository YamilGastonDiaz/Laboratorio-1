#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int mes, tipoAnimal, edad, tipoVivienda;
int const ANIMALES=6;
int const VIVIENDAS=5;

string nomAnimal[ANIMALES] = {"Perro", "Gato", "Conejo", "Huron", "Caballo", "Oveja"};
string nomVivienda[VIVIENDAS] = {"Casa", "Departamento", "Casaquinta", "Finca", "Duplex"};

//punto A
int vCantAnimal[ANIMALES]={};
int mayorA;
int mayorPA;
//punto B
int vAcuEdad[ANIMALES]={};
float promedio;
//punto C
int matCantidad[ANIMALES][VIVIENDAS]={};

cout<<"Mes de la adopcion: ";
cin>>mes;

while(mes!=0){
    cout<<"Tipo de animal adoptado: ";
    cin>>tipoAnimal;
    cout<<"Edad del adoptante responsable: ";
    cin>>edad;
    cout<<"Tipo de vivienda del adoptante responsable: ";
    cin>>tipoVivienda;
    cout<<endl;

    //punto A
    vCantAnimal[tipoAnimal-10]++;
    //punto B
    vAcuEdad[tipoAnimal-10]+=edad;
    //punto C
    matCantidad[tipoAnimal-10][tipoVivienda-1]++;


    cout<<"Mes de la adopcion: ";
    cin>>mes;
}
system("cls");
//punto A
mayorA=vCantAnimal[0];
mayorPA=0;
for(int i = 1; i < ANIMALES; i++){
    if(vCantAnimal[i]>mayorA){
        mayorA=vCantAnimal[i];
        mayorPA=i;
    }
}
cout<<"El tipo de animal mas adoptado es: "<<nomAnimal[mayorPA]<<endl;

//punto B
for(int i = 0; i < ANIMALES; i++){
    if(vCantAnimal[i]>0){
        promedio=(float)vAcuEdad[i]/vCantAnimal[i];
        cout << "El promedio de adoptantes del Tipo: " << nomAnimal[i] << " es: " << promedio << endl;
    }
}
//punto C
for(int f = 0; f < ANIMALES; f++){
        cout<<"Tipo de animales "<<f+10<<": "<<nomAnimal[f]<<endl;
    for(int c = 0; c < VIVIENDAS; c++){
        cout<<"Tipo de vivienda "<<c+1<<": "<<nomVivienda[c]<<" : "<<matCantidad[f][c]<<endl;
    }
    cout<<endl;
}
cout<<endl;
system("pause");
return 0;
}
