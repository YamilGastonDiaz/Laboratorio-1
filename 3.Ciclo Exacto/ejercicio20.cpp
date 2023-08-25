#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
const int tam=19;
int i, numPartido, minutosJugado, tarjetaAmarilla, tarjetaRoja, goles;
int cantPartidos0=0, cantPartidosJugado=0, acuTarjetaA=0, acuTarjetaR=0, totalTarjetas, maxGoles, maxNumPartido, racha=0, rachaPconGol;
float promedioTarjetas;

for(i = 0; i < tam; i++){
    cout<<"Numero de partido: ";
    cin>>numPartido;
    cout<<"Minutos jugados: ";
    cin>>minutosJugado;
    cout<<"Tarjetas amarillas: ";
    cin>>tarjetaAmarilla;
    cout<<"Tarjetas rojas: ";
    cin>>tarjetaRoja;
    cout<<"Goles: ";
    cin>>goles;
    cout<<"------------------------"<<endl;

    if(minutosJugado==0){
        cantPartidos0++;
    }

    if(minutosJugado>=90){
        cantPartidosJugado++;
    }

    acuTarjetaA+=tarjetaAmarilla;

    acuTarjetaR+=tarjetaRoja;


    if(i==0 || goles>maxGoles){
        maxGoles=goles;
        maxNumPartido=numPartido;
    }

        if(goles != 0){
        racha++;
    }else{
        if(racha > rachaPconGol){
            rachaPconGol=racha;
        }
        racha=0;
    }
}
totalTarjetas=acuTarjetaA+acuTarjetaR;
if(totalTarjetas>0){
    promedioTarjetas=(float)totalTarjetas/tam;
}

if(racha>rachaPconGol){
    rachaPconGol=racha;
}

cout<<"La cantidad de partidos que no jugo: "<<cantPartidos0<<endl;
cout<<"La cantidad de partidos que jugo por completo: "<<cantPartidosJugado<<endl;
cout<<"El promedio de tarjetas recibidas por partido: "<<promedioTarjetas<<endl;
cout<<"El numero de partido en el que haya convertido mayor cantidad de goles: "<<maxNumPartido<<" goles convertidos: "<<maxGoles<<endl;
cout<<"La mejor racha de partidos convirtiendo goles: "<<rachaPconGol;

cout<<endl;
system("pause");
return 0;
}
