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
#include "marramlib.cpp"

using namespace std;

char i, q;

void ImpArreglo(int array[][3],int,int);
void RellenarArreglo(int array[][3],int,int);
void BorrarArreglo(int array[][3], int,int);
void SumarArreglos(int array[][3],int NFILAS, int NCOLUMNAS, int arraydos[][3], int arraytres[][3]);
void Windows();
void Menu();
void Predeterminado();

int main () {
    const int NFILAS = 3;
    const int NCOLUMNAS = 3;
    int array[NFILAS][NCOLUMNAS] = {{0}};
    int array2[NFILAS][NCOLUMNAS] = {{0}};
    int arrayR[NFILAS][NCOLUMNAS];

Menu:
system ("cls");

    cout<<"Que desea hacer?\n" <<endl;
    cout<<"[1] Mostrar arreglos" <<endl; 
    cout<<"[2] Llenar los espacios de los arreglos" <<endl;
    cout<<"[3] Borrar los arreglos" <<endl;
    cout<<"[4] Realizar la sumatoria de ambos arreglos" <<endl;
    cout<<"[5] Salir del programa" <<endl;
    cin>>i;

    system("cls");

    switch(i) {
        
        case 49: //Mostrar arreglo
                cout<<"Entrando a la opcion 1..." <<endl;
                    Windows();
                Op1:
                    cout<<"Arreglos:" <<endl;
                    ImpArreglo(array,NFILAS,NCOLUMNAS); //Impresion del arreglo 1
                    ImpArreglo(array2,NFILAS,NCOLUMNAS); //Impresion del arreglo 2

                cout<<"[1] Presione \"1\" para volver al menu" <<endl;
                cin>>q;
                system("cls");
                
                if(q==49){
                	Menu();
                	goto Menu;
				}
				else{
					Predeterminado();
					goto Op1;
				}
		break;

        case 50: //Llenar espacios del arreglo
            cout<<"Entrando a la opcion 2..." <<endl;
                Windows();
           	cout<<"Llenando los espacios de los arreglos..."<<endl;
                Windows();
            cout<<"Los espacios de tus arreglos han sido modificados correctamente"<<endl;
            cout<<""<<endl;
            
            RellenarArreglo(array,NFILAS,NCOLUMNAS); //Rellenar arreglo 1
            RellenarArreglo(array2,NFILAS,NCOLUMNAS); //Rellenar arreglo 2
            Op2:
            cout<<"Arreglos:" <<endl;
            ImpArreglo(array,NFILAS,NCOLUMNAS); //Impresion del arreglo 1
            ImpArreglo(array2,NFILAS,NCOLUMNAS); //Impresion del arreglo 2

                cout<<"[1] Presione \"1\" para volver al menu" <<endl;
                cin>>q;
                system("cls");
                    if(q==49){ //Volver al menu
                        Menu();
                        goto Menu;
                    }
                    else{ //Ingresar una opcion correcta
                        Predeterminado();
                        goto Op2;
                    }
        break;

        case 51: //Borrar el arreglo 
        cout<<"Entrando a la opcion 3..." <<endl;
            Windows();
        cout<<"Borrando los espacios de los arreglos..."<<endl;
            Windows();
        cout<<"Los espacios de tus arreglos han sido borrados correctamente"<<endl;
        cout<<""<<endl;
            BorrarArreglo(array,NFILAS,NCOLUMNAS); //Borrar arreglo 1
            BorrarArreglo(array2,NFILAS,NCOLUMNAS); //Borrar arreglo 2
            Op3:
            cout<<"Arreglos:" <<endl;
            ImpArreglo(array,NFILAS,NCOLUMNAS); //Impresion del arreglo 1
            ImpArreglo(array2,NFILAS,NCOLUMNAS); //Impresion del arreglo 2
                cout<<"[1] Presione \"1\" para volver al menu" <<endl;
                cin>>q;
                system("cls");

                    if(q==49){ //Volver al menu
                        Menu();
                        goto Menu;
                    }
                    else{ //Ingresar una opcion correcta
                        Predeterminado();
                        goto Op2;
                    }
        break;

        case 52: //Sumatoria de ambos arreglos
            cout<<"Entrando a la opcion 4..." <<endl;
                Windows();
            cout<<"Sumando ambos arreglos..."<<endl;
                Windows();
            Op4:
            cout<<"Los arreglos se han sumado corretamente"<<endl;
            
            SumarArreglos(array,NFILAS,NCOLUMNAS,array2,arrayR); //Suma de los arreglos
            ImpArreglo(array,NFILAS,NCOLUMNAS); //Impresion del arreglo 1
            ImpArreglo(array2,NFILAS,NCOLUMNAS); //Impresion del arreglo 2
            cout<<"Arreglo resultante de la sumatoria:" <<endl;
            ImpArreglo(arrayR,NFILAS,NCOLUMNAS); //Impresion del arreglo resultante
                //Impresion de la matriz resultante
                cout<<"";
                cout<<"[1] Presione \"1\" para volver al menu" <<endl;
                cin>>q;
                system("cls");
                    if(q==49){ //Volver al menu
                        Menu();
                        goto Menu;
                    }
                    else{ //Ingresar una opcion correcta
                        Predeterminado();
                        goto Op4;
                    }
        break;

        case 53: //Salir del programa 
            cout<<"Saliendo del programa..." <<endl;
            Windows();
            cout<<"Gracias por usar el programa!" <<endl;
            exit(EXIT_SUCCESS); 
        break;
		
        default:
        Predeterminado();
        goto Menu;
        break;

    }//Fin del switch 

return 0;
} //Fin de main 