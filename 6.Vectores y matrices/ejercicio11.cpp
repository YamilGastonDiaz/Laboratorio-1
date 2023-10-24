#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
int edad;
char color, sexo;

//punto A
int contColor[4]={};
char vColorL[4]={'N', 'A', 'B', 'O'};
string vColor[4]={"NEGRO", "AZUL", "BLANCO", "OTROS"};
int mayorVotado, mayorColor;

//punto B
int contEncuestados[10]={};

cout<<"Edad del encuestado: ";
cin>>edad;

while(edad != 0){
    cout<<"Color elegido: ";//(N, A, B, O)
    cin>>color;
    cout<<"Sexo: ";//(M o F)
    cin>>sexo;
    cout<<endl;

    contEncuestados[edad/10]++;

    if(edad='F'){
        for(int i = 0; i < 4; i++){
            if(vColorL[i]==color){
                contColor[i]++;
            }
        }
    }

    cout<<"Edad del encuestado: ";
    cin>>edad;
}
cout<<"-----------------------"<<endl;
mayorVotado=contColor[0];
mayorColor=0;
for(int i = 1; i < 4; i++){
    if(contColor[i]>mayorVotado){
        mayorVotado=contColor[i];
        mayorColor=i;
    }
}
cout<<"Mayor Color votado: "<<vColor[mayorColor]<<endl;

cout<<"-----------------------"<<endl;

for(int i = 0; i < 10; i++){
    cout<<"Decada "<<i<<" :"<<contEncuestados[i]<<endl;
}

cout<<endl;
system("pause");
return 0;
}
