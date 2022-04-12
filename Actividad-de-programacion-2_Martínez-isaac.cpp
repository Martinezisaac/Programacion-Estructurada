/********************PRESENTACION*******************************

NOMBRE: Isaac Martinez
FECHA: 31/Enero/2022
PROGRAMA: Actividad de programacion 2
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Elaborar un programa en C/C++donde pongas en practica los caracteres de escape y las cadenas de control de tipos de salida

**************************************************************/

#include<iostream>

using namespace std;

int c;
float x, h, hh;
char i;

int main(){

    //Secuencias de Escape
    printf("-Hola mundo, esta es una practica de programacion\n"); //Salto de linea
    printf("-Esto es un ejemplo de tabulacion\t"); //Uso de tabulacion
    printf("Aqui continua la tabulacion\n"); //Continuacion de la tabulacion
    printf("-\"Soy superman\", eso fue un ejemplo del uso de comillas dentro de un programa\n");//Uso de Comillas
    printf("-Diagonal invertida\\\n");//Diagonal invertida
    printf("-\rRetorno de carro, ");//Retorno de carro
    printf("Esto es un ejemplo del retorno de carro \n");

    /*Cadenas de control de tipo de salida*/
    printf("\nA continuacion, las cadenas de control de tipo de salida\n");
    printf("Ingrese un numero con decimal: ");
    scanf("%g",&h); //Dato real (flotante/float)
    printf("gracias por cooperar con el dato. Ahora ingrese un numero entero: ");
    scanf("%d",&hh);//Dato entero decimal (entero/int)
    printf ("Excelente, ahora ingrese una letra: ");
    scanf(" %c",&i);//Dato caracter (char)
    printf("De lujo, continuemos con el aprendizaje...\n");
    printf("Ahora introduzca un numero entero sin decimal: ");
    scanf("%u",&c);//Numeero entero sin signo decimal
    printf("finalmente, ingresa un numero con decimal: ");
    scanf("%f" ,&x); //El dato es un real escrito con punto decimal con signo
    printf("Sus datos fueorn recopilados exitosamente, Gracias por haber usado el programa");

return 0;
} //Fin de main
