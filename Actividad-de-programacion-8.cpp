/********************PRESENTACION*******************************
NOMBRE: Isaac Martinez
FECHA: 14 de marzo de 2022
PROGRAMA: Actividad de programacion 8
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Realizar un programa con las siguientes características
-Pedir al usuario una palabra o frase
-Debe contar el número de vocales, consonantes y espacios
-Debe determinar si es una palabra palíndromo 
-Convertir palabra o frase a Mayúsculas y minúsculas
-Solicitar otra palabra o frase y que se concatene con la anterior
**************************************************************/

#include <iostream>
#include <windows.h>
#include <string.h>
#include <sstream>
#include "Act8lib.cpp"

using namespace std;

void Windows();
void ContadorDeLetras(string frase); //Funcion para contar el numero de vocales, consonantes y espacios
bool Palindromo(string frase); //Funcion para declarar si la palabra es palindromo o no

int cont = 0;
char Menu, VariableDos[40];
string Frase;

int main(){
system ("cls");

    cout<<"Introduzca una frase o palabra: ";
    getline(cin, Frase);
    system("cls"); //Limpiar pantalla

    cout<<"Escaneando palabra..." <<endl; //Reset de pantalla
        Windows();

    Menu:
    cont++;
    cout<<"Palabra o frase: " <<Frase <<endl;
    cout<<"\n";
    ContadorDeLetras(Frase); //Contador de Vocales, Consonantes y Espacios

    Palindromo(Frase); //Funcion para detectar si la palabra es palindroma
    if(Palindromo(Frase)) { //Si el caracter booleano es "True", entonces la palabra es palindromo
        cout<<"La palabra " <<"\""<<Frase<<"\"" <<" SI es palindromo" <<endl;
    }
    else{ //Si el caracter booleano es "False", entonces la palabra no es palindromo
        cout<<"La palabra " <<"\""<<Frase<<"\"" <<" NO es palindromo" <<endl;
    }

    if(cont == 1){ //Inicio de if
    cout<<"\n";
    cout<<"Ingrese otra palabra o frase para concatenar: ";
    gets(VariableDos);
    Frase.append(VariableDos); //Funcion para concatenar variables
    } //Fin de if

    if(cont >= 1) {
    cout<<"\n";
    cout<<"Que desea hacer?" <<endl;
    cout<<"[1] Convertir a mayusculas" <<endl;
    cout<<"[2] Convertir a minusculas" <<endl;
    cout<<"[3] Salir del programa" <<endl;
    cin>>Menu;
    system("cls");

        if(Menu == 49){
            cout<<"Convirtiendo a mayusculas..." <<endl;
            Windows();
            Mayuscula(Frase);
            goto Menu;
        }
        else if(Menu == 50){
            cout<<"Convirtiendo a minusculas..." <<endl;
            Windows();
            Minuscula(Frase);
            goto Menu;
        }
        else if(Menu == 51){
            cout<<"Saliendo del programa..." <<endl;
            Windows();
            cout<<"Usted ha salido con exito del programa" <<endl;
        }
        else{
            cout<<"Ingrese una opcion correcta..." <<endl;
            Windows();
            goto Menu;
        } 
    }//Fin de if

return 0;
}//Fin de main 