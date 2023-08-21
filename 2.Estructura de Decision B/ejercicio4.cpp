#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

float alquiler=10000;
float valorCarameloP=0.5;
float mantenimiento, presupuestoI;
int cantCaramelo;
float costoCaramelo, costoMantenimiento;
float total;

cout<<"Ingresear el presupuesto inicial: ";
cin>>presupuestoI;
cout<<"Ingresar la cantidad de caramelos: ";
cin>>cantCaramelo;

costoCaramelo=cantCaramelo*valorCarameloP;
costoMantenimiento=cantCaramelo/1000*5000;

total=costoCaramelo+costoMantenimiento+alquiler;

cout<<"total: "<<total<<endl;

if(presupuestoI>=total){
    cout<<"El presupuesto es suficiente para cubrir los costos de: "<<presupuestoI;
}else{
    cout<<"El presupuesto no es suficiente, necesita un credito de: "<<total-presupuestoI+presupuestoI;
}

cout<<endl;
system("pause");
return 0;
}
