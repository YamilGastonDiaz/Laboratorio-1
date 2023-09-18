#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;


int main(){
int opc;
float metro, conversion;

while (true){
        system("cls");
        cout<<"MENU PRINCIPAL"<<endl;
        cout<<"-------------------------------"<<endl;
        cout<<"1 - Ingresar medida en metros"<<endl;
        cout<<"2 - Convertir a centimetros"<<endl;
        cout<<"3 - Convertir a kilometros"<<endl;
        cout<<"4 - Convertir a pulgadas"<<endl;
        cout<<"5 - Convertir a pies"<<endl;
        cout<<"------------------------------"<<endl;
        cout<<"0 - Salir del programa"<<endl;
        cout<<endl;
        cout<<"OPCION: ";
        cin>>opc;
        system("cls");
        switch (opc){
            case 1:
               cout<<"ingrese la medida en metros: ";
               cin>>metro;
                break;
            case 2:
                conversion= metro * 100;
                cout<<"\tCENTIMETRO\n";
                cout<<conversion<<endl;
                break;
            case 3:
                conversion=metro /1000;
                cout<<"\tKILOMETRO\n";
                cout<<setprecision(3)<<fixed<<conversion<<endl;
                break;
            case 4:
                conversion=metro * 39.37;
                cout<<"\tPULGADA\n";
                cout<<setprecision(2)<<fixed<<conversion<<endl;
                break;
            case 5:
                conversion=metro * 3.281;
                cout<<"\tPIE\n";
                cout<<setprecision(2)<<fixed<<conversion<<endl;
                break;
            case 0:
                return 0;
                break;
            default:
                 cout<<"OPCION INCORRECTA, INGRESE NUEVAMENTE UNA OPCION."<<endl;
        }
cout<<endl;
system("pause");
}

return 0;
}
