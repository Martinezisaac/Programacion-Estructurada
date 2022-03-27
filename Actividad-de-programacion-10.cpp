/********************PRESENTACION*******************************

NOMBRE: Isaac Martinez
FECHA: 28/Marzo/2022
PROGRAMA: Actividad de programacion 10
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Realizar un programa que tenga las siguientes caracteristicas:
             -Pida al usuario un numero entero
             -Muestre su valor factorial
             -Imprima en pantalla los "n" primeros terminos de la serie Fibonacci y su resultado

**************************************************************/

#include <iostream> 
#include <windows.h>

using namespace std;

//VARIABLES GLOBALES
int Numero, Fact; 
char Menu;

//FUNCIONES
void Factorial(int num); //FUNCION PARA CALCULAR EL FACTORIAL DE UN NUMERO
void Fibonacci(int num); //FUNCION DE LA SERIE DE FIBONACCI
void Windows(); //FUNCION RESETEAR Y DORMIR PANTALLA
void Salir(); //FUNCION PARA SALIR DEL PROGRAMA
void Predeterminado(); //FUNCION DE MENSAJE PREDETERMINADO

main(){
system("cls"); //Reinicio de pantalla 

    Inicio:
    cout<<"Ingrese un numero entero: "; 
    cin>>Numero;
    system("cls");
    cout<<"Cargando operaciones..." <<endl;
    Windows();

    MiniMenu:
    Factorial(Numero); //Funcion para realizar operacion factorial
    cout<<"\nSerie de Finobucci hasta la posicion " <<"\"" <<Numero <<"\":" <<endl;
    Fibonacci(Numero); //Funcion para la serie de Fibonacci hasta "x" numero

    cout<<"\n\n";
    cout<<"[1] Ingresar otro numero" <<endl;
    cout<<"[2] Salir del programa" <<endl;
    cout<<"Respuesta: ";
    cin>>Menu;

    system("cls");

        if(Menu == 49){
            cout<<"Volviendo al inicio..." <<endl;
            Windows();
            goto Inicio;
        }
        else if (Menu ==50){
            Salir();
        }
        else{
            Predeterminado();
            goto MiniMenu;
        }
return 0;
} //Fin de main

//FUNCIONES

//FUNCION PARA CALCULAR EL FACTORIAL DE UN NUMERO
void Factorial(int num){
    Fact = 1;
    for(int x = num; x >= 1; x--){
        Fact = Fact * x;
    } //Fin For Factorial
    cout<<"El factorial de " "\"" <<num <<"\"" <<" es: " <<Fact <<endl; //Impresion en pantalla
} //Fin de la funcion factorial 

//FUNCION DE LA SERIE DE FIBONACCI
void Fibonacci(int num) {
    int Resultado = 1; //Acumuludor de los resultados
    int Anterior = 0; //Numero anterior
    int Anterior2 = 1; //Numero anterior del anterior
    int Acumulador = 1; //Acumulador de la suma de ambos numeros anteriores
    cout<<"1 "; //Impresion del primer numero de la sucesion Fibonacci
    for(int x = 1; x<num; x++){
        Acumulador = Anterior + Anterior2; //Acumulador de la suma de ambos numeros anteriores
        cout<<Acumulador<<" "; //Impresion de la serie Finobacci
        Anterior = Anterior2; //Cambio de posicion 
        Anterior2 = Acumulador; //Igualacion al resultado
        Resultado += Acumulador;
    } //Fin de for
    cout<<"\nLa suma total de la sucesion hasta la posicion " <<"\"" <<num <<"\"" <<" es de: " <<Resultado <<endl;
} //Fin de la funcion Fibonacci

//FUNCION RESETEAR Y DORMIR PANTALLA
void Windows(){
    Sleep(2000);
    system("cls");
} //Fin de la funcion Windows

//FUNCION PARA SALIR DEL PROGRAMA
void Salir(){
    cout<<"Saliendo del programa..." <<endl;
    Sleep(2000);
    system("cls");
    cout<<"Usted ha salido correctamente del programa...\n" <<endl;
    exit(EXIT_SUCCESS); 
} //Fin de la funcion

//FUNCION DE MENSAJE PREDETERMINADO
void Predeterminado(){ //Funcion de validacion tipo caracter 
    cout<<"Ingrese una opcion valida..." <<endl;
    Windows();
    //goto Op; 
} //Fin de la funcion