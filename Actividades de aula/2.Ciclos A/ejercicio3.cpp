#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int idEspecialidad, numConsulta;
int duracionConsulta, dia, horaDia;

//punto 1
int acuConsultaMin, contConsulta;
float promedio;
//punto 2
int consultaExtensa, horaDiaExtenso, numConsultaExtensa;
bool bandera;
//punto 3
int contDiurno=0, contTarde=0, contNocturno=0, total;
float porcentajeDiurno, porcentajeTarde, porcentajeNocturno;
//punto 4
const float consulta=2000;
const float adicional=500;
const float recargo=1.25;
int acuTotal=0;

cout<<"ID de especialidad medica: ";
cin>>idEspecialidad;

while(idEspecialidad!=0){

    acuConsultaMin=0;
    contConsulta=0;

    bandera=0;

    cout<<"Numero de consulta medica: ";
    cin>>numConsulta;

    while(numConsulta>0){
        cout<<"DuraciOn de la consulta en minutos: ";
        cin>>duracionConsulta;
        cout<<"Dia de la semana: ";
        cin>>dia;
        cout<<"Hora del dia: ";
        cin>>horaDia;

        acuConsultaMin+=duracionConsulta;
        contConsulta++;

        if(dia == 1){
            if(bandera==0 || duracionConsulta>consultaExtensa){
                consultaExtensa=duracionConsulta;
                horaDiaExtenso=horaDia;
                numConsultaExtensa=numConsulta;
                bandera=1;
            }
        }

        if(dia>=6 && dia<=13){
            contDiurno++;
        }else{
            if(dia>=14 && dia<=19){
                contTarde++;
            }else{
                if(dia>=20 && dia<=5){
                    contNocturno++;
                }
            }
        }

        if(dia==6 || dia==7){
            if(duracionConsulta>30){
                acuTotal+=(consulta+adicional)*recargo;
            }else{
                acuTotal+=consulta*recargo;
            }
        }else{
            if(duracionConsulta>30){
                acuTotal+=consulta+adicional;
            }else{
                acuTotal+=consulta;
            }
        }


        cout<<endl;
        cout<<"Numero de consulta medica: ";
        cin>>numConsulta;
    }
if(contConsulta>0){
    promedio=(float)acuConsultaMin/contConsulta;
    cout<<"Promedio de consulta: "<<promedio<<endl;
}

cout<<"Duracion: "<<consultaExtensa<<", Hora del dia: "<<horaDiaExtenso<<" , Numero de consulta: "<<numConsultaExtensa<<endl;

    cout<<endl;
    cout<<"ID de especialidad medica: ";
    cin>>idEspecialidad;
}
total=contDiurno+contTarde+contNocturno;
porcentajeDiurno=(float)contDiurno*100/total;
porcentajeTarde=(float)contTarde*100/total;
porcentajeNocturno=(float)contNocturno*100/total;

cout<<"Porcentaje Diurno: "<<porcentajeDiurno<<endl;
cout<<"Porcentaje Tarde: "<<porcentajeTarde<<endl;
cout<<"Porcentaje Nocturno: "<<porcentajeNocturno<<endl;
cout<<"Total facturado por la clinica: "<<acuTotal;

cout<<endl;
system("pause");
return 0;
}
