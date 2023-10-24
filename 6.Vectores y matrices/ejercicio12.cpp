#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int const PROVINCIAS=24;
int const ZONA=9;
int provincia, zona;

//punto A
string nombreProvincias[24]={"Buenos Aires", "Catamarca", "Chaco", "Chubut", "Cordoba", "Corrientes", "Entre Ríos", "Formosa",
"Jujuy", "La Pampa", "La Rioja", "Mendoza", "Misiones", "Neuquen", "Rio Negro", "Salta", "San Juan", "San Luis", "Santa Cruz",
"Santa Fe", "Santiago del Estero", "Tierra del Fuego", "Tucuman", "Islas Malvinas"};

int matProvZona[ZONA][PROVINCIAS]={};
int contProvZona[ZONA]={};


for(int i = 0; i < PROVINCIAS; i++){
    cout<<"Nro. de Provincia: ";
    cin>>provincia;
    cout<<"Nro. de Zona de la provincia: ";
    cin>>zona;

    matProvZona[zona-1][provincia-1]=1;
    contProvZona[zona-1]++;
}

for(zona = 0; zona < ZONA; zona++){
    if(contProvZona[zona]>3){
        cout<<"ZONA "<<zona+1<<": "<<endl;
        for(provincia = 0; provincia < PROVINCIAS; provincia++){
            if(matProvZona[zona][provincia]==1){
                cout<<"PROVINCIA "<<provincia+1<<": "<<nombreProvincias[provincia]<<endl;
            }
        }
        cout<<endl;
    }
}


cout<<endl;
system("pause");
return 0;
}
