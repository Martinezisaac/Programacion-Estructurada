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
#include <windows.h>
#include "Act12lib.cpp"

using namespace std;

//VARIABLES GLOBALES
int Gamemode, x, o, ContJ = 0, ContCPU = 0, ContJ1 = 0, ContJ2 = 0, ContC = 0, Val, Acum = 0; //Modo de juego, jugador x, jugador o, contadores
char Menu, CPU, J[100], J1[100], J2[100]; //Insertar Jugadores
char Gato[3][3] = {{0}}; //Matriz de 3 Columnas y 3 filas

//FUNCIONES GLOBALES
void Tablero(){ //IMPRESION MANUAL DEL TABLERO
    gotoxy(42,9); cout<<"           |" <<"           |" <<endl;
    gotoxy(42,10); cout<<"     " <<Gato[0][0] <<"     |" <<"     " <<Gato[0][1] <<"     |" <<"     " <<Gato[0][2] <<"     " <<endl;
    gotoxy(42,11); cout<<"___________|" <<"___________|" <<"___________"<<endl;

    gotoxy(42,12); cout<<"           |" <<"           |" <<endl;
    gotoxy(42,13); cout<<"     " <<Gato[1][0] <<"     |" <<"     " <<Gato[1][1] <<"     |" <<"     " <<Gato[1][2] <<"     " <<endl;
    gotoxy(42,14); cout<<"___________|" <<"___________|" <<"___________"<<endl;

    gotoxy(42,15); cout<<"           |" <<"           |" <<endl;
    gotoxy(42,16); cout<<"     " <<Gato[2][0] <<"     |" <<"     " <<Gato[2][1] <<"     |" <<"     " <<Gato[2][2] <<"     " <<endl;
    gotoxy(42,17); cout<<"           |" <<"           |" <<endl;     cout<<"\n\n";
} //Fin de la funcion para mostrar tablero

void MiniMenu(){ //IMPRESION DE UN MINIMNEU (POSICIONES DEL TABLERO Y MARCADOR GLOBAL (1VS1))
    gotoxy(0,0);cout<<"MARCADOR" <<endl;
    gotoxy(0,1);cout<<J1 <<": " <<ContJ1; //Victorias de J1
    gotoxy(0,2);cout<<J2 <<": " <<ContJ2; //Victorias de J2
    Posiciones(); //Guia para el jugador
} //Fin de mini menu

void MiniMenu1VS1(){ //IMPRESION DE UN MINIMNEU (POSICIONES DEL TABLERO Y MARCADOR GLOBAL (1VSCPU))
    gotoxy(0,0);cout<<"MARCADOR" <<endl;
    gotoxy(0,1);cout<<J <<": " <<ContJ; //Victorias de J1
    gotoxy(0,2);cout<<"CPU: " <<ContCPU; //Victorias de J2
    Posiciones(); //Guia para el jugador
} //Fin de mini menu

void Reiniciar(){ //REINICIAR TABLERO DE JUEGO
    Gato[0][0] = ' '; Gato[0][1] = ' '; Gato[0][2] = ' '; Gato[1][0] = ' '; Gato[1][1] = ' '; Gato[1][2] = ' '; Gato[2][0] = ' '; Gato[2][1] = ' '; Gato[2][2] = ' ';
} //Fin de la funcion reiniciar tablero

