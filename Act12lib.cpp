/********************PRESENTACION*******************************

NOMBRE: Isaac Martinez
FECHA: 25/Abril/2022
PROGRAMA: Actividad de programacion 12
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Realizar un programa que tenga las siguientes caracteristicas:
            -Realizar el juego del Gato
            -Pedir el nombre de cada jugador / computadora
            -Con la posibilidad de jugar contra la computadora o contra otro usuario
            -Contabilizar las partidas ganadas por jugador
            -Crea tus propias funciones o librerias

**************************************************************/

#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;

//FUNCIONES

//FUNCION GOTOXY
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

//FUNCION PARA DAR BIENVENIDA AL USUARIO
void Bienvenida() {
    gotoxy(49,13); cout<<"Cargando juego"; Puntos();
	system("color F0"); //Cambio de fondo y color de letras
	gotoxy(47,10); cout<<"JUEGO DEL" <<endl;
    gotoxy(47,11); cout<<"####  ####  ####  ####" <<endl;
    gotoxy(47,12); cout<<"#     #  #   ##   #  #" <<endl;
    gotoxy(47,13); cout<<"# ##  ####   ##   #  #" <<endl;
    gotoxy(47,14); cout<<"#  #  #  #   ##   #  #" <<endl;
    gotoxy(47,15); cout<<"####  #  #   ##   ####" <<endl;
	Sleep(2000); //Dormir el programa 2s
	gotoxy(42,20); system("pause"); //Presione una tecla para continuar
	system("cls"); //Borrar pantalla
} //Fin de la funcion Bienvenida

//FUNCION PARA DORMIR Y RESETEAR PANTALLA
void Windows(){
	Sleep(5000);
	system("cls");
} //Fin de la funcion Windows

//FUNCION DE MENSAJE PREDETERMINADO
void Predeterminado(){ //Funcion de validacion tipo caracter
    gotoxy(48,20);cout<<"Ingrese una opcion valida"; Puntos();
    system("cls");
    //goto Op;
} //Fin de la funcion

//FUNCION DE MENSAJE PREDETERMINADO PARA MENUS
void PredeterminadoMenu(){ //Funcion de validacion tipo caracter
    gotoxy(48,13);cout<<"Ingrese una opcion valida"; Puntos();
    system("cls");
    //goto Op;
} //Fin de la funcion

//FUNCION PARA SALIR DEL PROGRAMA
void Salir(){
    gotoxy(45,12); cout<<"Saliendo del programa"; Puntos();
    system("cls");
    gotoxy(38,12); cout<<"Usted ha salido correctamente del programa." <<endl;
    exit(EXIT_SUCCESS);
} //Fin de la funcion

//FUNCION DE ESPERA "CARGANDO"
void Cargando(){
    gotoxy(52,13); cout<<"Cargando"; Puntos();
    system("cls");
} //Fin de la funcion cargando

//POSICIONES DEL JUEGO DEL GATO
void Posiciones() {
    gotoxy(108,0); cout<<"_1_|_2_|_3_" <<endl;
    gotoxy(108,1); cout<<"_4_|_5_|_6_" <<endl;
    gotoxy(108,2); cout<<" 7 | 8 | 9 " <<endl;
} //Fin de la interfaz

//MENSAJE PREDETERMINADO DE POSICION OCUPADA
void PosOcupado(){
    gotoxy(48,20); cout<<"La posicion esta ocupada"; Puntos();
    system("cls");
} //Fin de la funcion posicion ocupada