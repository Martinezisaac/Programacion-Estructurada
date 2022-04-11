#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;

//FUNCIONES

void gotoxy(int x,int y){
      HANDLE hcon;
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD dwPos;
      dwPos.X = x;
      dwPos.Y= y;
      SetConsoleCursorPosition(hcon,dwPos);
} //Fin de la funcion gotoxy

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

void Salir(){
    gotoxy(45,12); cout<<"Saliendo del programa"; Puntos();
    system("cls");
    gotoxy(38,12); cout<<"Usted ha salido correctamente del programa." <<endl;
    exit(EXIT_SUCCESS);
} //Fin de la funcion

void Bienvenida() {
    gotoxy(50,13); cout<<"Cargando juego"; Puntos();
	system("color F0"); //Cambio de fondo y color de letras
	gotoxy(50,13); cout<<"Torres de Hanoi" <<endl; //Texto
	Sleep(2000); //Dormir el programa 2s
	gotoxy(40,15); system("pause"); //Presione una tecla para continuar
	system("cls"); //Borrar pantalla
} //Fin de la funcion Bienvenida

