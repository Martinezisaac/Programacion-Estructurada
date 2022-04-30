/********************PRESENTACION*******************************

NOMBRE: Isaac Martinez
FECHA: 29/Abril/2022
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
#include "Act12lib.cpp" //Archivo de funciones

using namespace std;

//VARIABLES GLOBALES
int Gamemode, x, o, ContJ = 0, ContCPU = 0, ContJ1 = 0, ContJ2 = 0, Val, Acum = 0; //Modo de juego, jugador x, jugador o, contadores
char Menu, CPU, J[100], J1[100], J2[100]; //Insertar Jugadores
char Gato[3][3] = {{0}}; //Matriz de 3 Columnas y 3 filas

//FUNCIONES GLOBALES
void Tablero(){ //IMPRESION MANUAL DEL TABLERO DE JUEGO
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

/*La impresion fue hecha manualmente con el objetivo de utilizar gotoxy desde un inicio, imprimir el tablero de juego con un "for"
implica que no podemos usar gotoxy, debido a que mandaria todas las posiciones a una sola coordenada*/

void MiniMenu(){ //IMPRESION DE UN MINI MENU (POSICIONES DEL TABLERO Y MARCADOR GLOBAL
    gotoxy(0,0);cout<<"MARCADOR" <<endl; //Texto para indicar que es un marcador
    gotoxy(0,1);cout<<J1 <<": " <<ContJ1; //Victorias de J1
    gotoxy(0,2);cout<<J2 <<": " <<ContJ2; //Victorias de J2
    Posiciones(); //Guia para el jugador
} //Fin de mini menu

void Reiniciar(){ //REINICIAR TABLERO DE JUEGO
    Gato[0][0] = ' '; Gato[0][1] = ' '; Gato[0][2] = ' '; Gato[1][0] = ' '; Gato[1][1] = ' '; Gato[1][2] = ' '; Gato[2][0] = ' '; Gato[2][1] = ' '; Gato[2][2] = ' ';
} //Fin de la funcion reiniciar tablero

