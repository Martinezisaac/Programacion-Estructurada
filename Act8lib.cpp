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

using namespace std;

    void Windows(){; //Funcion para dormir y resetear pantalla
        Sleep(2000); //Dormir el programa 2 segundos
        system("cls"); //Limpiar pantalla
    } //Fin de la funcion 

    void ContadorDeLetras(string frase){ //Contador de Vocales, Consonantes y Espacios 
        int NumVocales = 0, NumEspacios = 0, NumConsonantes = 0, c;
        char Consonantes[]="bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ ";
        char Vocales[]="aeiouAEIOU";
        char Espacios[]=" ";

            for (c=0; c<=frase.length(); c++){ //For de longitud de la palabra
                for(int x=0; x<10; x++){ //For para contar el numero de vocales
                    if(frase[c] == Vocales[x]){ //Si la frase es igual a una de las vocales, entonces contara las vocales medianete NumVocales++
                        NumVocales++; //Contador
                    } //Fin de if
                } //Fin de for vocales

                for(int w=0; w<1; w++){ //For para contar el numero de espacios
                    if(frase[c] == Espacios[w]){ //Si la frase es igual a un espacio, entonces contara los espacios mediante NumEspacios++
                        NumEspacios++; //Contador
                    } //Fin de if
                } //Fin de for vocales

                for(int u=0;u<42;u++){ //For para contar el numero de consonantes 
                    if(frase[c] == Consonantes[u]){ //Si la frase es igual a una de las consonantes, entonces contara las consonantes mediante NumConsonantes++
                        NumConsonantes++; //Contador
                    } //Fin de if
                } //Fin de For U
            } //Fin de for Contador

        cout<<"Su palabra o frase posee las siguientes caracteristicas: \n" <<endl;
        cout<<"La cantidad de vocales es: "<<NumVocales <<endl; //Impresion del contador de vocales
        cout<<"La cantidad de consonantes es de "<<NumConsonantes <<endl; //Impresion del contador de consonantes 
        cout<<"La cantidad de espacios es de: "<<NumEspacios <<endl; //Impresion del contador de espacios  
    } //Fin de la funcion

    bool Palindromo(string frase){ //Funcion de tipo booleana para palabras palindromo
        int N = frase.length();
        string Auxiliar = ""; //Cadena vacia
        for(int F = 0; F < N; F++) {
            if(frase[F] != ' ' &&
            frase[F] != ',' &&
            frase[F] != '.' &&
            frase[F] != ';' &&
            frase[F] != '(' &&
            frase[F] != ')' &&
            frase[F] != '¡' &&
            frase[F] != '!' &&
            frase[F] != '¿' &&
            frase[F] != '?') {
                Auxiliar += frase[F];  
            } //Fin de if                 
        } //Fin de for
        frase = Auxiliar;
        N = frase.length();
        for (int F = 0; F<N/2; F++){
            if(frase[F] != frase[N-F-1]) return false;
        } //Fin de for
        return true;
    } //Fin de la funcion 

    void Mayuscula(string &frase){ //Funcion para convertir todas las palabras a mayusculas
        for(int x = 0; x<frase.length(); x++){
            frase[x] = towupper(frase[x]);
        }//Fin de for
    } //Fin de la funcion

    void Minuscula(string &frase){ //Funcion para convertir todas las palabras a minusculas
        for(int x = 0; x<frase.length(); x++){
            frase[x] = towlower(frase[x]);
        }//Fin de for
    } //Fin de la funcion