#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
const int tam=15;
int i, dia, newDia, cantDiasNeblina=0, cantDiaLluvia=0, cantDiaSinLluvia=0;
float temperatura, mmLluvia, visibilidadKm;
float maxTemperatura, minTemperatura;

for(i = 0; i < tam; i++){
    cout<<"Dia: ";
    cin>>dia;
    cout<<"Temperatura: ";
    cin>>temperatura;
    cout<<"Milimetros de lluvia: ";
    cin>>mmLluvia;
    cout<<"Visibilidad en km: ";
    cin>>visibilidadKm;
    cout<<"---------------------"<<endl;

    if(i==0 || temperatura>maxTemperatura){
        maxTemperatura=temperatura;
        newDia=dia;
    }

    if(i==0 || temperatura<minTemperatura){
        minTemperatura=temperatura;
    }


    if(visibilidadKm<2000){
        cantDiasNeblina++;
    }

    if(mmLluvia=!0){
        cantDiaLluvia++;
    }else{
        cantDiaSinLluvia++;
    }


}
cout<<"El numero de dia que se haya registrado la temperatura maxima: "<<newDia<<endl;
cout<<"La amplitud termica de todo el periodo:"<<maxTemperatura-minTemperatura<<endl;
cout<<"La cantidad de dias con neblina: "<<cantDiasNeblina<<endl;
if(cantDiaLluvia>cantDiaSinLluvia){
    cout<<"Quincena lluviosa";
}else{
    if(cantDiaLluvia==5){
        cout<<"Quincena húmeda";
    }else{
        cout<<"Quincena seca";
    }
}


cout<<endl;
system("pause");
return 0;
}
