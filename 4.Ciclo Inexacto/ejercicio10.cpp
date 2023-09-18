#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int numArtista, integrantes, jornada, minShow;
//punto A
int newNumArtista, maxMinShow;
//punto B
int contJornada1=0, contJornada2=0, contJornada3=0;
//punto C
int acuJornada1=0, acuJornada2=0, acuJornada3=0, jornadaExtensa;
//punto D
int contTotalA=0, acuTotalM=0;
float promedio;

cout<<"ingrese el numero del artista: ";
cin>>numArtista;

while (numArtista != 0){
    cout<<"integrantes: ";
    cin>>integrantes;
    cout<<"joranada 1, 2 o 3: ";
    cin>>jornada;
    cout<<"duracion del show en minutos: ";
    cin>>minShow;

    acuTotalM+=minShow;
    contTotalA++;

    switch (jornada){
        case 1:
            if(minShow > maxMinShow){
                maxMinShow=minShow;
                newNumArtista=numArtista;
            }
            if(integrantes == 1){
                contJornada1++;
            }
            acuJornada1+=minShow;
            break;
        case 2:
            if(integrantes == 1){
                contJornada2++;
            }
            acuJornada2+=minShow;
            break;
         case 3:
            if(integrantes == 1){
                contJornada3++;
            }
            acuJornada3+=minShow;
            break;
    }
        if(acuJornada1 > acuJornada2 && acuJornada1 > acuJornada3){
            jornadaExtensa=acuJornada1;
        }else{
            if(acuJornada2 > acuJornada1 && acuJornada2 > acuJornada3){
                jornadaExtensa=acuJornada2;
            }else{
                jornadaExtensa=acuJornada3;
            }
        }




    cout<<"---------------------------------"<<endl;
    cout<<"ingrese el numero del artista: ";
    cin>>numArtista;
}
cout<<endl;
promedio=(float)acuTotalM/contTotalA;

cout<<"El numero de artista que realice el show mas largo de la jornada 1: "<<newNumArtista<<endl;
cout<<"cantidad de solistas jornada 1: "<<contJornada1<<endl;
cout<<"cantidad de solistas jornada 2: "<<contJornada2<<endl;
cout<<"cantidad de solistas jornada 3: "<<contJornada3<<endl;
cout<<"La jornada mas extensa: "<<jornadaExtensa<<endl;
cout<<"Duracion promedio de show por artista: "<<promedio;

cout<<endl;
system("pause");
return 0;
}
