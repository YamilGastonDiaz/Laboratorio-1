#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
 int nota1, nota2, nota3, nota4;

cout<<"Ingrese la primer nota: ";
cin>>nota1;
cout<<"Ingrese la segunda nota: ";
cin>>nota2;
cout<<"Ingrese la tercer nota: ";
cin>>nota3;
cout<<"Ingrese la curata nota: ";
cin>>nota4;

if(nota1>=7 && nota2>=7 && nota3>=7 && nota4>=7){
    cout<<"Promociona.";
}else if((nota1 >= 4 && nota2 >=4 && nota3 >= 4) ||
            (nota1 >= 4 && nota2 >=4 && nota4 >= 4)||
            (nota1 >= 4 && nota3 >=4 && nota4 >= 4) ||
            (nota2 >= 4 && nota3 >=4 && nota4 >= 4)){
    cout<<"Rinde examen final";
}
else if(nota1 >= 4||nota2>=4||nota3>=4||nota4>=4){
    cout<<"Recupera Parciales";
}else{
    cout<<"Recursa la materia";
}

cout<<endl;
system("pause");
return 0;
}
