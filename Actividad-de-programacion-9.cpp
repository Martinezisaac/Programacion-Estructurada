/********************PRESENTACION*******************************

NOMBRE: Isaac Martinez
FECHA: 05/Abril/2022
PROGRAMA: Actividad de programacion 9
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Realizar un programa con las siguientes caracterisiticas
			-Directorio con datos personales de los companeros del salon 
			-Datos: Nombre, Apellidos, Ciudad, Estado, Municipio, Calle, Edad, Estatura en cm
			-Solicitar datos de 5 companeros
			-Realizar una buena presentacion

**************************************************************/
#include <iostream>
#include <windows.h>
#include "Act9lib.cpp"

using namespace std;

//VARIABLES GLOBALES
int Menu, MenuPerfil, Perfiles, Mostrar, Regresar;

//FUNCIONES
void Windows();
void Predeterminado();
void Salir();
void LlenarPerfil(int V);
void MostrarPerfil (int V);

int main(){
	system("cls");
	cout<<"Bienvenido Usuario\n" <<endl;
	Windows();

		directorio:
		cout<<"Directorio de datos: \n" <<endl;
		cout<<"[1] Ingresar Informacion en los Perfiles" <<endl;
		cout<<"[2] Mostrar Informacion de los Perfiles" <<endl;
		cout<<"[3] Salir del Programa\n" <<endl;
		cout<<"Seleccion: ";
		cin>>Menu;
		system("cls");

			switch(Menu){
				case 1: //Ingresar informacion en los perfiles
				cout<<"Cargando proceso"; Puntos();
					perfiles:
					cout<<"Seleccione el perfil en el que desea guardar informacion: \n" <<endl;
					cout<<"[1] Perfil 1" <<endl;
					cout<<"[2] Perfil 2" <<endl;
					cout<<"[3] Perfil 3" <<endl;
					cout<<"[4] Perfil 4" <<endl;
					cout<<"[5] Perfil 5" <<endl;
					cout<<"[6] Volver al directorio de datos\n" <<endl;
					cout<<"Seleccion: ";
					cin>>Perfiles;
					system("cls");

						if(Perfiles >= 7){
							Predeterminado();
							goto perfiles;
						} //Fin de if
						else{
							switch(Perfiles){

								case 1: //Ingresar datos del perfil 1
									cout<<"Ingresando al perfil 1"; Puntos();
									LlenarPerfil(Perfiles);
									goto perfiles;
								break;

								case 2: //Ingresar datos del perfil 2
									cout<<"Ingresando al perfil 2"; Puntos();
									LlenarPerfil(Perfiles);
									goto perfiles;
								break;

								case 3: //Ingresar datos del perfil 3
									cout<<"Ingresando al perfil 3"; Puntos();
									LlenarPerfil(Perfiles);
									goto perfiles;
								break;

								case 4: //Ingresar datos del perfil 4
									cout<<"Ingresando al perfil 4"; Puntos();
									LlenarPerfil(Perfiles);
									goto perfiles;
								break;

								case 5: //Ingresar datos del perfil 5
									cout<<"Ingresando al perfil 5"; Puntos();
									LlenarPerfil(Perfiles);
									goto perfiles;
								break;

								case 6:
									cout<<"Regresando al directorio principal"; Puntos();
									goto directorio;
								break;

								default: //Mensaje predeterminado
									Predeterminado();
									goto perfiles;
								break;
							} //Fin de Switch
						} //Fin de else 
				break;

				case 2: //Informacion de los perfiles
					cout<<"Cargando informacion"; Puntos();
					mostrar:
					cout<<"Informacion de los perfiles \n" <<endl;
						MostrarInfo();
						cout<<"[6] - Mostrar todos los perfiles" <<endl;
						cout<<"[7] - Volver al directorio de datos\n" <<endl;
					cout<<"Seleccion: ";
						cin>>Mostrar;
						system("cls");

							if(Mostrar >= 8){
								Predeterminado();
								goto mostrar;
							} //Fin de if
							else{
								switch(Mostrar){

									case 1: //Informacion del perfil 1
										cout<<"Cargando Informacion"; Puntos();
										P1:
										MostrarPerfil(Mostrar);
										cout<<"[1] - Regresar" <<endl;
										cin>>Regresar;
										system("cls");
											if(Regresar == 1){
												system("cls");
												goto mostrar;
											} //Fin de if
											else{
												Predeterminado();
												goto P1;
											} //Fin de else
									break;

									case 2: //Informacion del perfil 2
										cout<<"Cargando Informacion"; Puntos();
										P2:
										MostrarPerfil(Mostrar);
										cout<<"[1] - Regresar" <<endl;
										cin>>Regresar;
										system("cls");
											if(Regresar == 1){
												system("cls");
												goto mostrar;
											} //Fin de if
											else{
												Predeterminado();
												goto P2;
											} //Fin de else
									break;

									case 3: //Informacion del perfil 3
										cout<<"Cargando Informacion"; Puntos();
										P3:
										MostrarPerfil(Mostrar);
										cout<<"[1] - Regresar" <<endl;
										cin>>Regresar;
										system("cls");
											if(Regresar == 1){
												system("cls");
												goto mostrar;
											} //Fin de if
											else{
												Predeterminado();
												goto P3;
											} //Fin de else
									break;

									case 4: //Informacion del perfil 4
										cout<<"Cargando Informacion"; Puntos();
										P4:
										MostrarPerfil(Mostrar);
										cout<<"[1] - Regresar" <<endl;
										cin>>Regresar;
										system("cls");
											if(Regresar == 1){
												system("cls");
												goto mostrar;
											} //Fin de if
											else{
												Predeterminado();
												goto P4;
											} //Fin de else
									break;

									case 5: //Informacion del perfil 5
										cout<<"Cargando Informacion"; Puntos();
										P5:
										MostrarPerfil(Mostrar);
										cout<<"[1] - Regresar" <<endl;
										cin>>Regresar;
										system("cls");
											if(Regresar == 1){
												system("cls");
												goto mostrar;
											} //Fin de if
											else{
												Predeterminado();
												goto P5;
											} //Fin de else
									break;

									case 6: //Mostrar todos los perfiles
										MP:
										MostrarPerfiles(); //Funcion para mostrar todos los perfiles
										cout<<"[1] - Regresar" <<endl;
										cin>>Regresar;
										system("cls");
											if(Regresar == 1){
												system("cls");
												goto mostrar;
											} //Fin de if
											else{
												Predeterminado();
												goto MP;
											} //Fin de else
									break;

									case 7: //Regresar
										cout<<"Regresando al directorio principal"; Puntos();
										goto directorio;
									break;

									default: //Mensaje predeterminado
										Predeterminado();
										goto mostrar;
									break;
								} //Fin de switch
							} //Fin de else	
				break;

				case 3: //Salir del programa
					Salir();
				break;
				
				default:
					Predeterminado(); //Funcion de mensaje predeterminado
					goto directorio;
				break;
			} //Fin de switch 
return 0;
} //Fin de main