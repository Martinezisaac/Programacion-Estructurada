#include <iostream>

using namespace std;

#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;

//LIBRERIA DE MENSAJES
void Puntos();
void Windows();
void Predeterminado();
void Salir();
void Cargando();
void Volver();

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

void Presentacion(){
    system("cls"); //Limpiar pantalla
    system("color F0"); //Cambio de color a la pantalla y fuente del programa

    gotoxy(25,6);  cout<<" ____________________________________________________________________ " <<endl;
    gotoxy(25,7);  cout<<"|                                                                    |" <<endl;
    gotoxy(25,8);  cout<<"|  ####  ####  #     ####  #  #  #     ####  ###   ####  ###   ####  |" <<endl;
    gotoxy(25,9);  cout<<"|  #     #  #  #     #     #  #  #     #  #  #  #  #  #  #  #  #  #  |" <<endl;
    gotoxy(25,10); cout<<"|  #     ####  #     #     #  #  #     ####  #  #  #  #  #  #  ####  |" <<endl;
    gotoxy(25,11); cout<<"|  #     #  #  #     #     #  #  #     #  #  #  #  #  #  ###   #  #  |" <<endl;
    gotoxy(25,12); cout<<"|  #     #  #  #     #     #  #  #     #  #  #  #  #  #  #  #  #  #  |" <<endl;
    gotoxy(25,13); cout<<"|  ####  #  #  ####  ####  ####  ####  #  #  ###   ####  #  #  #  #  |" <<endl;
    gotoxy(25,14); cout<<"|                               Basica, de Distancias y de Unidades  |" <<endl;
    gotoxy(25,15); cout<<"|____________________________________________________________________|" <<endl;

    gotoxy(40,18); Sleep(2500); //Dormir el programa 2.5seg
    system("Pause"); //Pausar el programa hasta que presione una tecla
    system("cls"); //Limpiar pantalla
} //Fin de la presentacion

//FUNCION PARA DORMIR Y RESETEAR PANTALLA
void Windows(){
	Sleep(3000);
	system("cls");
} //Fin de la funcion Windows

//FUNCION PARA VOLVER AL MENU
void VolverMenu(){
    cout<<"Volviendo al Menu"; Puntos();
    system("cls");
    //goto...
} //Fin de la funcion

//FUNCION DE MENSAJE PREDETERMINADO
void Predeterminado(){ //Funcion de validacion tipo caracter
    gotoxy(24,22); cout<<"Ingrese una opcion valida"; Puntos();
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
    gotoxy(52,13); cout<<"Cargando"; Puntos();
    system("cls");
} //Fin de la funcion cargando
