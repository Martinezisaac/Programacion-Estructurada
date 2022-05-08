#include <iostream>

using namespace std;

#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;

//DECLARACION DE FUNCIONES
//Libreria de Mensajes
void Puntos();
void Windows();
void Predeterminado();
void Salir();
void Cargando();

//FUNCION PARA PAUSAR PUNTOS
void Puntos(){
	cout<<".";
	Sleep(666);
	cout<<".";
	Sleep(666);
	cout<<".";
	Sleep(666);
	system("cls");
} //Fin de la funcion

//FUNCION PARA DORMIR Y RESETEAR PANTALLA
void Windows(){
	Sleep(5000);
	system("cls");
} //Fin de la funcion Windows

//FUNCION DE MENSAJE PREDETERMINADO
void Predeterminado(){ //Funcion de validacion tipo caracter
    cout<<"Ingrese una opcion valida"; Puntos();
    system("cls");
    //goto Op;
} //Fin de la funcion

//FUNCION PARA SALIR DEL PROGRAMA
void Salir(){
    cout<<"Saliendo del programa"; Puntos();
    system("cls");
    cout<<"Usted ha salido correctamente del programa." <<endl;
    exit(EXIT_SUCCESS);
} //Fin de la funcion salir

//FUNCION DE ESPERA "CARGANDO"
void Cargando(){
    cout<<"Cargando"; Puntos();
    system("cls");
} //Fin de la funcion cargando