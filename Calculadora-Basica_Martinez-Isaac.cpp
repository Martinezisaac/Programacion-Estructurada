#include <iostream>
#include <math.h>

using namespace std;

//VARIABLES GLOBALES
float Num1, Num2; //Ans

//FUNCIONES
void gotoxy(int x, int y);
void Windows();

//DECLARACION DE FUNCIONES
float Suma(float Num1, float Num2);
float Resta(float Num1, float Num2);
float Multiplicacion(float Num1, float Num2);
float Division(float Num1, float Num2);

float Suma(float Num1, float Num2){
	return Num1 + Num2;
} //Fin de la funcion Suma

float Resta(float Num1, float Num2){
	return Num1 - Num2;
} //Fin de la funcion resta

float Multiplicacion (float Num1, float Num2){
	return Num1 * Num2;
} //Fin de la multiplicacion

float Division (float Num1, float Num2){
	if(Num2 == 0){
		cout<<"Ingrese un numero distinto a 0";
	} //Fin de la validacion para evitar un 0 en el denominador
	return Num1 / Num2;
} //Fin de la division

float RaizCuadrada(float Num1){
	return sqrt(Num1); //Funcion para raiz cuadrada
} //Fin de la raiz cuadrada

float Potencia(float Num1, float Potencia){
	float Acumulador, Respuesta;
    Acumulador = 1; //Reiniciar valor del acumulador
        for(int x=1; x<=Potencia; x++){ //Repite la operacion hasta el numero de la potencia
            Respuesta = Acumulador * Num1; //Operacion
            Acumulador = Respuesta; //Guarda el resultado en un acumulador para despues volver a hacer operaciones con ese resultado
        } //Fin de algoritmo potencia
    return Acumulador = Respuesta; //Iguala variables para escribir el resultado (Ans)
} //Fin de la funcion potencia 
