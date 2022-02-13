/********************PRESENTACION*******************************

NOMBRE: Isaac Martinez
FECHA: 14/Febrero/2022
PROGRAMA: Actividad de programacion 5
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Utilizar funciones para disminuir la cantidad de lineas utilizadas en la actividad de programacion 4 

**************************************************************/

#include <stdio.h>
#include <iostream>
#include <windows.h>

int array[10], y;

using namespace std;

    void Menu(){
        cout<<"Volviendo al menu..." <<endl;
        Sleep(2000);
        system("cls");
    }
    
    void Salir(){
        cout<<"Saliendo del programa..." <<endl;
        Sleep(2000);
        system("cls");
        cout<<"Gracias por usar el programa" <<endl;
        exit(EXIT_SUCCESS); 
    }

    void OpIncorrecta(){
        cout<<"Introduzca una opcion correcta..." <<endl;
        Sleep(2000);
        system("cls");
    }

    void Arreglo(){ //Impresion del arreglo
        cout<<"Estos son los valores del arreglo\n" <<endl;
                    
                    for(y=0; y<10; y++) {
                        cout<<"["<<array [y]<<"]"; //Impresion del arreglo (numeros del 0 al 9)
                    }
                    cout<<"\n";
                    for(y=0; y<10; y++) {
                        cout<<" "<<y<<" "; //Impresion de la numeracion del arreglo (0,1,2,3...9)
                    }
                cout<<"\n\n";
    }

    void Windows(){ //Funciones de Windows 
        Sleep(2000);
        system("cls");
    }