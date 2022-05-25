//Librerias
#include <iostream>
#include "Calculadora-Basica_Martinez-Isaac.cpp"
#include "Convertidor-de-Distancias_Martinez-Isaac.cpp"
#include "Convertidor-de-Unidades_Martinez-Isaac.cpp"
#include "Libreria-de-Mensajes_Martinez-Isaac.cpp"

using namespace std;

//VARIABLES GLOBLALES
int Menu;

//Variables de Calculadora Basica
float Acumulador = 1, Ans, Numero1, Numero2;
char Operacion;

//Variables de Calculadora de Distancias
int UnidadOriginal, UnidadFinal;
float Distancia1, DistanciaFinal;
char MiniMenu;

//Variables de Calculadora de Unidades
int Unidad;
char MenuCiclo;

int main(){
Presentacion();

    Menu: //Menu principal de las calculadoras
    gotoxy(45,9);  cout<<"Seleccione una opcion: " <<endl;
    gotoxy(45,11); cout<<"[1] - Calculadora Basica" <<endl;
    gotoxy(45,12); cout<<"[2] - Convertidor de Distancias" <<endl;
    gotoxy(45,13); cout<<"[3] - Convertidor de Unidades" <<endl;
    gotoxy(45,14); cout<<"[4] - Salir del programa" <<endl;
    gotoxy(45,16); cout<<"Seleccion: ";
    cin>>Menu; //Pedir opcion del menu

    system("cls"); //Limpiar pantalla

        switch(Menu){

            case 1: //Calculadora Basica
            Cargando(); //Cargando...

                CalculadoraBasica: //Ciclo cuando se reinicia la calculadora
                gotoxy(50,5); cout<<"CALCULADORA BASICA" <<endl; //Titulo
                gotoxy(24,7); cout<<"Ingrese un numero: ";
                cin>>Numero1; //Pedir primer numero para realizar la operacion

                Operacion: //Ciclo
                gotoxy(74,9); cout<<"OPERACION REALIZADA" <<endl; //Titulo
                Calculadora(); //Mostrar calculadora (Diseno)
                gotoxy(50,5); cout<<"CALCULADORA BASICA" <<endl; //Titulo
                gotoxy(24,9); cout<<"Ingrese su operacion"<<endl;
                gotoxy(24,11); cout<<"[+] Suma" <<endl;
                gotoxy(24,12); cout<<"[-] Resta" <<endl;
                gotoxy(24,13); cout<<"[*] Multiplicacion" <<endl;
                gotoxy(24,14); cout<<"[/] Division" <<endl;
                gotoxy(24,15); cout<<"[r] Raiz Cuadrada" <<endl;
                gotoxy(24,16); cout<<"[e] Potencia de un numero" <<endl;
                gotoxy(24,17); cout<<"[1] Reiniciar Calculadora" <<endl;
                gotoxy(24,18); cout<<"[2] Volver al menu" <<endl;
                gotoxy(24,20); cout<<"Operacion: ";
                cin>>Operacion; //Pedir operacion

                /*Las operaciones se dividen en dos switch, esto debido a que en el menu de operaciones hay ciertas opciones en las que
                no dependen del segundo digito, y para comodidad del usuario, cuando seleccione una de estas opciones pueda continuar
                usando la calculadora cuantas veces quiera hasta que el lo decida, o en cambio salir al menu principal y utilizar otra
                calculadora, o simplemente salir del programa. */

                switch(Operacion){ //Operaciones avanzadas y menus basicos

                    case 'r': //Raiz Cuadrada
                        Ans = sqrt(Numero1); //Funcion de raiz cuadrada
                        goto Ans;
                    break;

                    case 'e': //Potencia de un numero
                        gotoxy(24,21); cout<<"Ingrese la potencia: ";
                        cin>>Numero2; //Pedir el numero de la potencia
                        Ans = Potencia(Numero1, Numero2);
                        goto Ans;
                    break;

                    case 49: //Reiniciar calculadora
                            gotoxy(24,21); cout<<"Reiniciando Calculadora Basica"; Puntos(); //Mensaje de advertencia
                            Numero1 = 0; Numero2 = 0; Ans = 0; //Reiniciar todos los valores de las operaciones (Reiniciar calculadora)
                            goto CalculadoraBasica; //Ciclo
                    break;

                    case 50: //Volver al menu
                        gotoxy(24,21); VolverMenu(); goto Menu; //Funcion de Mensaje predeterminado
                    break;

                } //Fin de switch de operaciones avanzadas y menus

                Numero2: //Ciclo en caso de que 'Numero2' sea igual a 0 en el apartado de division
                gotoxy(24,21); cout<<"Ingrese otro numero: ";
                cin>>Numero2; //Pedir segundo numero para realizar la operacion

                switch (Operacion){ //Operaciones Basicas

                    case '+': //Suma
                        Ans = Suma(Numero1, Numero2); //Respuesta = Operacion correspondiente (+ - * /)
                    break;

                    case '-': //Resta
                        Ans = Resta(Numero1, Numero2);
                    break;

                    case '*': //Multiplicacion
                        Ans = Multiplicacion(Numero1, Numero2);
                    break;

                    case '/': //Division
                        Ans = Division(Numero1, Numero2);
                    break;

                    default:
                        gotoxy(24,21); cout<<"Ingrese una operacion valida"; Puntos(); goto Operacion;
                    break;

                } //Fin de switch de operaciones basicas

                Ans: //Ciclo para mostrar respuesta
                system("cls"); //Limpiar pantalla
                gotoxy(74,9); cout<<"OPERACION REALIZADA" <<endl; //Titulo
                    if(Operacion == 'r'){
                        gotoxy(74, 11); cout<<Operacion <<" " <<Numero1 <<" = " <<Ans; //Mostrar operacion realizada
                    } //Fin para mostrar expresion correcta de raiz cuadrada
                    else if(Operacion == 'e'){
                        gotoxy(74, 11); cout<<Numero1 <<" Elevado a " <<Numero2 <<" = " <<Ans; //Mostrar operacion realizada
                    } //Fin para mostrar expresion correcta de potencia de un numero
                    else{
                        gotoxy(74, 11); cout<<Numero1 <<" " <<Operacion <<" " <<Numero2 <<" = " <<Ans; //Mostrar operacion realizada
                    } //Fin de mostrar operacion
                Calculadora(); //Mostrar calculadora (Diseno)
                Numero1 = Ans; //El primer numero se iguala al resultado y empieza a hacer ciclo hasta que el usuario desee salir
                gotoxy(24,23); cout<<"Resultado: " <<Ans; //Impresion del resultado
                goto Operacion; //Ciclo hasta que el usuario desee salir

            break; //Fin de case 1

            case 2: //Convertidor de Distancias
            Cargando(); //Cargando...

                CalculadoraDeDistancias: //Ciclo
                gotoxy(47,5); cout<<"CONVERTIDOR DE DISTANCIAS" <<endl; //Titulo
                gotoxy(74,7); cout<<"RESULTADO DE LA CONVERSION" <<endl; //Titulo para mostrar operacion
                Calculadora(); //Mostrar diseno de calculadora
                gotoxy(24,7); cout<<"Ingrese su distancia: ";
                cin>>Numero1; //Pedir cantidad a convertir

                UnidadOriginal: //Ciclo
                gotoxy(47,5); cout<<"CONVERTIDOR DE DISTANCIAS" <<endl; //Titulo
                gotoxy(74,7); cout<<"RESULTADO DE LA CONVERSION" <<endl; //Titulo para mostrar operacion
                Calculadora(); //Mostrar diseno de calculadora

                gotoxy(24,9);  cout<<"Ingrese la unidad de su distancia: " <<endl;
                gotoxy(24,11); cout<<"[1] - Centimetros (cm)" <<endl;
                gotoxy(24,12); cout<<"[2] - Metros (m)" <<endl;
                gotoxy(24,13); cout<<"[3] - Pies (ft)" <<endl;
                gotoxy(24,14); cout<<"[4] - Kilometros (km)" <<endl;
                gotoxy(24,15); cout<<"[5] - Millas (Mi)" <<endl;
                gotoxy(24,16); cout<<"Seleccion: ";
                cin>>UnidadOriginal;

                UnidadFinal: //Ciclo
                gotoxy(47,5); cout<<"CONVERTIDOR DE DISTANCIAS" <<endl; //Titulo
                gotoxy(74,7); cout<<"RESULTADO DE LA CONVERSION" <<endl; //Titulo para mostrar operacion
                Calculadora(); //Mostrar diseno de calculadora
                switch(UnidadOriginal){ //Convertir toda unidad a Centimetros (cm)

                    case 1: //Centimetros
                        Distancia1 = CMaCM(Numero1); //Centimetros(cm) a Centimetros(cm)
                        gotoxy(24,18); cout<<"Distancia Original = "; cout<<Numero1; cout<<"cm"; //Escribir distancia
                        gotoxy(74,9); cout<<Numero1; cout<<"cm"; gotoxy(74,10); cout<<"="; //Mostrar operacion en pantalla
                    break;

                    case 2: //Metros
                        Distancia1 = MaCM(Numero1); //Metros(m) a Centimetros(cm)
                        gotoxy(24,18); cout<<"Distancia Original = "; cout<<Numero1; cout<<"m"; //Escribir distancia
                        gotoxy(74,9); cout<<Numero1; cout<<"m"; gotoxy(74,10); cout<<"="; //Mostrar operacion en pantalla
                    break; //Fin de case 2

                    case 3: //Pies
                        Distancia1 = FTaCM(Numero1); //Pies(ft) a Centimetros(cm)
                        gotoxy(24,18); cout<<"Distancia Original = "; cout<<Numero1; cout<<"ft"; //Escribir distancia
                        gotoxy(74,9); cout<<Numero1; cout<<"ft"; gotoxy(74,10); cout<<"="; //Mostrar operacion en pantalla
                    break; //Fin de case 3

                    case 4: //Kilometros
                        Distancia1 = KMaCM(Numero1); //Kilometros(km) a Centimetros(cm)
                        gotoxy(24,18); cout<<"Distancia Original = "; cout<<Numero1; cout<<"km"; //Escribir distancia
                        gotoxy(74,9); cout<<Numero1; cout<<"km"; gotoxy(74,10); cout<<"="; //Mostrar operacion en pantalla
                    break; //Fin de case 4

                    case 5: //Millas
                        Distancia1 = MIaCM(Numero1); //Millas(mi) a Centimetros(cm)
                        gotoxy(24,18); cout<<"Distancia Original = "; cout<<Numero1; cout<<"mi"; //Escribir distancia
                        gotoxy(74,9); cout<<Numero1; cout<<"mi"; gotoxy(74,10); cout<<"=";//Mostrar operacion en pantalla
                    break; //Fin de case 5

                    default: //Mensaje predetermiando
                        gotoxy(24,18); Predeterminado();
                        goto UnidadOriginal;
                    break; //Fin de case default

                } //Fin de Switch de la Unidad ingresada Original

                gotoxy(24,9); cout<<"A que unidad quiere convertir su distancia? " <<endl;
                gotoxy(24,11); cout<<"[1] - Centimetros (cm)" <<endl;
                gotoxy(24,12); cout<<"[2] - Metros (m)" <<endl;
                gotoxy(24,13); cout<<"[3] - Pies (ft)" <<endl;
                gotoxy(24,14); cout<<"[4] - Kilometros (km)" <<endl;
                gotoxy(24,15); cout<<"[5] - Millas (Mi)" <<endl;
                gotoxy(24,16); cout<<"Seleccion para convertir: ";
                cin>>UnidadFinal;

                    if(UnidadOriginal == UnidadFinal){
                        gotoxy(24,28); cout<<"Ingrese unidades diferentes para convertirlas"; Puntos();
                        goto UnidadFinal;
                    } //Fin de la validacion (cm a cm | m a m | ft a ft | km a km | mi a mi)

                switch(UnidadFinal){

                    case 1: //Convertir a Centimetros
                        gotoxy(24,19); DistanciaFinal = Distancia1; cout<<"Convertir a cm"; //Centimetros(cm) a Centimetros(cm)
                        gotoxy(74,11); cout<<DistanciaFinal; cout<<"cm";//Mostrar Resultado
                    break;

                    case 2: //Convertir a Metros
                        gotoxy(24,19); DistanciaFinal = CMaM(Distancia1); cout<<"Convertir a m"; //Centimetros(cm) a Metros(m)
                        gotoxy(74,11); cout<<DistanciaFinal; cout<<"m";//Mostrar Resultado
                    break;

                    case 3: //Convertir a Pies
                        gotoxy(24,19); DistanciaFinal = CMaFT(Distancia1); cout<<"Convertir a ft"; //Centimetros(cm) a Pies(ft)
                        gotoxy(74,11); cout<<DistanciaFinal; cout<<"ft";//Mostrar Resultado
                    break;

                    case 4: //Convertir a Kilometros
                        gotoxy(24,19); DistanciaFinal = CMaKM(Distancia1); cout<<"Convertir a km";//Centimetros(cm) a Kilometros(km)
                        gotoxy(74,11); cout<<DistanciaFinal; cout<<"km";//Mostrar Resultado
                    break;

                    case 5: //Convertir a Millas
                        gotoxy(24,19); DistanciaFinal = CMaMI(Distancia1); cout<<"Convertir a mi";//Centimetros(cm) a Millas(mi)
                        gotoxy(74,11); cout<<DistanciaFinal; cout<<"mi";//Mostrar Resultado
                    break;

                    default: //Mensaje predetermiando
                        gotoxy(24,20); Predeterminado();
                        goto UnidadFinal;
                    break; //Fin de case default

                } //Fin de switch de la unidad convertida

                MiniMenu: //Ciclo para mostrar respuesta
                gotoxy(24,21); cout<<"[1] - Convertir de nuevo mi distancia actual" <<endl;
                gotoxy(24,22); cout<<"[2] - Reiniciar Calculadora" <<endl;
                gotoxy(24,23); cout<<"[3] - Volver al menu" <<endl;
                gotoxy(24,24); cout<<"Seleccion: ";
                cin>>MiniMenu;

                switch(MiniMenu){

                    case 49:
                        Numero1 = DistanciaFinal; //Igualar para hacer operaciones respecto al resultado ya obtenido
                        UnidadOriginal = UnidadFinal; //Igualar unidad de medida
                        system("cls"); //Limpiar pantalla
                        goto UnidadFinal; //Ciclo
                    break;

                    case 50:
                        system("cls"); //Limpiar pantalla
                        gotoxy(41,13); cout<<"Reiniciando Calculadora de Distancias"; Puntos(); //Mensaje de advertencia
                        Numero1 = 0; UnidadOriginal = 0; Distancia1 = 0; DistanciaFinal = 0; UnidadFinal = 0; MiniMenu = 0;//Reiniciar todos los valores de las operaciones (Reiniciar calculadora)
                        goto CalculadoraDeDistancias; //Ciclo
                    break;

                    case 51:
                        gotoxy(24,26); VolverMenu(); goto Menu; //Funcion de Mensaje predeterminado
                    break;

                    default:
                        gotoxy(24,24); cout<<"........... "; Sleep(2500);
                        goto MiniMenu;
                    break;

                } //Fin de Mini Menu

                //Medida1 = 1(Cm) | Medida1 = 2(m) | Medida1 = 3(ft) | Medida1 = 4(km) | Medida1 = 5(mi)

            break; //Fin de case 2

            case 3: //Convertidor de Unidades
            Cargando(); //Cargando...

                ConvertidorDeUnidades:
                gotoxy(47,5); cout<<"CALCULADORA DE UNIDADES" <<endl; //Titulo
                gotoxy(74,9); cout<<"RESULTADO DE LA CONVERSION" <<endl; //Titulo para mostrar operacion
                Calculadora(); //Mostrar diseno de calculadora

                gotoxy(24,9); cout<<"Ingrese un cantidad en sistema decimal" <<endl;
                gotoxy(24,10); cout<<"Unidad: "; cin>>Unidad; //Cantidad en decimal

                gotoxy(24,12); cout<<"[1] - Convertir de Decimal a Binario" <<endl;
                gotoxy(24,13); cout<<"[2] - Convertir de Decimal a Octal" <<endl;
                gotoxy(24,14); cout<<"[3] - Convertir de Decimal a Hexadecimal" <<endl;
                gotoxy(24,15); cout<<"[4] - Volver al Menu" <<endl;
                gotoxy(24,16); cout<<"Seleccion: ";
                cin>>MiniMenu;

                switch(MiniMenu){

                    case 49:
                        gotoxy(74,11); DecimalBinario(Unidad);
                    break;

                    case 50:
                        gotoxy(74,11); DecimalOctal(Unidad);
                    break;

                    case 51:
                        gotoxy(74,11); DecimalHexadecimal(Unidad);
                    break;

                    default:
                        gotoxy(74,11); gotoxy(24,20); Predeterminado();
                    break;

                } //Fin de switch de Unidades
                
                MenuCiclo:
                gotoxy(24,19); cout<<"[1] - Convertir otra unidad" <<endl;
                gotoxy(24,20); cout<<"[2] - Volver al menu" <<endl;
                gotoxy(24,21); cout<<"Seleccion: "; cin>>MenuCiclo;

                switch(MenuCiclo){
                   
                    case 49:
                        system("cls");
                        goto ConvertidorDeUnidades;
                    break;

                    case 50:
                        gotoxy(24,24); VolverMenu(); goto Menu; //Funcion de Mensaje predeterminado 
                    break;

                    default:
                        gotoxy(24,23); Predeterminado();
                        gotoxy(47,5); cout<<"CALCULADORA DE UNIDADES" <<endl; //Titulo
                        gotoxy(74,9); cout<<"RESULTADO DE LA CONVERSION" <<endl; //Titulo para mostrar operacion
                        Calculadora(); //Mostrar diseno de calculadora

                        gotoxy(24,9); cout<<"Ingrese un cantidad en sistema decimal" <<endl;
                        gotoxy(24,10); cout<<"Unidad: ";

                        gotoxy(24,12); cout<<"[1] - Convertir de Decimal a Binario" <<endl;
                        gotoxy(24,13); cout<<"[2] - Convertir de Decimal a Octal" <<endl;
                        gotoxy(24,14); cout<<"[3] - Convertir de Decimal a Hexadecimal" <<endl;
                        gotoxy(24,15); cout<<"[4] - Volver al Menu" <<endl;
                        goto MenuCiclo;
                    break;
                    
                } //Fin de switch

            break; //Fin de case 3

            case 4: //Salir del programa
                Salir();
            break; //Fin de case 4

            default: //Mensaje predetermiando
                gotoxy(45,12); Predeterminado();
                goto Menu;
            break; //Fin de case default

        } //Fin de Swtich

return 0;
} //Fin de main