int main(){
system("cls");

    Bienvenida(); //Presentacion del juego

    Menu: //Menu principal del juego del gato
    gotoxy(46,10); cout<<"Seleccione un modo de juego: \n" <<endl;
    gotoxy(46,12);cout<<"[1] - Un Jugador" <<endl;
    gotoxy(46,13);cout<<"[2] - Dos Jugadores" <<endl;
    gotoxy(46,14);cout<<"[3] - Salir del juego" <<endl;
    gotoxy(46,16);cout<<"Seleccion: ";
    cin>> Gamemode;
    system("cls");

    //MODOS DE JUEGO
    switch (Gamemode){
        case 1: //1 Jugador (1vsCPU)
            //PEDIR JUGADORES
            gotoxy(48,13); cout<<"[x] JUGADOR 1: ";
            fflush(stdin); gets(J1); //Nombre de Jugador 1
            gotoxy(48,14); cout<<"[o] CPU: ";
            fflush(stdin); gets(J2); //Nombre de CPU
            system("cls");
            goto case1; //Repetir el algortimo de dos jugadores, pero con valores ya asignados

            /* El algoritmo se repetira en ambos modos de juego, cuando el usuario seleccion el modo de juego "[1] - Un Jugador" 
            se definiran valores ya predeterminados y entonces correra el codigo en el case 2, esto para evitar copiar y pegar el codigo nuevamente en case 1 */

        break;

        case 2: //Dos jugadores (1vs1)
        Cargando(); //Texto en pantalla (animacion casera...)
        Reiniciar(); //Reiniciar tablero
        ContJ1 = 0; ContJ2 = 0; //Reiniciar Contadores

            //PEDIR JUGADORES
            gotoxy(48,13); cout<<"[x] JUGADOR 1: ";
            fflush(stdin); gets(J1); //Nombre de Jugador 1
            gotoxy(48,14); cout<<"[o] JUGADOR 2: ";
            fflush(stdin); gets(J2); //Nombre de Jugador 2
            system("cls");

            case1: //Si el usuario selecciona un jugador, repetira el mismo algoritmo, con los valores asignados en case 1

            //JUGAR AL JUEGO DEL GATO
            NewGame: //Ciclo para iniciar un nuevo juego
            Reiniciar(); //Reiniciar tablero de juego
            Tablero(); //Mostrar tablero de juego

            Jugadas: //Ciclo hasta que exista victoria o empate

            //TURNO DE J1
            Jugador1: //Ciclo de Jugador 1
            system("cls"); //Limpiar pantalla
            MiniMenu(); //Mostrar Marcador y tablero de posiciones
            Tablero(); //Mostrar tablero de juego
            gotoxy(49,20); cout<<"[x] Jugada de " <<J1 <<": ";
            cin>>x; //Jugada seleccionada por J1
                switch(x){
                    case 1:
                        if (Gato[0][0] == 'o' || Gato[0][0] == 'x'){
                            PosOcupado(); goto Jugador1;
                        } //Fin de la validacion si las posiciones son iguales o diferentes
                        else{
                            Gato[0][0] = 'x';
                        } //Fin del turno de J1
                    break;

                    case 2:
                        if (Gato[0][1] == 'o' || Gato[0][1] == 'x'){
                            PosOcupado(); goto Jugador1;
                        } //Fin de la validacion si las posiciones son iguales o diferentes
                        else{
                            Gato[0][1] = 'x';
                        } //Fin del turno de J1
                    break;

                    case 3:
                        if (Gato[0][2] == 'o' || Gato[0][2] == 'x'){
                            PosOcupado(); goto Jugador1;
                        } //Fin de la validacion si las posiciones son iguales o diferentes
                        else{
                            Gato[0][2] = 'x';
                        } //Fin del turno de J1
                    break;

                    case 4:
                        if (Gato[1][0] == 'o' || Gato[1][0] == 'x'){
                            PosOcupado(); goto Jugador1;
                        } //Fin de la validacion si las posiciones son iguales o diferentes
                        else{
                            Gato[1][0] = 'x';
                        } //Fin del turno de J1
                    break;

                    case 5:
                        if (Gato[1][1] == 'o' || Gato[1][1] == 'x'){
                            PosOcupado(); goto Jugador1;
                        } //Fin de la validacion si las posiciones son iguales o diferentes
                        else{
                            Gato[1][1] = 'x';
                        } //Fin del turno de J1
                    break;

                    case 6:
                        if (Gato[1][2] == 'o' || Gato[1][2] == 'x'){
                            PosOcupado(); goto Jugador1;
                        } //Fin de la validacion si las posiciones son iguales o diferentes
                        else{
                            Gato[1][2] = 'x';
                        } //Fin del turno de J1
                    break;

                    case 7:
                        if (Gato[2][0] == 'o' || Gato[2][0] == 'x'){
                            PosOcupado(); goto Jugador1;
                        } //Fin de la validacion si las posiciones son iguales o diferentes
                        else{
                            Gato[2][0] = 'x';
                        } //Fin del turno de J1
                    break;

                    case 8:
                        if (Gato[2][1] == 'o' || Gato[2][1] == 'x'){
                            PosOcupado(); goto Jugador1;
                        } //Fin de la validacion si las posiciones son iguales o diferentes
                        else{
                            Gato[2][1] = 'x';
                        } //Fin del turno de J1
                    break;

                    case 9:
                        if (Gato[2][2] == 'o' || Gato[2][2] == 'x'){
                            PosOcupado(); goto Jugador1;
                        } //Fin de la validacion si las posiciones son iguales o diferentes
                        else{
                            Gato[2][2] = 'x';
                        } //Fin del turno de J1
                    break;

                    default:
                        Predeterminado(); //Mensaje predeterminado
                        goto Jugador1; //Ciclo
                    break;

                } //Fin de switch "x"
            system("cls"); //Limpiar pantalla
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
            } //Fin de la validacion empate

            //TURNO DE J2
            Jugador2:
            system("cls");
            MiniMenu();
            Tablero();
            gotoxy(49,20); cout<<"[o] Jugada de " <<J2 <<": ";
                if(Gamemode == 1){
                    o = 1 + rand()%9; //Numero aleatorio entre 1 y 9
                    cout<<o; //Imprimir la posicion seleccionada por la CPU
                    Sleep(1500);
                } //fin de if
                else{
                    cin>>o; //EL usuario selecciona la casilla que desea
                } //Fin de else
            
                switch(o){
                    case 1:
                        if (Gato[0][0] == 'x' || Gato[0][0] == 'o'){
                            PosOcupado(); goto Jugador2;
                        } //Fin de la validacion si las posiciones son iguales o diferentes
                        else{
                            Gato[0][0] = 'o';
                        } //Fin del turno de J2
                    break;

                    case 2:
                        if (Gato[0][1] == 'x' || Gato[0][1] == 'o'){
                            PosOcupado(); goto Jugador2;
                        } //Fin de la validacion si las posiciones son iguales o diferentes
                        else{
                            Gato[0][1] = 'o';
                        } //Fin del turno de J2
                    break;

                    case 3:
                        if (Gato[0][2] == 'x' || Gato[0][2] == 'o'){
                            PosOcupado(); goto Jugador2;
                        } //Fin de la validacion si las posiciones son iguales o diferentes
                        else{
                            Gato[0][2] = 'o';
                        } //Fin del turno de J2
                    break;

                    case 4:
                        if (Gato[1][0] == 'x' || Gato[1][0] == 'o'){
                            PosOcupado(); goto Jugador2;
                        } //Fin de la validacion si las posiciones son iguales o diferentes
                        else{
                            Gato[1][0] = 'o';
                        } //Fin del turno de J2
                    break;

                    case 5:
                        if (Gato[1][1] == 'x' || Gato[1][1] == 'o'){
                            PosOcupado(); goto Jugador2;
                        } //Fin de la validacion si las posiciones son iguales o diferentes
                        else{
                            Gato[1][1] = 'o';
                        } //Fin del turno de J2
                    break;

                    case 6:
                        if (Gato[1][2] == 'x' || Gato[1][2] == 'o'){
                            PosOcupado(); goto Jugador2;
                        } //Fin de la validacion si las posiciones son iguales o diferentes
                        else{
                            Gato[1][2] = 'o';
                        } //Fin del turno de J2
                    break;

                    case 7:
                        if (Gato[2][0] == 'x' || Gato[2][0] == 'o'){
                            PosOcupado(); goto Jugador2;
                        } //Fin de la validacion si las posiciones son iguales o diferentes
                        else{
                            Gato[2][0] = 'o';
                        } //Fin del turno de J2
                    break;

                    case 8:
                        if (Gato[2][1] == 'x' || Gato[2][1] == 'o'){
                            PosOcupado(); goto Jugador2;
                        } //Fin de la validacion si las posiciones son iguales o diferentes
                        else{
                            Gato[2][1] = 'o';
                        } //Fin del turno de J2
                    break;

                    case 9:
                        if (Gato[2][2] == 'x' || Gato[2][2] == 'o'){
                            PosOcupado(); goto Jugador2;
                        } //Fin de la validacion si las posiciones son iguales o diferentes
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
            } //Fin de la validacion empate

            goto Jugadas; //Si no cumple ninguna de las condiciones, entonces repite ciclo (Jugadas:)

            Victoria: //Si resulta victoria, entonces preguntar al usuario si desea seguir jugando o si quiere volver al menu
                VaJ1: //Volver a jugar 1
                system("cls");
                MiniMenu(); //Mostrar marcador
                Tablero(); //Mostrar tablero de juego
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
            Salir(); //Funcion para salir del programa
        break; //Fin de case 3 (Salir del juego)

        default: //Mensaje predeterminado
            PredeterminadoMenu(); //Funcion de mensaje predeterminado
            goto Menu;
        break;

    } //Fin de switch modo de juego

return 0;
} //Fin de main
