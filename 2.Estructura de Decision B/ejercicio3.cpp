#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
const int conejoB=45;
const int conejoN=50;
const int conejoM=40;
const int conejoG=49;
int cantConejo, tipo;

int acuConejoB, acuConejoN, acuConejoM, acuConejoG;
acuConejoB=0;
acuConejoN=0;
acuConejoM=0;
acuConejoG=0;

//Punto A
int conejoVendidos;
conejoVendidos=0;
//punto B
int totalConejoB, totalConejoN, totalConejoM, totalConejoG;

cout<<"Ingrese la cantidad de conejos: ";
cin>>cantConejo;

if(cantConejo>10){
    cout<<"Ninguna venta superara los 10 conejos."<<endl;
    cout<<"Ingrese la cantidad de conejos: ";
    cin>>cantConejo;
}
cout<<"Tipo de conejo (1 - Blanco, 2 - Negro, 3- Marron, 4 - Gris): ";
cin>>tipo;

conejoVendidos+=cantConejo;

switch(tipo){
    case 1:
        acuConejoB+=cantConejo;
        break;
    case 2:
        acuConejoN+=cantConejo;
        break;
   case 3:
        acuConejoM+=cantConejo;
        break;
    case 4:
        acuConejoG+=cantConejo;
        break;
}

cout<<"Ingrese la cantidad de conejos: ";
cin>>cantConejo;

if(cantConejo>10){
    cout<<"Ninguna venta superara los 10 conejos."<<endl;
    cout<<"Ingrese la cantidad de conejos: ";
    cin>>cantConejo;
}
cout<<"Tipo de conejo (1 - Blanco, 2 - Negro, 3- Marron, 4 - Gris): ";
cin>>tipo;

conejoVendidos+=cantConejo;

switch(tipo){
    case 1:
        acuConejoB+=cantConejo;
        break;
    case 2:
        acuConejoN+=cantConejo;
        break;
   case 3:
        acuConejoM+=cantConejo;
        break;
    case 4:
        acuConejoG+=cantConejo;
        break;
}

cout<<"Ingrese la cantidad de conejos: ";
cin>>cantConejo;

if(cantConejo>10){
    cout<<"Ninguna venta superara los 10 conejos."<<endl;
    cout<<"Ingrese la cantidad de conejos: ";
    cin>>cantConejo;
}
cout<<"Tipo de conejo (1 - Blanco, 2 - Negro, 3- Marron, 4 - Gris): ";
cin>>tipo;

conejoVendidos+=cantConejo;

switch(tipo){
    case 1:
        acuConejoB+=cantConejo;
        break;
    case 2:
        acuConejoN+=cantConejo;
        break;
   case 3:
        acuConejoM+=cantConejo;
        break;
    case 4:
        acuConejoG+=cantConejo;
        break;
}

totalConejoB=conejoB-acuConejoB;
totalConejoN=conejoN-acuConejoN;
totalConejoM=conejoM-acuConejoM;
totalConejoG=conejoG-acuConejoG;

cout<<"Conejos vendidos en total: "<<conejoVendidos<<endl;

cout<<"Quedaron conejos blancos: "<<totalConejoB<<endl;
cout<<"Quedaron conejos negros: "<<totalConejoN<<endl;
cout<<"Quedaron conejos marrones: "<<totalConejoM<<endl;
cout<<"Quedaron conejos grises: "<<totalConejoG<<endl;

if(totalConejoB==conejoB){
    cout<<"No se vendieron conejos blancos";
}
if(totalConejoN==conejoN){
    cout<<"No se vendieron conejos negros";
}
if(totalConejoM==conejoM){
    cout<<"No se vendieron conejos marrones";
}
if(totalConejoG==conejoG){
    cout<<"No se vendieron conejos grises";
}

cout<<endl;
system("pause");
return 0;
}
