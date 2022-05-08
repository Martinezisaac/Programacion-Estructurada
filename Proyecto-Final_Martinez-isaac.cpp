//Librerias
#include <iostream>
#include "Calculadora-Basica_Martinez-Isaac.cpp"
#include "Convertidor-de-Distancias_Martinez-Isaac.cpp"
#include "Convertidor-de-Unidades_Martinez-Isaac.cpp"
#include "Libreria-de-Mensajes_Martinez-Isaac.cpp"

using namespace std;

//VARIABLES GLOBLAES   
int Menu;

int main(){
system("cls"); 

    cout<<"Seleccione una opcion: \n" <<endl;

    cout<<"[1] - Calculadora Basica" <<endl;
    cout<<"[2] - Convertidor de Distancias" <<endl;
    cout<<"[3] - Convertidor de Unidades" <<endl;
    cout<<"[4] - Salir del programa" <<endl;
    cout<<"\nSeleccion: ";
    cin>>Menu;

    system("cls");
    Cargando();

        switch(Menu){

            case 1: //Calculadora Basica

            break; //Fin de case 1

            case 2: //Convertidor de Distancias
                ConvertidorDeDistancias();
            break; //Fin de case 2

            case 3: //Convertidor de Unidades

            break; //Fin de case 3

            case 4: //Salir del programa
                Salir();
            break; //Fin de case 4

            default: //Mensaje predetermiando
                Predeterminado();
            break; //Fin de case default

        } //FIn de Swtich

return 0;
} //Fin de main 