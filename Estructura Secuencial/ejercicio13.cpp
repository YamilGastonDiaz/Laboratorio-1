#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
int importe, billeteMil, restoMil, billeteQuinieto, restoQuiniento, billeteDosciento, restoDosciento, billeteCien;

cout<<" ingresar un importe a retirar: ";
cin>>importe;

billeteMil=importe/1000;
restoMil=importe%1000;

billeteQuinieto=restoMil/500;
restoQuiniento=restoMil%500;

billeteDosciento=restoQuiniento/200;
restoDosciento=restoQuiniento%200;

billeteCien=restoDosciento/100;

cout<<"Billetes de 1000: "<<billeteMil<<endl;
cout<<"Billetes de 500: "<<billeteQuinieto<<endl;
cout<<"Billetes de 200: "<<billeteDosciento<<endl;
cout<<"Billetes de 100: "<<billeteCien;


cout<<endl;
system("pause");
return 0;
}
