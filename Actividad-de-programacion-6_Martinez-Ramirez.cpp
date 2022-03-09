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
#include "marramlib.cpp"

using namespace std;

float Grado;
char i, q;

void ImpArreglo(float array[][10],int,int);
void RellenarArreglo(float array[][10],int,int);
void BorrarArreglo(float array[][10], int,int);
void SumarArreglos(float array[][10],int NFILAS, int NCOLUMNAS, float arraydos[][10], float arraytres[][10]);
void RestarArreglos(float array[][10],int NFILAS, int NCOLUMNAS, float arraydos[][10], float arraytres[][10]);
void DividirArreglos(float array[][10],int NFILAS, int NCOLUMNAS, float arraydos[][10], float arraytres[][10]);
void MultiplicarArreglos(float array[][10],int NFILAS, int NCOLUMNAS, float arraydos[][10], float arraytres[][10]);
void Windows();
void Menu();
void Predeterminado();
	
int main () {
	system("cls");
	const int NFILAS = 10;
	const int NCOLUMNAS = 10;
    float array[NFILAS][NCOLUMNAS] = {{0}};
    float array2[NFILAS][NCOLUMNAS] = {{0}};
    float arrayR[NFILAS][NCOLUMNAS];
	
	cout<<"Bienvenido usuario"<<endl;
		Windows();
	Bienvenida:
		system("cls");
		cout<<"Ingrese el grado de la matriz"<<endl;
		cout<<"La matriz acepta unicamente digitos entre 2 y 10"<<endl;
		cout<<"\n";
		cout<<"Grado de la matriz: ";
		cin>>Grado;
		system("cls");
	
		if(Grado>1 && Grado<=10){
			cout<<"Configurando su matriz..." <<endl;
				Windows();
	Menu:
		system ("cls");
	
	    cout<<"Que desea hacer?\n" <<endl;
		cout<<"[1] Modificar el grado de la matriz" <<endl; //case 49
	    cout<<"[2] Mostrar arreglos" <<endl; //case 50
	    cout<<"[3] Llenar los espacios de los arreglos" <<endl; //case 51
	    cout<<"[4] Realizar la sumatoria de los arreglos" <<endl; //case 52
		cout<<"[5] Realizar la resta de los arreglos" <<endl; //case 53
		cout<<"[6] Realizar la division de los arreglos" <<endl; //case 54
		cout<<"[7] Realizar la multiplicacion de los arreglos" <<endl; //case 55
		cout<<"[8] Borrar los arreglos" <<endl; //case 56
	    cout<<"[9] Salir del programa" <<endl; //case 57
	    cin>>i;
	    system("cls");
	
	    switch(i) {

			case 49:
				cout<<"Volviendo al menu inicial..."<<endl;
				Windows();
				goto Bienvenida;
			break; 
	        
	        case 50: //Mostrar arreglo
	            cout<<"Mostrando arreglos..." <<endl;
	            	Windows();
	            Op1:
	                cout<<"Arreglo 1:" <<endl;
	                ImpArreglo(array,Grado,Grado); //Impresion del arreglo 1
	                cout<<"Arreglo 2:" <<endl;
	                ImpArreglo(array2,Grado,Grado); //Impresion del arreglo 2
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
	
	        case 51: //Llenar espacios del arreglo
	           	cout<<"Llenando los espacios de los arreglos..."<<endl;
	                Windows();
	            cout<<"Los espacios de tus arreglos han sido modificados correctamente"<<endl;
	            cout<<""<<endl;
	            RellenarArreglo(array,Grado,Grado); //Rellenar arreglo 1
	            RellenarArreglo(array2,Grado,Grado); //Rellenar arreglo 2
	            Op2:
					cout<<"Arreglo 1:" <<endl;
					ImpArreglo(array,Grado,Grado); //Impresion del arreglo 1
					cout<<"Arreglo 2:" <<endl;
					ImpArreglo(array2,Grado,Grado); //Impresion del arreglo 2
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
	
	        case 52: //Sumatoria de los arreglos
	            cout<<"Sumando los arreglos..."<<endl;
	                Windows();
	            Op4:
					cout<<"Los arreglos se han sumado corretamente"<<endl;
					SumarArreglos(array,Grado,Grado,array2,arrayR); //Suma de los arreglos
					cout<<"Arreglo 1:" <<endl;
					ImpArreglo(array,Grado,Grado); //Impresion del arreglo 1
					cout<<"Arreglo 2:" <<endl;
					ImpArreglo(array2,Grado,Grado); //Impresion del arreglo 2
					cout<<"Arreglo resultante de la sumatoria:" <<endl;
					ImpArreglo(arrayR,Grado,Grado); //Impresion del arreglo resultante
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

			case 53: //Resta de los arreglos
	            cout<<"Restando los arreglos..."<<endl;
	                Windows();
	            Op5:
					cout<<"Los arreglos se han restado corretamente"<<endl;
					RestarArreglos(array,Grado,Grado,array2,arrayR); //Resta de los arreglos
					cout<<"Arreglo 1:" <<endl;
					ImpArreglo(array,Grado,Grado); //Impresion del arreglo 1
					cout<<"Arreglo 2:" <<endl;
					ImpArreglo(array2,Grado,Grado); //Impresion del arreglo 2
					cout<<"Arreglo resultante de la resta:" <<endl;
					ImpArreglo(arrayR,Grado,Grado); //Impresion del arreglo resultante
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
								goto Op5;
							}
			break;

			case 54: //Division de los arreglos
                cout<<"Dividiendo los arreglos..."<<endl;
	                Windows();
	            Op6:
					cout<<"Los arreglos se han dividido corretamente"<<endl;
					DividirArreglos(array,Grado,Grado,array2,arrayR); //Resta de los arreglos
					cout<<"Arreglo 1:" <<endl;
					ImpArreglo(array,Grado,Grado); //Impresion del arreglo 1
					cout<<"Arreglo 2:" <<endl;
					ImpArreglo(array2,Grado,Grado); //Impresion del arreglo 2
					cout<<"Arreglo resultante de la division:" <<endl;
					ImpArregloDecimales(arrayR,Grado,Grado); //Impresion del arreglo resultante
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
								goto Op6;
							}
			break;

			case 55: //Multiplicacion de los arreglos
                cout<<"Multiplicando los arreglos..."<<endl;
                Windows();
                Op7:
					cout<<"Los arreglos se han multiplicado correctamente"<<endl;
					MultiplicarArreglos(array,Grado,Grado,array2,arrayR); //Suma de los arreglos
					cout<<"Arreglo 1:" <<endl;
					ImpArreglo(array,Grado,Grado); //Impresion del arreglo 1
					cout<<"Arreglo 2:" <<endl;
					ImpArreglo(array2,Grado,Grado); //Impresion del arreglo 2
					cout<<"Arreglo resultante de la sumatoria:" <<endl;
					ImpArreglo(arrayR,Grado,Grado); //Impresion del arreglo resultante
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
								goto Op7;
							}
			break;

			case 56: //Borrar el arreglo 
	        cout<<"Borrando los espacios de los arreglos..."<<endl;
	            Windows();
	        cout<<"Los espacios de tus arreglos han sido borrados correctamente"<<endl;
	        cout<<""<<endl;
	        BorrarArreglo(array,Grado,Grado); //Borrar arreglo 1
	        BorrarArreglo(array2,Grado,Grado); //Borrar arreglo 2
	        Op3:
	            cout<<"Arreglo 1:" <<endl;
	            ImpArreglo(array,Grado,Grado); //Impresion del arreglo 1
	            cout<<"Arreglo 2:" <<endl;
	            ImpArreglo(array2,Grado,Grado); //Impresion del arreglo 2
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

	        case 57: //Salir del programa 
	            cout<<"Saliendo del programa..." <<endl;
	            	Windows();
	            cout<<"Gracias por usar el programa!" <<endl;
	            	exit(EXIT_SUCCESS); 
	        break;
			
	        default:
	        Predeterminado();
	        goto Menu;
	        break;

		} //Fin del switch
	} //Fin de if 
	else{
		system("cls");
		cout<<"Ingrese un digito entre 2 y 10..." <<endl;
			Windows();
		goto Bienvenida;
	} //Fin de else 
return 0;
} //Fin de main