#include <iostream>
#include <stdio.h>
#include <windows.h>
#include "Act11lib.cpp"

using namespace std;

//VARIABLES GLOBALES
int Hanoi[5][3] = {{0}}; //5 Columnas y 3 Filas
int T1, T2, Cambio, columna, C, Contador = 0;
char t1[1], t2[1], New;

int main (){
system("cls");

	NewGame:
    Contador = 0; //Reiniciar contador
	Bienvenida();

	//LLENAR MATRIZ EN 0
	for(int col=0; col<5; col++){ //Columnas
		for(int fil=0; fil<3; fil++){ //Filas
			Hanoi[col][fil] = 0;
		} //Fin de for filas
	} //Fin de for Columnas

	//LLENAR NUMEROS DE 1 A 5
	C = 1; //Empezar a imprimir desde 1 y no desde 0...
	for(int col=0; col<=4; col++) { //Columnas
		Hanoi[col][0] = C;
		C++;
	} //Fin for

	Inicio:
	//IMPRESION AUTOMATICA DE LA MATRIZ
	/*
	for(int col=0; col<5; col++){ //Columnas
		cout<<"\t" <<endl;
		for(int fil=0; fil<3; fil++){ //Filas
			cout<<"\t" <<Hanoi[col][fil]; //Impresion de la matriz
		} //Fin de for filas
	} //Fin de for Columnas
	*/

	gotoxy(111,0); cout<<"SCORE: " <<Contador <<endl;
	cout<<"" <<endl;

    //IMPRESION MANUAL DE LA MATRIZ
	gotoxy(48,9);  cout<<Hanoi[0][0] <<"\t" <<Hanoi[0][1] <<"\t" <<Hanoi[0][2];
	gotoxy(48,10); cout<<Hanoi[1][0] <<"\t" <<Hanoi[1][1] <<"\t" <<Hanoi[1][2];
	gotoxy(48,11); cout<<Hanoi[2][0] <<"\t" <<Hanoi[2][1] <<"\t" <<Hanoi[2][2];
	gotoxy(48,12); cout<<Hanoi[3][0] <<"\t" <<Hanoi[3][1] <<"\t" <<Hanoi[3][2];
	gotoxy(48,13); cout<<Hanoi[4][0] <<"\t" <<Hanoi[4][1] <<"\t" <<Hanoi[4][2];
    /*La mitriz fue imprimida casilla por casilla para mejorar la vizualizacion de la interfaz, debido a que
    un gotoxy dentro de un for no funciona de la manera esperada, el gotoxy coloca todas las casillas en una sola posicion
    perdiendo el efecto visual esperado... */

	gotoxy(42,15); cout<<"   _______________________" <<endl;
	gotoxy(47,17); cout<<"\t1\t2\t3\n\n" <<endl;

	//VALIDACIONES PARA MOVER TORRES
	gotoxy(47,20); cout<<"Mover de la torre: "; cin>>T1;
		if(T1>=1 && T1<=3){
			T1 = T1-1;
		} //Fin de if T1
		else{
			gotoxy(45,23); cout<<"Ingrese una torre valida"; Puntos();
			goto Inicio;
		} //Fin de else

	gotoxy(47,21);cout<<"Hacia la torre:    "; cin>>T2;
		atoi(t2);
		if(T2>=1 && T2<=3){
			T2 = T2-1;
		} //Fin de if T2
		else{
			gotoxy(45,23); cout<<"Ingrese una torre valida"; Puntos();
			goto Inicio;
		} //Fin de else T2

		if (T2 == T1 || T1 == T2){
			gotoxy(44,23); cout<<"Ingrese torres diferentes"; Puntos();
			goto Inicio;
		} //Fin de else if
		fflush(stdin); //Resetear Buffer
		//VALIDACIONES

		//REEMPLAZAR NUMERO
		for(columna=0; columna<5; columna++){
			for(int fil=0; fil<3; fil++){
				if(Hanoi[columna][T1] > 0){
					Cambio = Hanoi[columna][T1]; //Igualar a la torre ingresada por el usuario
					Hanoi[columna][T1] = 0; // La posicion cambiada sera igual a 0
					Contador++; //Acumulador para el contador
					goto cambio;
				} //Fin de if
			} //Fin for fila
		} //Fin for columna

		cambio:
		//CAMBIAR POSICION EN LA MATRIZ
		if(Hanoi[4][T2] == 0){
			Hanoi[4][T2] = Cambio;
			Cambio = 0;
		} //Fin de if

		for(int col=4; col>=0; col--){
			int ajuste = col + 1; //Ajustar a la posicicon correcta en la matriz
			if(Hanoi[ajuste][T2] > Cambio && Hanoi[col][T2] == 0){
				Hanoi[col][T2] = Cambio;
				Cambio = 0;
			} //Fin de if
		} //Fin de for

		if(Hanoi[4][0] == Hanoi[4][1]){ //Si las posiciones son iguales, entonces es victoria
			Hanoi[columna][T1] = Cambio; //Que realize el cambio de posicion
			gotoxy(52,6); cout<<"VICTORIA!" <<endl; //Mensaje de victoria
			Windows();
			op:
			gotoxy(48,10); cout<<"Desea volver a jugar?" <<endl;
			gotoxy(48,12);cout<<"Presione \"S\" para SI" <<endl;
			gotoxy(48,13);cout<<"Presione \"N\"para NO" <<endl;
			gotoxy(48,14);cout<<"Respuesta: ";
			cin>>New;
			system("cls");
				if(New == 'S' || New == 's'){
					goto NewGame;
				} //Fin de If Si
				else if(New == 'N' || New == 'n'){
					Salir();
				} //Fin de else if No
				else{
					gotoxy(44,12); cout<<"Ingrese una opcion correcta"; Puntos();
					goto op;
				} //Fin de else
		} //Fin de if

		else if(Hanoi[4][0] == Hanoi[4][2]){
			Hanoi[columna][T1] = Cambio; //Que realize el cambio de posicion
			gotoxy(52,6); cout<<"VICTORIA!" <<endl; //Mensaje de victoria
			Windows();
			op2:
			gotoxy(48,10); cout<<"Desea volver a jugar?" <<endl;
			gotoxy(48,12);cout<<"Presione \"S\" para SI" <<endl;
			gotoxy(48,13);cout<<"Presione \"N\"para NO" <<endl;
			gotoxy(48,14);cout<<"Respuesta: ";
			cin>>New;
			system("cls");
				if(New == 'S' || New == 's'){
					goto NewGame;
				} //Fin de If Si
				else if(New == 'N' || New == 'n'){
					Salir();
				} //Fin de else if No
				else{
					gotoxy(44,12); cout<<"Ingrese una opcion correcta"; Puntos();
					goto op2;
				} //Fin de else
		} //Fin de if

		else{ //Las posiciones no son iguales
			Hanoi[columna][T1] = Cambio; //Que realize el cambio de posicion
			system("cls"); //Limpiado de pantalla
			goto Inicio; //Volver al inicio
		} //Fin de else

return 0;
} //Fin de main
