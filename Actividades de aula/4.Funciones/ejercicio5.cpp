#include <iostream>
#include <locale>

using namespace std;

void informarNaipe(int naipe);
int main(){
setlocale(LC_ALL, "");

int naipe;

cout << "Ingrese número de naipe: ";
cin >> naipe;

informarNaipe(naipe);



cout<<endl;
system("pause");
return 0;
}
void informarNaipe(int naipe){
    string palo;
    int numero;
    if(naipe >=1 && naipe <=10){
        palo = "Espadas";
        numero = naipe;
    }else if(naipe >=11 && naipe <=20){
        palo = "Bastos";
        numero = naipe - 10;
    }else if(naipe >=21 && naipe <=30){
        palo = "Copas";
        numero = naipe - 20;
    }else{
        palo = "Oros";
        numero = naipe - 30;
    }
    if(numero >= 8){// 8-->10 y 9-->11, el 10 se convierte en 12
        numero +=2;
    }

    cout << endl;
    cout << "El naipe ingresado es: " << numero << " de " << palo << endl;

}
