#include <iostream>
#include <locale>

using namespace std;

void Punto2(int mPuntoB[][7]);
void Punto3(float vPuntoC[7]);
int main(){
setlocale(LC_ALL, "");

const int CLIENTE=600;
const int TORTA=7;
const int CONTACTO=4;
int pedido, torta, diaPedido, cliente, contacto;
float peso;

//PUNTO A
bool vCliente[CLIENTE]={};
int cantCliente=0;

//PUNTO B
int mPuntoB[CLIENTE][TORTA]={};

//PUNTO C
float vPuntoC[TORTA]={};

//PUNTO D
bool mPuntoD[CLIENTE][CONTACTO]={};


cout<<"ID de Pedido: ";
cin>>pedido;

while(pedido > 0){
    cout<<"ID de Torta: ";
    cin>>torta;
    cout<<"Peso: ";
    cin>>peso;
    cout<<"Días de anticipación del pedido: ";
    cin>>diaPedido;
    cout<<"ID de Cliente: ";
    cin>>cliente;
    cout<<"ID de Medio de Contacto: ";
    cin>>contacto;
    cout<<endl;

    if(diaPedido > 90){
        vCliente[cliente-800]=true;
    }

    mPuntoB[cliente-800][torta-1]++;

    if(peso>vPuntoC[torta-1]){
        vPuntoC[torta-1]=peso;
    }

    mPuntoD[cliente-800][contacto/1000-1]=true;


    cout<<"ID de Pedido: ";
    cin>>pedido;
}
cout<<"PUNTO A: "<<endl;
for(int i = 0; i < CLIENTE; i++){
    if(vCliente[i]){
        cantCliente++;
    }
}
cout<<"La cantidad de clientes: "<<cantCliente<<endl;

cout<<"PUNTO B: "<<endl;
Punto2(mPuntoB);

cout<<"PUNTO C: "<<endl;
Punto3(vPuntoC);

cout<<"PUNTO D: "<<endl;
for(int i = 0; i < CLIENTE; i++){
    if(!mPuntoD[i][0] && !mPuntoD[i][2]){
        cout<<"Id Cliente: "<<i+800<<endl;
    }
}

cout<<endl;
system("pause");
return 0;
}
void Punto2(int mPuntoB[][7]){
    for(int f = 0; f < 600; f++){
        for(int c = 0; c < 7; c++){
            if(mPuntoB[f][c]>1){
                cout<<"Id Cliente: "<<f+800<<endl;
            }
        }
    }
}
void Punto3(float vPuntoC[7]){
    string nombre[7]={"Rogel", "Selva negra", "Cheesecake", "Chocotorta", "Lemon pie", "Balcarce", "Chajá"};
        for(int i = 0; i < 7; i++){
            cout<<nombre[i]<<": "<<vPuntoC[i]<<endl;
        }
}
