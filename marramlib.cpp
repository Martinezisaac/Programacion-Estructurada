/********************PRESENTACION*******************************

NOMBRE: Isaac Martinez | Hugo Javier Ramirez Tovar 
FECHA: 21 de febrero de 2022
PROGRAMA: Activiadad de programacion 5
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Elaborar un programa en donde se realicen 2 arreglo bidimensional 3x3 numérico que cumpla con las siguientes condiciones:
                -Realizar un menú para las operaciones 
                -Las operaciones són, llenar y borrar arreglo 
                -Llenarlos de forma aleatoria con valores entre 1 y 50 
                -Realizar la sumatoria de ambos arreglos  (suma de matrices)
                -Elaborar las funciones que creas pertinentes para resolver el problema

**************************************************************/

#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

    //FUNCIONES
    void ImpArreglo(int array[][3],int NFILAS, int NCOLUMNAS){ //Impresion del arreglo
        for(int x=0;x<NFILAS;x++){
            cout<<"\n";
            for(int y=0;y<NCOLUMNAS;y++){
                cout<<"["<<array[x][y]<<"] ";
            }//Fin de for
        }//Fin de for
        cout<<"\n"<<endl;
    }//Fin de la funcion

    void RellenarArreglo(int array[][3],int NFILAS, int NCOLUMNAS){ //Rellenar arreglo
            for(int x=0;x<NFILAS;x++){ 
                for(int y=0;y<NCOLUMNAS;y++){
                    array[x][y] = 1 + rand()%50;
                }//Fin de for
            }//Fin de for  
    }//Fin de la funcion

    void BorrarArreglo(int array[][3],int NFILAS, int NCOLUMNAS){ //Impresion del arreglo
            for(int x=0;x<NFILAS;x++){ 
                for(int y=0;y<NCOLUMNAS;y++){
                    array[x][y] = 0;
                }//Fin de for
            }//Fin de for  
    }//Fin de la funcion

    void SumarArreglos(int array[][3],int NFILAS, int NCOLUMNAS, int arraydos[][3], int arraytres[][3]){ //Impresion del arreglo
            for(int x=0;x<NFILAS;x++){ 
                for(int y=0;y<NCOLUMNAS;y++){
                    arraytres[x][y] = array[x][y] + arraydos[x][y];
                }//Fin de for
            }//Fin de for  
    }//Fin de la funcion

    void Windows(){ //Funciones de Windows 
        Sleep(2000); //Dormir el programa 
        system("cls"); //Resetear la pantalla 
    } //Fin de la funcion 

    void Menu(){ //Funcion para volver al menu principal 
        cout<<"Volviendo al menu principal..." <<endl;
        Windows();
        //goto Menu; 
    }

    void Predeterminado(){ //Funcion de validacion tipo caracter 
        cout<<"Ingrese una opcion valida..." <<endl;
        Windows();
        //goto Menu; 
    }