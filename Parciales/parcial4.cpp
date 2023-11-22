#include <iostream>
#include <locale>

using namespace std;

bool ObtenerTipoHorario(int hora);
void Punto2(bool vPuntoB[300]);
int main(){
setlocale(LC_ALL, "");

const int AGENTE=300;
const int DISTRITO=110;
const int INFRACCION=10;
const int MES=12;
int infraccion, codAgente, dia, mes, hora, tipoI, distrito;
float importe;

//Punto A
int vPuntoAn[INFRACCION]={};
int vPuntoAd[INFRACCION]={};
//Punto B
bool vPuntoB[AGENTE]={};

//Punto C
float vPuntoC[DISTRITO]={};

//Punto D
int mPuntoD[MES][INFRACCION]={};
string nombre[10]={"Exceso de velocidad", "Conducir bajo la influencia de alcohol o drogas", "Conducir mientras programa en C++",
"Hablar o enviar mensajes de texto mientras se conduce", "No usar el cinturón de seguridad", "No respetar los semáforos",
"Conducir sin licencia", "Estacionarse en lugares prohibidos", "Conducir conectado a Zoom", "Conducir sin luces encendidas"};

cout<<"Número de infracción: ";
cin>>infraccion;

while(infraccion != 0){
    cout<<"Código de Agente: ";
    cin>>codAgente;
    cout<<"Día: ";
    cin>>dia;
    cout<<"Mes: ";
    cin>>mes;
    cout<<"Hora: ";
    cin>>hora;
    cout<<"Tipo de infracción: ";
    cin>>tipoI;
    cout<<"Distrito: ";
    cin>>distrito;
    cout<<"Importe de la infracción: ";
    cin>>importe;
    cout<<endl;

    if(ObtenerTipoHorario(hora)){
        vPuntoAd[tipoI-10]++;
    }else{
        vPuntoAn[tipoI-10]++;
    }


    vPuntoB[codAgente-1]=true;


    if(mes>=1 && mes<=3){
        vPuntoC[distrito-500]+=importe;
    }

    mPuntoD[mes-1][tipoI-10]++;


    cout<<"Número de infracción: ";
    cin>>infraccion;
}
cout<<"PUNTO A: "<<endl;
for(int i = 0; i < INFRACCION; i++){
    if(vPuntoAn[i]>vPuntoAd[i]){
        cout<<nombre[i]<<endl;
    }
}

cout<<"PUNTO B: "<<endl;
Punto2(vPuntoB);

cout<<"PUNTO C: "<<endl;
for(int i = 0; i < DISTRITO; i++){
    if(vPuntoC[i]<1000000){
        cout<<"Distrito: "<<i+500<<endl;
    }
}

cout<<"PUNTO D: "<<endl;
for(int f = 0; f < MES; f++){
        cout<<"Mes # "<<f+1<<endl;
    for(int c = 0; c < INFRACCION; c++){
        if(mPuntoD[f][c]>0){
            cout<<nombre[c]<<": "<<mPuntoD[f][c]<<"\t";
        }
    }
    cout<<endl;
}

cout<<endl;
system("pause");
return 0;
}
void Punto2(bool vPuntoB[300]){
    for(int i = 0; i < 300; i++){
        if(vPuntoB[i]){
            cout<<"Codigo de agente: "<<i+1<<endl;
        }
    }
}

bool ObtenerTipoHorario(int hora){
    if (hora >= 6 &&  hora <= 18){
		return 1;
	}else{
		return 0;
	}
}
