#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
string nomArticulo;
float precioUnitario, importeTotal;
int cantVendidaArt;

cout<<"ingrese el nombre del articulo: ";
getline(cin, nomArticulo);
cout<<"ingrese el precio unitario del articulo: ";
cin>>precioUnitario;
cout<<"ingrese la cantidad vendidad del articulo: ";
cin>>cantVendidaArt;

cout<<"Nombre del articulo: "<<nomArticulo<<endl;

importeTotal=cantVendidaArt*precioUnitario;

cout<<"Precio total que debe abonar el cliente: "<<importeTotal;

cout<<endl;
system("pause");
return 0;
}
