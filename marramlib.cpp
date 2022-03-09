/********************PRESENTACION*******************************
NOMBRE: Isaac Martinez | Hugo Javier Ramirez Tovar 
FECHA: 28 de febrero de 2022
PROGRAMA: Actividad de programacion 6
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Elaborar un programa en donde se realicen 2 arreglo bidimensional, desde un arreglo 2x2 hasta un arreglo 10x10 que cumpla con las siguientes condiciones:
                -Realizar un menú para las operaciones 
                -Las operaciones són, llenar y borrar arreglo 
                -Llenarlos de forma aleatoria con valores entre 100 y 200 
                -Realizar la sumatoria, resta, division y multiplicacion de ambos arreglos (operaciones de matrices)
                -Elaborar las funciones que creas pertinentes para resolver el problema
		-Elaborar las funciones para la suma, resta, division y multiplicacion de las matrices
**************************************************************/

#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

    //FUNCIONES
    void ImpArreglo(float array[][10], int NFILA, int NCOLUMNA){ //Impresion del arreglo
        for(int x=0;x<NFILA;x++){
            cout<<"\n";
            for(int y=0;y<NCOLUMNA;y++){
                cout<<"["<<fixed<<setprecision(0)<<array[x][y]<<"] ";
            }//Fin de for columna
        }//Fin de for fila
        cout<<"\n"<<endl;
    }//Fin de la funcion

    void ImpArregloDecimales(float arraytres[][10], int NFILA, int NCOLUMNA){ //Impresion del arreglo con dos decimales 
        for(int x=0;x<NFILA;x++){
            cout<<"\n";
            for(int y=0;y<NCOLUMNA;y++){
                cout<<"["<<fixed<<setprecision(2)<<arraytres[x][y]<<"] ";
            }//Fin de for columna
        }//Fin de for fila
        cout<<"\n"<<endl;
    }//Fin de la funcion

    void RellenarArreglo(float array[][10], int NFILA, int NCOLUMNA){ //Rellenar arreglo
        for(int x=0;x<NFILA;x++){ 
            for(int y=0;y<NCOLUMNA;y++){
                array[x][y] = (1 + rand()%100) + 100;
            }//Fin de for columna
        }//Fin de for fila
    }//Fin de la funcion

    void SumarArreglos(float array[][10], int NFILA, int NCOLUMNA, float arraydos[][10], float arraytres[][10]){ //Sumar arreglos
        for(int x=0;x<NFILA;x++){ 
            for(int y=0;y<NCOLUMNA;y++){
                arraytres[x][y] = array[x][y] + arraydos[x][y];
            }//Fin de for columna
        }//Fin de for fila 
    }//Fin de la funcion

    void RestarArreglos(float array[][10], int NFILA, int NCOLUMNA, float arraydos[][10], float arraytres[][10]){ //Restar arreglos
        for(int x=0;x<NFILA;x++){ 
            for(int y=0;y<NCOLUMNA;y++){
                arraytres[x][y] = array[x][y] - arraydos[x][y];
            }//Fin de for columna
        }//Fin de for fila 
    }//Fin de la funcion

    void DividirArreglos(float array[][10], int NFILA, int NCOLUMNA, float arraydos[][10], float arraytres[][10]){ //Dividir arreglos
        for(int x=0;x<NFILA;x++){ 
            for(int y=0;y<NCOLUMNA;y++){
                arraytres[x][y] = array[x][y] / arraydos[x][y];
            }//Fin de for columna
        }//Fin de for fila  
    }//Fin de la funcion

    void MultiplicarArreglos(float array[][10],int NFILA, int NCOLUMNA, float arraydos[][10], float arraytres[][10]){ //Multiplicar arreglos
           for (int x=0; x<NCOLUMNA; x++){
                   for (int y=0; y<NFILA; y++){
                       int SumaMultiplicacion = 0;
                       for (int w=0; w<=NFILA;w++){
                           int Multiplicacion = array[x][w] * arraydos[w][y];
                           SumaMultiplicacion = SumaMultiplicacion + Multiplicacion;
                           arraytres[x][y] = SumaMultiplicacion;
                           Multiplicacion = 0;
                       }//Fin de for posicion 
                   }//Fin de for fila
           }//Fin de for columna
    }//Fin de la funcion

    void BorrarArreglo(float array[][10], int NFILA, int NCOLUMNA){ //Borrar arreglo
        for(int x=0;x<NFILA;x++){ 
            for(int y=0;y<NCOLUMNA;y++){
                array[x][y] = 0;
            }//Fin de for columna
        }//Fin de for fila 
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