#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
const float alquiler=1000;
const float valorCarameloP=0.5;
int mantenimiento, presupuestoI, cantCaramelo;
float costoCaramelo, costoMantenimiento;
float total;

cout<<"Ingresear el presupuesto inicial: ";
cin>>presupuestoI;
cout<<"Ingresar la cantidad de caramelos: ";
cin>>cantCaramelo;

costoCaramelo=cantCaramelo*valorCarameloP;
costoMantenimiento=cantCaramelo/1000*5000;

total=costoCaramelo+costoMantenimiento+alquiler;

if(presupuestoI>=total){
    cout<<"El presupuesto es suficiente para cubrir los costos de: "<<total;
}else{
    cout<<"El presupuesto no es suficiente, necesita un credito de: "<<total-presupuestoI;
}




cout<<endl;
system("pause");
return 0;
}
