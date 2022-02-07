/********************PRESENTACION*******************************

NOMBRE: Isaac Martinez
FECHA: 31/Enero/2022
PROGRAMA: Actividad de programacion 3
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Elaborar un programa en donde se realize un arreglo numerico que cumpla con las siguientes condiciones
            Insertar cada que el usuario final lo indique
            Tener la opcion de borrar los elementos del arreglo
            Mostar los elementos del arreglo
            Realizar la sumatoria y multiplicacion de los elementos insertados
            Mostar el valor minimo, maximo y promedio de los elementos insertados 

**************************************************************/

#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <algorithm> //Utilizada para encontrar el valor minimo, maximo y promedio del arreglo

using namespace std;

int array[10], y, Acum, v, max, min, cont; //y = valor entero para preguntar en los menu   //Acum = Acumulador para la suma    //min = Valor minimo  //max = Valor maximo   //cont = Contador
char i, u, x;     //i = switch    //u = Codigo ASCII    //x = Codigo ASCII 

int main () {
inicio:
system("cls");

    cout<<"Selecciona el numero de la accion que deseas realizar:\n" <<endl;
    cout<<"[1] Mostrar elementos del arreglo"<<endl;
    cout<<"[2] Insertar elementos en el arreglo" <<endl;
    cout<<"[3] Borrar elementos del arreglo" <<endl;
    cout<<"[4] Mostrar la sumatoria de los elementos del arreglo" <<endl;
    cout<<"[5] Mostar la multiplicacion de los elementos del arreglo" <<endl;
    cout<<"[6] Mostar el valor minimo, maximo y el promedio de los elementos del arreglo" <<endl;
    cout<<"[7] Salir del programa" <<endl;
    cin>>i;

    system("cls");

    switch(i) 
    { 
        case 49: //Mostrar elementos del arreglo
        cout<<"Usted ingreso a la opcion 1 correctamente" <<endl;
        Sleep(2000);
        system("cls");
            
            case1:
            cout<<"Estos son los valores del arreglo\n" <<endl;
                
                for(y=0; y<10; y++) {
                    cout<<"["<<array [y]<<"]"; //Impresion del arreglo (numeros del 0 al 9)
                }
                cout<<"\n";
                for(y=0; y<10; y++) {
                    cout<<" "<<y<<" "; //Impresion de la numeracion del arreglo (0,1,2,3...9)
                }
            cout<<"\n\n";

            cout<<"[1] Volver al menu" <<endl;
            cout<<"[2] Salir del programa" <<endl;
            cin>>u;
            system("cls");

                if (u == 49) { //Si el usuario selecciona 1 volvera al menu
                    cout<<"Volviendo al menu..." <<endl;
                    Sleep(2000);
                    system("cls");
                    goto inicio;
                }

                else if (u == 50) { //Si el usuario selecciona 2 saldra del programa
                    cout<<"Saliendo del programa..." <<endl;
                    Sleep(2000);
                    system("cls");
                    cout<<"Gracias por usar el programa" <<endl;
                    exit(EXIT_SUCCESS); 
                }

                else { //Si el usuario selecciona cualquier otra opcion que no sea 1 y 2 le marcara error y volvera a preguntar
                    cout<<"Introduzca una opcion correcta" <<endl;
                    Sleep(2000);
                    system("cls");
                    goto case1;
                }
        break;

        case 50: //Insertar elementos en el arreglo
        cout<<"Usted ingreso a la opcion 2 correctamente" <<endl;
        Sleep(2000);
        system("cls");   

            case2:
            cout<<"Estos son los valores del arreglo\n" <<endl;
                
                for(y=0; y<10; y++) {
                    cout<<"["<<array [y]<<"]" ; //Impresion del arreglo (numeros del 0 al 9)
                }
                cout<<"\n";
                for(y=0; y<10; y++) {
                    cout<<" "<<y<<" "; //Impresion de la numeracion del arreglo (0,1,2,3...9)
                }
            cout<<"\n\n";

            cout<<"[1] Insertar un digito en un espacio especifico del arreglo" <<endl;
            cout<<"[2] Volver al menu" <<endl;
            cin>>x;
            system("cls");

                case3:
                if (x == 49){
                        Sleep (150);
                        cout<<"Estos son los valores del arreglo\n" <<endl;
                            for(y=0; y<10; y++) {
                                cout<<"["<<array[y]<<"]" ; //Impresion del arreglo (numeros del 0 al 9)
                            }
                            cout<<"\n";
                            for(y=0; y<10; y++) {
                                cout<<" "<<y<<" "; //Impresion de la numeracion del arreglo (0,1,2,3...9)
                            }
                            cout<<"\n\n";
                    
                        cout<<"En que posicion del arreglo desea insertar su digito?" <<endl;
                        cin>>y;

                            val:
                            if (y>=0 && y<=9) { //Digito introducido valido
                                cout<<"Que valor desea guardar en el arreglo?" <<endl;
                                cin>>v;

                                    if(v>9) {
                                        system("cls");
                                        cout<<"\nIngrese una cantidad menor a 10" <<endl;
                                        Sleep(2000);
                                        system("cls");
                                        goto val;
                                    }

                                    if (array[y] > 0) {
                                        caseU:
                                        system("cls");
                                        cout<<"El espacio donde deseas agregar tu digito ya esta ocupado, deseas sobreescribirlo?\n" <<endl;
                                        cout<<"S - Si" <<endl;
                                        cout<<"N - No" <<endl;
                                        cin>>u;
                                        system("cls");

                                            if (u == 'S' || u == 's') {
                                                array[y] = v;
                                                cout<<"El valor \"" <<v <<"\" se ha sobreescribido correctamente" <<endl;
                                                Sleep(2000);
                                                system("cls");
                                                goto case2;
                                            }

                                            else if (u == 'N' || u == 'n') {
                                                cout<<"Volviendo al menu para insertar un valor..." <<endl;
                                                Sleep (2000);
                                                system ("cls");
                                                goto case2;
                                            }

                                            else {
                                                cout<<"Ingrese una opcion correcta" <<endl;
                                                Sleep (2000);
                                                system ("cls");
                                                goto caseU;
                                            }
                                    }

                                    else{
                                        system("cls");
                                        array[y] = v;
                                        cout<<"El valor \"" <<v <<"\" se ha guardado correctamente" <<endl;
                                        Sleep(2000);
                                        system("cls");
                                        goto case2;
                                    }
                                }

                                else{
                                    system("cls");
                                    cout<<"Las posiciones del arreglo solamente son del 0 al 9"<<endl;
                                    Sleep(2000);
                                    system("cls");
                                    goto case3;
                                }
                        }

                else if (x == 50){
                    cout<<"Volviendo al menu..." <<endl;
                    Sleep(2000);
                    system("cls");
                    goto inicio; 
                }
                        
                else{
                    cout<<"Ingrese una opcion correcta" <<endl;
                    Sleep(2000);
                    system("cls");
                    goto case2;
                }

        break;

        case 51: //Borrar elementos del arreglo
        cout<<"Usted ingreso a la opcion 3 correctamente" <<endl;
        Sleep(2000);
        system("cls");

            case4:
            cout<<"Estos son los valores del arreglo\n" <<endl;
                    
                    for(y=0; y<10; y++) {
                        cout<<"["<<array [y]<<"]" ; //Impresion del arreglo (numeros del 0 al 9)
                    }
                    cout<<"\n";
                    for(y=0; y<10; y++) {
                        cout<<" "<<y<<" "; //Impresion de la numeracion del arreglo (0,1,2,3...9)
                    }
                cout<<"\n\n";

            cout<<"[1] Borrar todo el arreglo" <<endl; 
            cout<<"[2] Borrar un lugar especifico del arreglo" <<endl;
            cout<<"[3] Volver al menu" <<endl;
            cin>>x;
            system("cls");

            if (x == 49) {
                for(y=0; y<10; y++) {
                    array[y] = 0;
                }
                cout<<"Borrando todo el arreglo..." <<endl;
                Sleep(2000);
                system ("cls");
                goto case4; 
            }

            else if (x == 50){

                case5:
                cout<<"Estos son los valores del arreglo\n" <<endl;
                    
                    for(y=0; y<10; y++) {
                        cout<<"["<<array [y]<<"]" ; //Impresion del arreglo (numeros del 0 al 9)
                    }
                    cout<<"\n";
                    for(y=0; y<10; y++) {
                        cout<<" "<<y<<" "; //Impresion de la numeracion del arreglo (0,1,2,3...9)
                    }
                cout<<"\n\n";

                cout<<"Que posicion del arreglo deseas borrar?" <<endl;
                cin>>y;
                system("cls");

                    if(y<0 || y>9) { //Digito introducio invalido
                        cout<<"Las posiciones del arreglo solamente son del 0 al 9"<<endl;
                        Sleep(2000);
                        system("cls");
                        goto case5;
                    }

                    else if (y>=0 && y<=9) { //Digito introducido valido
                        array[y] = 0;
                        cout<<"La posicion del arreglo \"" <<y <<"\" ha sido eliminado correctamente" <<endl;
                        Sleep(3500);
                        system("cls");
                        goto case4;
                    }
                }
            else if (x == 51){
                cout<<"Volviendo al menu..." <<endl;
                Sleep(2000);
                system("cls");
                goto inicio; 
            }
                    
            else{
                cout<<"Ingrese una opcion correcta" <<endl;
                Sleep(2000);
                system("cls");
                goto case4;
            }       
        break;

        case 52: //Mostrar la sumatoria de los elementos del arreglo
        cout<<"Usted ingreso a la opcion 4 correctamente" <<endl;
        Sleep(2000);
        system("cls");
            
            menu5:
            cout<<"Este es su arreglo:" <<endl;

            for(y=0; y<10; y++) {
                        cout<<"["<<array[y]<<"]" ; //Impresion del arreglo (numeros del 0 al 9)
                    }
                    cout<<"\n";
                    for(y=0; y<10; y++) {
                        cout<<" "<<y<<" "; //Impresion de la numeracion del arreglo (0,1,2,3...9)
                    }
                cout<<"\n\n";

            Acum = 0;
            for(y=0; y<10; y++) {
                Acum = Acum + array[y]; //Acumulador = Acumulador + todo el arreglo 
            }
                
                cout<<"La sumatoria de todos los numeros de su arreglo es: "<<Acum <<endl;
                cout<<"\n";
                cout<<"[1] Volver al menu" <<endl;
                    cin>>x;
                    system("cls");

                        if (x == 49) { //Volver al menu de inicio
                            cout<<"Volviendo al menu..." <<endl;
                            Sleep(2000);
                            system("cls");
                            goto inicio; 
                            }

                        else{ //Digito introducido invalido
                            cout<<"Introduzca una opcion correcta" <<endl;
                            Sleep(2000);
                            system("cls");
                            goto menu5;
                        }
        break;

        case 53: //Mostar la multiplicacion de los elementos del arreglo
        cout<<"Usted ingreso a la opcion 5 correctamente" <<endl;
        Sleep(2000);   
        system("cls");

            menu6:
            cout<<"Este es su arreglo:" <<endl;

            for(y=0; y<10; y++) {
                    cout<<"["<<array [y]<<"]" ; //Impresion del arreglo (numeros del 0 al 9)
                }
                cout<<"\n";
                for(y=0; y<10; y++) {
                    cout<<" "<<y<<" "; //Impresion de la numeracion del arreglo (0,1,2,3...9)
                }
                cout<<"\n\n";

            Acum = 1;
            for(y=0; y<10; y++) {
                if (array[y]>0){
                    Acum = Acum * array[y]; //Acumulador = Acumulador + todo el arreglo 
                }
            }
                
                cout<<"La multiplicacion de todos los numeros de su arreglo es: "<<Acum <<endl;
                cout<<"\n";
                cout<<"[1] Volver al menu" <<endl;
                    cin>>x;
                    system("cls");

                        if (x == 49) { //Volver al menu de inicio
                            cout<<"Volviendo al menu..." <<endl;
                            Sleep(2000);
                            system("cls");
                            goto inicio; 
                            }

                        else{ //Digito introducido invalido
                            cout<<"Introduzca una opcion correcta" <<endl;
                            Sleep(2000);
                            system("cls");
                            goto menu6;
                        }
        break;

        case 54: //Mostar el valor minimo, maximo y el promedio de los elementos del arreglo
        cout<<"Usted ingreso a la opcion 6 correctamente" <<endl;
        Sleep(2000);    
        system("cls");

            menu7:
            cout<<"Este es su arreglo:" <<endl;

            for(y=0; y<10; y++) {
                cout<<"["<<array [y]<<"]" ; //Impresion del arreglo (numeros del 0 al 9)
                }
                cout<<"\n";
                for(y=0; y<10; y++) {
                    cout<<" "<<y<<" "; //Impresion de la numeracion del arreglo (0,1,2,3...9)
                }
                cout<<"\n\n";

                    int max, min;
                    max = array[0];
                    min = 100000000000000000;

                for (y=0; y<=9; y++){ //Valor maximo 
                    array[y];
                    if(array[y]>0){
                        if (array[y] > max) {
                            max = array [y];
                        }
                        if (array[y] <= min){ //Valor minimo 
                            min = array[y];
                        }
                    }
                }

                for (y=0; y<10; y++){ //Valor promedio
                    Acum = Acum+array[y];
                        if(array[y]>0){
                            cont++;
                        }
                    }
                        Acum = Acum/cont;

                    cout<<"El valor minimo de su arreglo es: "<<min <<endl;
                    cout<<"El valor maximo de su arreglo es: "<<max <<endl;
                    cout<<"El valor promedio de su arreglo es: "<<Acum <<endl;
                    cout<<"\n";
                    
                    cout<<"[1] Volver al menu" <<endl;
                            cin>>x;
                            system("cls");

                        if (x == 49) { //Volver al menu de inicio
                            cout<<"Volviendo al menu..." <<endl;
                            Sleep(2000);
                            system("cls");
                            goto inicio; 
                            }

                        else{ //Digito introducido invalido
                            cout<<"Introduzca una opcion correcta" <<endl;
                            Sleep(2000);
                            system("cls");
                            goto menu7;
                        }
        break;

        case 55: //Salir del programa
        cout<<"Usted ingreso a la opcion 7 correctamente" <<endl;
        Sleep(2000);
            system("cls");
            cout<<"Gracias por usar el programa" <<endl;
            exit(EXIT_SUCCESS); 
        break;

        default:
            system("cls");
            cout<<"Introduzca un caracter valido" <<endl;
            Sleep(2500);
            goto inicio;
        break;
    }//Fin del Switch

return 0;
}//Fin de Main