int main(){
system("cls");

    Bienvenida();

    Menu:
    gotoxy(46,10); cout<<"Seleccione un modo de juego: \n" <<endl;
    gotoxy(46,12);cout<<"[1] - Un Jugador" <<endl;
    gotoxy(46,13);cout<<"[2] - Dos Jugadores" <<endl;
    gotoxy(46,14);cout<<"[3] - Salir del juego" <<endl;
    gotoxy(46,16);cout<<"Seleccion: ";
    cin>> Gamemode;
    system("cls");

    switch (Gamemode){
        case 1: //Un jugador (Contra la computadora)
        Cargando();
        Reiniciar(); //Reiniciar tablero
        ContJ1 = 0; ContC = 0; //Reiniciar contadores

        //PEDIR NOMBRE DE JUGADOR
        gotoxy(49,13); cout<<"[x] JUGADOR: ";
        fflush(stdin); gets(J); //Jugador 1
        system("cls");

        //JUGAR AL JUEGO DEL GATO
            JuegoNuevo:
            Reiniciar(); //Reiniciar posiciones
            Tablero(); //Mostrar tablero de juego

            Jugadas1VS1: //Ciclo

            //TURNO DE J
            Jugador:
            system("cls");
            MiniMenu1VS1();
            Tablero();
            gotoxy(49,20); cout<<"[x] Jugada de " <<J <<": ";
            cin>>x;

                switch(x){
                    case 1:
                        if (Gato[0][0] == 'o'){
                            PosOcupado(); goto Jugador;
                        } //Fin de la validacion si las posiciones son diferentes
                        else if(Gato[0][0] == 'x'){
                            PosOcupado(); goto Jugador;
                        } //Fin de la validacion si las posiciones son iguales
                        else{
                            Gato[0][0] = 'x';
                        } //Fin del turno de J1
                    break;

                    case 2:
                        if (Gato[0][1] == 'o'){
                            PosOcupado(); goto Jugador;
                        } //Fin de la validacion si las posiciones son diferentes
                        else if(Gato[0][1] == 'x'){
                            PosOcupado(); goto Jugador;
                        } //Fin de la validacion si las posiciones son iguales
                        else{
                            Gato[0][1] = 'x';
                        } //Fin del turno de J1
                    break;

                    case 3:
                        if (Gato[0][2] == 'o'){
                            PosOcupado(); goto Jugador;
                        } //Fin de la validacion si las posiciones son diferentes
                        else if(Gato[0][2] == 'x'){
                            PosOcupado(); goto Jugador;
                        } //Fin de la validacion si las posiciones son iguales
                        else{
                            Gato[0][2] = 'x';
                        } //Fin del turno de J1
                    break;

                    case 4:
                        if (Gato[1][0] == 'o'){
                            PosOcupado(); goto Jugador;
                        } //Fin de la validacion si las posiciones son diferentes
                        else if(Gato[1][0] == 'x'){
                            PosOcupado(); goto Jugador;
                        } //Fin de la validacion si las posiciones son iguales
                        else{
                            Gato[1][0] = 'x';
                        } //Fin del turno de J1
                    break;

                    case 5:
                        if (Gato[1][1] == 'o'){
                            PosOcupado(); goto Jugador;
                        } //Fin de la validacion si las posiciones son diferentes
                        else if(Gato[1][1] == 'x'){
                            PosOcupado(); goto Jugador;
                        } //Fin de la validacion si las posiciones son iguales
                        else{
                            Gato[1][1] = 'x';
                        } //Fin del turno de J1
                    break;

                    case 6:
                        if (Gato[1][2] == 'o'){
                            PosOcupado(); goto Jugador;
                        } //Fin de la validacion si las posiciones son diferentes
                        else if(Gato[1][2] == 'x'){
                            PosOcupado(); goto Jugador;
                        } //Fin de la validacion si las posiciones son iguales
                        else{
                            Gato[1][2] = 'x';
                        } //Fin del turno de J1
                    break;

                    case 7:
                        if (Gato[2][0] == 'o'){
                            PosOcupado(); goto Jugador;
                        } //Fin de la validacion si las posiciones son diferentes
                        else if(Gato[2][0] == 'x'){
                            PosOcupado(); goto Jugador;
                        } //Fin de la validacion si las posiciones son iguales
                        else{
                            Gato[2][0] = 'x';
                        } //Fin del turno de J1
                    break;

                    case 8:
                        if (Gato[2][1] == 'o'){
                            PosOcupado(); goto Jugador;
                        } //Fin de la validacion si las posiciones son diferentes
                        else if(Gato[2][1] == 'x'){
                            PosOcupado(); goto Jugador;
                        } //Fin de la validacion si las posiciones son iguales
                        else{
                            Gato[2][1] = 'x';
                        } //Fin del turno de J1
                    break;

                    case 9:
                        if (Gato[2][2] == 'o'){
                            PosOcupado(); goto Jugador;
                        } //Fin de la validacion si las posiciones son diferentes
                        else if(Gato[2][2] == 'x'){
                            PosOcupado(); goto Jugador;
                        } //Fin de la validacion si las posiciones son iguales
                        else{
                            Gato[2][2] = 'x';
                        } //Fin del turno de J1
                    break;

                    default:
                        Predeterminado();
                        goto Jugador;
                    break;

                } //Fin de switch "x"
            system("cls");
            MiniMenu1VS1(); //Mostrar Marcador y tablero de posiciones
            Tablero(); //Mostrar la jugada realizada por el jugador

            //VALIDACIONES PARA GANAR (x)
            if(Gato[0][0] == 'x' && Gato[0][1] == 'x' && Gato[0][2] == 'x') { //HORIZONTAL 1, 2, 3
                gotoxy(48,20); cout<<"La victoria es de: " <<J; Puntos(); ContJ++; goto Win;
            } //Fin de opcion 1 horizontal de ganar
            else if(Gato[1][0] == 'x' && Gato[1][1] == 'x' && Gato[1][2] == 'x') { //HORIZONTAL 4, 5, 6
                gotoxy(48,20); cout<<"La victoria es de: " <<J; Puntos(); ContJ++; goto Win;
            } //Fin de opcion 2 horizontal de de ganar
            else if(Gato[2][0] == 'x' && Gato[2][1] == 'x' && Gato[2][2] == 'x') { //HORIZONTAL 7, 8, 9
                gotoxy(48,20); cout<<"La victoria es de: " <<J; Puntos(); ContJ++; goto Win;
            } //Fin de opcion 3 horizontal de de ganar
            else if(Gato[0][0] == 'x' && Gato[1][0] == 'x' && Gato[2][0] == 'x') { //VERTICAL 1, 4, 7
                gotoxy(48,20); cout<<"La victoria es de: " <<J; Puntos(); ContJ++; goto Win;
            } //Fin de opcion 1 vertical de ganar
            else if(Gato[0][1] == 'x' && Gato[1][1] == 'x' && Gato[2][1] == 'x') { //VERTICAL 2, 5, 8
                gotoxy(48,20); cout<<"La victoria es de: " <<J; Puntos(); ContJ++; goto Win;
            } //Fin de opcion 2 vertical de de ganar
            else if(Gato[0][2] == 'x' && Gato[1][2] == 'x' && Gato[2][2] == 'x') { //VERTICAL 3, 6, 9
                gotoxy(48,20); cout<<"La victoria es de: " <<J; Puntos(); ContJ++; goto Win;
            } //Fin de opcion 3 vertical de de ganar
            else if(Gato[0][0] == 'x' && Gato[1][1] == 'x' && Gato[2][2] == 'x') { //DIAGONAL 1, 5, 9
                gotoxy(48,20); cout<<"La victoria es de: " <<J; Puntos(); ContJ++; goto Win;
            } //Fin de opcion 1 diagonal de ganar
            else if(Gato[0][2] == 'x' && Gato[1][1] == 'x' && Gato[2][0] == 'x') { //DIAGONAL 3, 5, 7
                gotoxy(48,20); cout<<"La victoria es de: " <<J; Puntos(); ContJ++; goto Win;
            } //Fin de opcion 2 diagonal de de ganar
            else if(Gato[0][0] != ' ' && Gato[0][1] != ' ' && Gato[0][2] != ' ' && Gato[1][0] != ' ' && Gato[1][1] != ' ' && Gato[1][2] != ' ' && Gato[2][0] != ' ' && Gato[2][1] != ' ' && Gato[2][2] != ' '){
                gotoxy(53,20); cout<<"Empate"; Puntos(); goto Win;
            } // Si cualquiera de las posiciones no tiene niguna espacio y no cumplio las validaciones de victoria, entonces es empate

            //TURNO DE CPU
            CPU:
            system("cls");
            MiniMenu1VS1();
            Tablero();
            o = 1 + rand()%9; //Numero aleatorio entre 1 y 9
            gotoxy(49,20); cout<<"[o] Jugada de CPU: " <<o; Sleep(1500);
            
                switch(o){
                    case 1:
                        if (Gato[0][0] == 'x'){
                            PosOcupado(); goto CPU;
                        } //Fin de la validacion si las posiciones son diferentes
                        else if(Gato[0][0] == 'o'){
                            PosOcupado(); goto CPU;
                        } //Fin de la validacion si las posiciones son iguales
                        else{
                            Gato[0][0] = 'o';
                        } //Fin del turno de J2
                    break;

                    case 2:
                        if (Gato[0][1] == 'x'){
                            PosOcupado(); goto CPU;
                        } //Fin de la validacion si las posiciones son diferentes
                        else if(Gato[0][1] == 'o'){
                            PosOcupado(); goto CPU;
                        } //Fin de la validacion si las posiciones son iguales
                        else{
                            Gato[0][1] = 'o';
                        } //Fin del turno de J2
                    break;

                    case 3:
                        if (Gato[0][2] == 'x'){
                            PosOcupado(); goto CPU;
                        } //Fin de la validacion si las posiciones son diferentes
                        else if(Gato[0][2] == 'o'){
                            PosOcupado(); goto CPU;
                        } //Fin de la validacion si las posiciones son iguales
                        else{
                            Gato[0][2] = 'o';
                        } //Fin del turno de J2
                    break;

                    case 4:
                        if (Gato[1][0] == 'x'){
                            PosOcupado(); goto CPU;
                        } //Fin de la validacion si las posiciones son diferentes
                        else if(Gato[1][0] == 'o'){
                            PosOcupado(); goto CPU;
                        } //Fin de la validacion si las posiciones son iguales
                        else{
                            Gato[1][0] = 'o';
                        } //Fin del turno de J2
                    break;

                    case 5:
                        if (Gato[1][1] == 'x'){
                            PosOcupado(); goto CPU;
                        } //Fin de la validacion si las posiciones son diferentes
                        else if(Gato[1][1] == 'o'){
                            PosOcupado(); goto CPU;
                        } //Fin de la validacion si las posiciones son iguales
                        else{
                            Gato[1][1] = 'o';
                        } //Fin del turno de J2
                    break;

                    case 6:
                        if (Gato[1][2] == 'x'){
                            PosOcupado(); goto CPU;
                        } //Fin de la validacion si las posiciones son diferentes
                        else if(Gato[1][2] == 'o'){
                            PosOcupado(); goto CPU;
                        } //Fin de la validacion si las posiciones son iguales
                        else{
                            Gato[1][2] = 'o';
                        } //Fin del turno de J2
                    break;

                    case 7:
                        if (Gato[2][0] == 'x'){
                            PosOcupado(); goto CPU;
                        } //Fin de la validacion si las posiciones son diferentes
                        else if(Gato[2][0] == 'o'){
                            PosOcupado(); goto CPU;
                        } //Fin de la validacion si las posiciones son iguales
                        else{
                            Gato[2][0] = 'o';
                        } //Fin del turno de J2
                    break;

                    case 8:
                        if (Gato[2][1] == 'x'){
                            PosOcupado(); goto CPU;
                        } //Fin de la validacion si las posiciones son diferentes
                        else if(Gato[2][1] == 'o'){
                            PosOcupado(); goto CPU;
                        } //Fin de la validacion si las posiciones son iguales
                        else{
                            Gato[2][1] = 'o';
                        } //Fin del turno de J2
                    break;

                    case 9:
                        if (Gato[2][2] == 'x'){
                            PosOcupado(); goto CPU;
                        } //Fin de la validacion si las posiciones son diferentes
                        else if(Gato[2][2] == 'o'){
                            PosOcupado(); goto CPU;
                        } //Fin de la validacion si las posiciones son iguales
                        else{
                            Gato[2][2] = 'o';
                        } //Fin del turno de J2
                    break;

                    default:
                        Predeterminado();
                        goto CPU;
                    break;

                } //Fin de switch "o"
            system("cls");
            MiniMenu1VS1(); //Mostrar Marcador y tablero de posiciones
            Tablero(); //Mostrar la jugada realizada por J1

            //VALIDACIONES PARA GANAR (o)
            if(Gato[0][0] == 'o' && Gato[0][1] == 'o' && Gato[0][2] == 'o') { //HORIZONTAL
                gotoxy(48,20); cout<<"La victoria es de: CPU"; Puntos(); ContCPU++; goto Win;
            } //Fin de opcion 1 horizontal de ganar
            else if(Gato[1][0] == 'o' && Gato[1][1] == 'o' && Gato[1][2] == 'o') { //HORIZONTAL
                gotoxy(48,20); cout<<"La victoria es de: CPU"; Puntos(); ContCPU++; goto Win;
            } //Fin de opcion 2 horizontal de de ganar
            else if(Gato[2][0] == 'o' && Gato[2][1] == 'o' && Gato[2][2] == 'o') { //HORIZONTAL
                gotoxy(48,20); cout<<"La victoria es de: CPU"; Puntos(); ContCPU++; goto Win;
            } //Fin de opcion 3 horizontal de de ganar
            else if(Gato[0][0] == 'o' && Gato[1][0] == 'o' && Gato[2][0] == 'o') { //VERTICAL
                gotoxy(48,20); cout<<"La victoria es de: CPU"; Puntos(); ContCPU++; goto Win;
            } //Fin de opcion 1 vertical de ganar
            else if(Gato[0][1] == 'o' && Gato[1][1] == 'o' && Gato[2][1] == 'o') { //VERTICAL
                gotoxy(48,20); cout<<"La victoria es de: CPU"; Puntos(); ContCPU++; goto Win;
            } //Fin de opcion 2 vertical de de ganar
            else if(Gato[0][2] == 'o' && Gato[1][2] == 'o' && Gato[2][2] == 'o') { //VERTICAL
                gotoxy(48,20); cout<<"La victoria es de: CPU"; Puntos(); ContCPU++; goto Win;
            } //Fin de opcion 3 vertical de de ganar
            else if(Gato[0][0] == 'o' && Gato[1][1] == 'o' && Gato[2][2] == 'o') { //DIAGONAL
                gotoxy(48,20); cout<<"La victoria es de: CPU"; Puntos(); ContCPU++; goto Win;
            } //Fin de opcion 1 diagonal de ganar
            else if(Gato[0][2] == 'o' && Gato[1][1] == 'o' && Gato[2][0] == 'o') { //DIAGONAL
                gotoxy(48,20); cout<<"La victoria es de: CPU"; Puntos(); ContCPU++; goto Win;
            } //Fin de opcion 2 diagonal de de ganar
            else if(Gato[0][0] != ' ' && Gato[0][1] != ' ' && Gato[0][2] != ' ' && Gato[1][0] != ' ' && Gato[1][1] != ' ' && Gato[1][2] != ' ' && Gato[2][0] != ' ' && Gato[2][1] != ' ' && Gato[2][2] != ' '){
                gotoxy(53,20); cout<<"Empate"; Puntos(); goto Win;
            }

            goto Jugadas1VS1; //Si no cumple ninguna de las condiciones, entonces repite ciclo

            Win: //PREGUNTAR AL USUARIO SI QUIERE VOLVER A JUGAR O SALIR AL MENU TRAS CADA VICTORIA
                VaJ: //Volver a jugar
                system("cls");
                MiniMenu1VS1();
                Tablero();
                gotoxy(49,20); cout<<"Desea volver a jugar?" <<endl;
                gotoxy(49,21); cout<<"[1] - Volver a jugar" <<endl;
                gotoxy(49,22); cout<<"[2] - Volver al menu" <<endl;
                gotoxy(49,23); cout<<"Seleccion: ";
                cin>>Menu; //Preguntar al usuario
                    if(Menu == 49){ //"S" "s"
                        goto JuegoNuevo;
                    } //Fin de if para volver al menu
                    else if(Menu == 50){ //"N" "n"
                        system("cls");
                        Cargando(); goto Menu;
                    } //Fin de else if para seguir jugando
                    else{
                        Predeterminado(); goto VaJ;
                    } //Fin de else de mensaje predeterminado

        break; //Fin de case 1 (Solo player)

        case 2: //Dos jugadores (1vs1)
        Cargando();
        Reiniciar(); //Reiniciar tablero
        ContJ1 = 0; ContJ2 = 0; //Reiniciar Contadores

            //PEDIR JUGADORES
            gotoxy(48,13); cout<<"[x] JUGADOR 1: ";
            fflush(stdin); gets(J1); //Jugador 1
            gotoxy(48,14); cout<<"[o] JUGADOR 2: ";
            fflush(stdin); gets(J2); //Jugador 2
            system("cls");

            //JUGAR AL JUEGO DEL GATO
            NewGame:
            Reiniciar();
            Tablero(); //Mostrar tablero de juego

            Jugadas: //Ciclo

            //TURNO DE J1
            Jugador1:
            system("cls");
            MiniMenu();
            Tablero();
            gotoxy(49,20); cout<<"[x] Jugada de " <<J1 <<": ";
            cin>>x;
                switch(x){
                    case 1:
                        if (Gato[0][0] == 'o'){
                            PosOcupado(); goto Jugador1;
                        } //Fin de la validacion si las posiciones son diferentes
                        else if(Gato[0][0] == 'x'){
                            PosOcupado(); goto Jugador1;
                        } //Fin de la validacion si las posiciones son iguales
                        else{
                            Gato[0][0] = 'x';
                        } //Fin del turno de J1
                    break;

                    case 2:
                        if (Gato[0][1] == 'o'){
                            PosOcupado(); goto Jugador1;
                        } //Fin de la validacion si las posiciones son diferentes
                        else if(Gato[0][1] == 'x'){
                            PosOcupado(); goto Jugador1;
                        } //Fin de la validacion si las posiciones son iguales
                        else{
                            Gato[0][1] = 'x';
                        } //Fin del turno de J1
                    break;

                    case 3:
                        if (Gato[0][2] == 'o'){
                            PosOcupado(); goto Jugador1;
                        } //Fin de la validacion si las posiciones son diferentes
                        else if(Gato[0][2] == 'x'){
                            PosOcupado(); goto Jugador1;
                        } //Fin de la validacion si las posiciones son iguales
                        else{
                            Gato[0][2] = 'x';
                        } //Fin del turno de J1
                    break;

                    case 4:
                        if (Gato[1][0] == 'o'){
                            PosOcupado(); goto Jugador1;
                        } //Fin de la validacion si las posiciones son diferentes
                        else if(Gato[1][0] == 'x'){
                            PosOcupado(); goto Jugador1;
                        } //Fin de la validacion si las posiciones son iguales
                        else{
                            Gato[1][0] = 'x';
                        } //Fin del turno de J1
                    break;

                    case 5:
                        if (Gato[1][1] == 'o'){
                            PosOcupado(); goto Jugador1;
                        } //Fin de la validacion si las posiciones son diferentes
                        else if(Gato[1][1] == 'x'){
                            PosOcupado(); goto Jugador1;
                        } //Fin de la validacion si las posiciones son iguales
                        else{
                            Gato[1][1] = 'x';
                        } //Fin del turno de J1
                    break;

                    case 6:
                        if (Gato[1][2] == 'o'){
                            PosOcupado(); goto Jugador1;
                        } //Fin de la validacion si las posiciones son diferentes
                        else if(Gato[1][2] == 'x'){
                            PosOcupado(); goto Jugador1;
                        } //Fin de la validacion si las posiciones son iguales
                        else{
                            Gato[1][2] = 'x';
                        } //Fin del turno de J1
                    break;

                    case 7:
                        if (Gato[2][0] == 'o'){
                            PosOcupado(); goto Jugador1;
                        } //Fin de la validacion si las posiciones son diferentes
                        else if(Gato[2][0] == 'x'){
                            PosOcupado(); goto Jugador1;
                        } //Fin de la validacion si las posiciones son iguales
                        else{
                            Gato[2][0] = 'x';
                        } //Fin del turno de J1
                    break;

                    case 8:
                        if (Gato[2][1] == 'o'){
                            PosOcupado(); goto Jugador1;
                        } //Fin de la validacion si las posiciones son diferentes
                        else if(Gato[2][1] == 'x'){
                            PosOcupado(); goto Jugador1;
                        } //Fin de la validacion si las posiciones son iguales
                        else{
                            Gato[2][1] = 'x';
                        } //Fin del turno de J1
                    break;

                    case 9:
                        if (Gato[2][2] == 'o'){
                            PosOcupado(); goto Jugador1;
                        } //Fin de la validacion si las posiciones son diferentes
                        else if(Gato[2][2] == 'x'){
                            PosOcupado(); goto Jugador1;
                        } //Fin de la validacion si las posiciones son iguales
                        else{
                            Gato[2][2] = 'x';
                        } //Fin del turno de J1
                    break;

                    default:
                        Predeterminado();
                        goto Jugador1;
                    break;

                } //Fin de switch "x"
            system("cls");
            MiniMenu(); //Mostrar Marcador y tablero de posiciones
            Tablero(); //Mostrar la jugada realizada por J1

            //VALIDACIONES PARA GANAR (x)
            if(Gato[0][0] == 'x' && Gato[0][1] == 'x' && Gato[0][2] == 'x') { //HORIZONTAL
                gotoxy(48,20); cout<<"La victoria es de: " <<J1; Puntos(); ContJ1++; goto Victoria;
            } //Fin de opcion 1 horizontal de ganar
            else if(Gato[1][0] == 'x' && Gato[1][1] == 'x' && Gato[1][2] == 'x') { //HORIZONTAL
                gotoxy(48,20); cout<<"La victoria es de: " <<J1; Puntos(); ContJ1++; goto Victoria;
            } //Fin de opcion 2 horizontal de de ganar
            else if(Gato[2][0] == 'x' && Gato[2][1] == 'x' && Gato[2][2] == 'x') { //HORIZONTAL
                gotoxy(48,20); cout<<"La victoria es de: " <<J1; Puntos(); ContJ1++; goto Victoria;
            } //Fin de opcion 3 horizontal de de ganar
            else if(Gato[0][0] == 'x' && Gato[1][0] == 'x' && Gato[2][0] == 'x') { //VERTICAL
                gotoxy(48,20); cout<<"La victoria es de: " <<J1; Puntos(); ContJ1++; goto Victoria;
            } //Fin de opcion 1 vertical de ganar
            else if(Gato[0][1] == 'x' && Gato[1][1] == 'x' && Gato[2][1] == 'x') { //VERTICAL
                gotoxy(48,20); cout<<"La victoria es de: " <<J1; Puntos(); ContJ1++; goto Victoria;
            } //Fin de opcion 2 vertical de de ganar
            else if(Gato[0][2] == 'x' && Gato[1][2] == 'x' && Gato[2][2] == 'x') { //VERTICAL
                gotoxy(48,20); cout<<"La victoria es de: " <<J1; Puntos(); ContJ1++; goto Victoria;
            } //Fin de opcion 3 vertical de de ganar
            else if(Gato[0][0] == 'x' && Gato[1][1] == 'x' && Gato[2][2] == 'x') { //DIAGONAL
                gotoxy(48,20); cout<<"La victoria es de: " <<J1; Puntos(); ContJ1++; goto Victoria;
            } //Fin de opcion 1 diagonal de ganar
            else if(Gato[0][2] == 'x' && Gato[1][1] == 'x' && Gato[2][0] == 'x') { //DIAGONAL
                gotoxy(48,20); cout<<"La victoria es de: " <<J1; Puntos(); ContJ1++; goto Victoria;
            } //Fin de opcion 2 diagonal de de ganar
            else if(Gato[0][0] != ' ' && Gato[0][1] != ' ' && Gato[0][2] != ' ' && Gato[1][0] != ' ' && Gato[1][1] != ' ' && Gato[1][2] != ' ' && Gato[2][0] != ' ' && Gato[2][1] != ' ' && Gato[2][2] != ' '){
                gotoxy(53,20); cout<<"Empate"; Puntos(); goto Victoria;
            }

            //TURNO DE J2
            Jugador2:
            system("cls");
            MiniMenu();
            Tablero();
            gotoxy(49,20); cout<<"[o] Jugada de " <<J2 <<": ";
            cin>>o;
                switch(o){
                    case 1:
                        if (Gato[0][0] == 'x'){
                            PosOcupado(); goto Jugador2;
                        } //Fin de la validacion si las posiciones son diferentes
                        else if(Gato[0][0] == 'o'){
                            PosOcupado(); goto Jugador2;
                        } //Fin de la validacion si las posiciones son iguales
                        else{
                            Gato[0][0] = 'o';
                        } //Fin del turno de J2
                    break;

                    case 2:
                        if (Gato[0][1] == 'x'){
                            PosOcupado(); goto Jugador2;
                        } //Fin de la validacion si las posiciones son diferentes
                        else if(Gato[0][1] == 'o'){
                            PosOcupado(); goto Jugador2;
                        } //Fin de la validacion si las posiciones son iguales
                        else{
                            Gato[0][1] = 'o';
                        } //Fin del turno de J2
                    break;

                    case 3:
                        if (Gato[0][2] == 'x'){
                            PosOcupado(); goto Jugador2;
                        } //Fin de la validacion si las posiciones son diferentes
                        else if(Gato[0][2] == 'o'){
                            PosOcupado(); goto Jugador2;
                        } //Fin de la validacion si las posiciones son iguales
                        else{
                            Gato[0][2] = 'o';
                        } //Fin del turno de J2
                    break;

                    case 4:
                        if (Gato[1][0] == 'x'){
                            PosOcupado(); goto Jugador2;
                        } //Fin de la validacion si las posiciones son diferentes
                        else if(Gato[1][0] == 'o'){
                            PosOcupado(); goto Jugador2;
                        } //Fin de la validacion si las posiciones son iguales
                        else{
                            Gato[1][0] = 'o';
                        } //Fin del turno de J2
                    break;

                    case 5:
                        if (Gato[1][1] == 'x'){
                            PosOcupado(); goto Jugador2;
                        } //Fin de la validacion si las posiciones son diferentes
                        else if(Gato[1][1] == 'o'){
                            PosOcupado(); goto Jugador2;
                        } //Fin de la validacion si las posiciones son iguales
                        else{
                            Gato[1][1] = 'o';
                        } //Fin del turno de J2
                    break;

                    case 6:
                        if (Gato[1][2] == 'x'){
                            PosOcupado(); goto Jugador2;
                        } //Fin de la validacion si las posiciones son diferentes
                        else if(Gato[1][2] == 'o'){
                            PosOcupado(); goto Jugador2;
                        } //Fin de la validacion si las posiciones son iguales
                        else{
                            Gato[1][2] = 'o';
                        } //Fin del turno de J2
                    break;

                    case 7:
                        if (Gato[2][0] == 'x'){
                            PosOcupado(); goto Jugador2;
                        } //Fin de la validacion si las posiciones son diferentes
                        else if(Gato[2][0] == 'o'){
                            PosOcupado(); goto Jugador2;
                        } //Fin de la validacion si las posiciones son iguales
                        else{
                            Gato[2][0] = 'o';
                        } //Fin del turno de J2
                    break;

                    case 8:
                        if (Gato[2][1] == 'x'){
                            PosOcupado(); goto Jugador2;
                        } //Fin de la validacion si las posiciones son diferentes
                        else if(Gato[2][1] == 'o'){
                            PosOcupado(); goto Jugador2;
                        } //Fin de la validacion si las posiciones son iguales
                        else{
                            Gato[2][1] = 'o';
                        } //Fin del turno de J2
                    break;

                    case 9:
                        if (Gato[2][2] == 'x'){
                            PosOcupado(); goto Jugador2;
                        } //Fin de la validacion si las posiciones son diferentes
                        else if(Gato[2][2] == 'o'){
                            PosOcupado(); goto Jugador2;
                        } //Fin de la validacion si las posiciones son iguales
                        else{
                            Gato[2][2] = 'o';
                        } //Fin del turno de J2
                    break;

                    default:
                        Predeterminado();
                        goto Jugador2;
                    break;

                } //Fin de switch "o"
            system("cls");
            MiniMenu(); //Mostrar Marcador y tablero de posiciones
            Tablero(); //Mostrar la jugada realizada por J1

            //VALIDACIONES PARA GANAR (o)
            if(Gato[0][0] == 'o' && Gato[0][1] == 'o' && Gato[0][2] == 'o') { //HORIZONTAL
                gotoxy(48,20); cout<<"La victoria es de: " <<J2; Puntos(); ContJ2++; goto Victoria;
            } //Fin de opcion 1 horizontal de ganar
            else if(Gato[1][0] == 'o' && Gato[1][1] == 'o' && Gato[1][2] == 'o') { //HORIZONTAL
                gotoxy(48,20); cout<<"La victoria es de: " <<J2; Puntos(); ContJ2++; goto Victoria;
            } //Fin de opcion 2 horizontal de de ganar
            else if(Gato[2][0] == 'o' && Gato[2][1] == 'o' && Gato[2][2] == 'o') { //HORIZONTAL
                gotoxy(48,20); cout<<"La victoria es de: " <<J2; Puntos(); ContJ2++; goto Victoria;
            } //Fin de opcion 3 horizontal de de ganar
            else if(Gato[0][0] == 'o' && Gato[1][0] == 'o' && Gato[2][0] == 'o') { //VERTICAL
                gotoxy(48,20); cout<<"La victoria es de: " <<J2; Puntos(); ContJ2++; goto Victoria;
            } //Fin de opcion 1 vertical de ganar
            else if(Gato[0][1] == 'o' && Gato[1][1] == 'o' && Gato[2][1] == 'o') { //VERTICAL
                gotoxy(48,20); cout<<"La victoria es de: " <<J2; Puntos(); ContJ2++; goto Victoria;
            } //Fin de opcion 2 vertical de de ganar
            else if(Gato[0][2] == 'o' && Gato[1][2] == 'o' && Gato[2][2] == 'o') { //VERTICAL
                gotoxy(48,20); cout<<"La victoria es de: " <<J2; Puntos(); ContJ2++; goto Victoria;
            } //Fin de opcion 3 vertical de de ganar
            else if(Gato[0][0] == 'o' && Gato[1][1] == 'o' && Gato[2][2] == 'o') { //DIAGONAL
                gotoxy(48,20); cout<<"La victoria es de: " <<J2; Puntos(); ContJ2++; goto Victoria;
            } //Fin de opcion 1 diagonal de ganar
            else if(Gato[0][2] == 'o' && Gato[1][1] == 'o' && Gato[2][0] == 'o') { //DIAGONAL
                gotoxy(48,20); cout<<"La victoria es de: " <<J2; Puntos(); ContJ2++; goto Victoria;
            } //Fin de opcion 2 diagonal de de ganar
            else if(Gato[0][0] != ' ' && Gato[0][1] != ' ' && Gato[0][2] != ' ' && Gato[1][0] != ' ' && Gato[1][1] != ' ' && Gato[1][2] != ' ' && Gato[2][0] != ' ' && Gato[2][1] != ' ' && Gato[2][2] != ' '){
                gotoxy(53,20); cout<<"Empate"; Puntos(); goto Victoria;
            }

            goto Jugadas; //Si no cumple ninguna de las condiciones, entonces repite ciclo

            Victoria: //PREGUNTAR AL USUARIO SI QUIERE VOLVER A JUGAR O SALIR AL MENU TRAS CADA VICTORIA
                VaJ1: //Volver a jugar 1
                system("cls");
                MiniMenu();
                Tablero();
                gotoxy(49,20); cout<<"Desea volver a jugar?" <<endl;
                gotoxy(49,21); cout<<"[1] - Volver a jugar" <<endl;
                gotoxy(49,22); cout<<"[2] - Volver al menu" <<endl;
                gotoxy(49,23); cout<<"Seleccion: ";
                cin>>Menu; //Preguntar al usuario
                    if(Menu == 49){ //"S" "s"
                        goto NewGame;
                    } //Fin de if para volver al menu
                    else if(Menu == 50){ //"N" "n"
                        system("cls");
                        Cargando(); goto Menu;
                    } //Fin de else if para seguir jugando
                    else{
                        Predeterminado(); goto VaJ1;
                    } //Fin de else de mensaje predeterminado

        break; //Fin de case 2 (Multijugador)

        case 3:
            Salir();
        break; //Fin de case 3 (Salir del juego)

        default: //Mensaje predeterminado
            PredeterminadoMenu();
            goto Menu;
        break;

    } //Fin de switch modo de juego

return 0;
} //Fin de main
