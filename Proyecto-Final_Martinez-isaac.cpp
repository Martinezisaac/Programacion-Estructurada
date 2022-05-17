//Librerias
#include <iostream>
#include "Calculadora-Basica_Martinez-Isaac.cpp"
#include "Convertidor-de-Distancias_Martinez-Isaac.cpp"
#include "Convertidor-de-Unidades_Martinez-Isaac.cpp"
#include "Libreria-de-Mensajes_Martinez-Isaac.cpp"

using namespace std;

//VARIABLES GLOBLALES
int Menu;
char ENTER;

//Variables de Calculadora Basica
float Acumulador = 1, Ans, Numero1, Numero2;
char Operacion;

int main(){
system("cls");
//Presentacion();

    Menu:
    gotoxy(45,9);  cout<<"Seleccione una opcion: " <<endl;
    gotoxy(45,11);  cout<<"[1] - Calculadora Basica" <<endl;
    gotoxy(45,12); cout<<"[2] - Convertidor de Distancias" <<endl;
    gotoxy(45,13); cout<<"[3] - Convertidor de Unidades" <<endl;
    gotoxy(45,14); cout<<"[4] - Salir del programa" <<endl;
    gotoxy(45,16); cout<<"Seleccion: ";
    cin>>Menu;

    system("cls");
    Cargando();

        switch(Menu){

            case 1: //Calculadora Basica

                CalculadoraBasica: //Ciclo
                gotoxy(50,5); cout<<"CALCULADORA BASICA" <<endl; //Titulo
                gotoxy(24,8); cout<<"Ingrese un numero: ";
                cin>>Numero1; //Pedir primer numero para realizar la operacion

                Operacion: //Ciclo
                gotoxy(50,5); cout<<"CALCULADORA BASICA" <<endl; //Titulo
                gotoxy(24,10); cout<<"Ingrese su operacion"<<endl;
                gotoxy(24,12); cout<<"[+] Suma" <<endl;
                gotoxy(24,13); cout<<"[-] Resta" <<endl;
                gotoxy(24,14); cout<<"[*] Multiplicacion" <<endl;
                gotoxy(24,15); cout<<"[/] Division" <<endl;
                gotoxy(24,16); cout<<"[5] Raiz Cuadrada" <<endl;
                gotoxy(24,17); cout<<"[6] Potencia de un numero" <<endl;
                gotoxy(24,18); cout<<"[7] Reiniciar Calculadora" <<endl;
                gotoxy(24,19); cout<<"[8] Volver al menu" <<endl;
                gotoxy(24,21); cout<<"Operacion: ";
                cin>>Operacion;

                /*Las operaciones se dividen en dos switch, esto debido a que en el menu de operaciones hay ciertas opciones en las que 
                no dependen del segundo digito, y para comodidad del usuario, cuando seleccione una de estas opciones pueda continuar
                usando la calculadora cuantas veces quiera hasta que el lo decida, o en cambio salir al menu principal y utilizar otra
                calculadora, o simplemente salir del programa. */
                
                switch(Operacion){ //Operaciones avanzadas y menus basicos 

                    case 53: //Raiz Cuadrada
                        Ans = sqrt(Numero1); //Funcion de raiz cuadrada
                        goto Ans;
                    break;

                    case 54: //Potencia de un numero
                        gotoxy(24,22); cout<<"Ingrese la potencia: ";
                        cin>>Numero2; //Pedir el numero de la potencia
                        Acumulador = 1; //Reiniciar valor del acumulador
                            for(int x=1; x<=Numero2; x++){ //Repite la operacion hasta el numero de la potencia
                                Ans = Acumulador * Numero1; //Operacion
                                Acumulador = Ans; //Guarda el resultado en un acumulador para despues volver a hacer operaciones con ese resultado
                            } //Fin de algoritmo potencia
                        Acumulador = Ans; //Iguala variables para escribir el resultado (Ans)
                        goto Ans;
                    break;

                    case 55: //Reiniciar calculadora
                            cout<<"Reiniciando Calculadora Basica"; Puntos();
                            Numero1 = 0; Numero2 = 0; Ans = 0; //Reiniciar todos los valores de las operaciones
                            goto CalculadoraBasica;
                    break;

                    case 56: //Volver al menu
                        VolverMenu(); goto Menu; //Funcion de Mensaje predeterminado
                    break;

                } //Fin de switch de operaciones avanzadas y menus
                
                Numero2: //Ciclo en caso de que 'Numero2' sea igual a 0 en el apartado de division
                gotoxy(24,22); cout<<"Ingrese otro numero: ";
                cin>>Numero2; //Pedir segundo numero para realizar la operacion

                switch (Operacion){ //Operaciones Basicas

                    case '+': //Suma
                        Ans = Numero1 + Numero2; //Respuesta = Operacion correspondiente (+ - * /)
                    break;

                    case '-': //Resta
                        Ans = Numero1 - Numero2;
                    break;

                    case '*': //Multiplicacion
                        Ans = Numero1 * Numero2;
                    break;

                    case '/': //Division
                        if(Numero2 == 0){ //Validacion para que el denominador sea diferente a 0
                            cout<<"Ingrese un numero distinto a 0"; Puntos();
                            goto Numero2;
                        } //Fin de validacion denominador
                        Ans = Numero1 / Numero2;
                    break;

                    default:
                        Predeterminado(); goto Operacion;
                    break;

                } //Fin de switch de operaciones basicas
            
            Ans: //Ciclo de mostrar respuesta
            Numero1 = Ans; //El primer numero se iguala al resultado y empieza a hacer ciclo hasta que el usuario desee salir
            system("cls"); //Limpiar pantalla
            gotoxy(24,24); cout<<"Resultado: " <<Ans; //Impresion del resultado
            goto Operacion; //Ciclo hasta que el usuario desee salir

            break; //Fin de case 1

            case 2: //Convertidor de Distancias
                ConvertidorDeDistancias();
            break; //Fin de case 2

            case 3: //Convertidor de Unidades

            break; //Fin de case 3

            case 4: //Salir del programa
                Salir();
            break; //Fin de case 4

            default: //Mensaje predetermiando
                Predeterminado();
                goto Menu;
            break; //Fin de case default

        } //Fin de Swtich

return 0;
} //Fin de main
