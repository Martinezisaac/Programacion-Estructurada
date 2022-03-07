/********************PRESENTACION*******************************

NOMBRE: Isaac Martinez
FECHA: 07/Marzo/2022
PROGRAMA: Actividad de programacion 7
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Retomar la actividad 4, e implementar lo siguiente:
-Se debe realizar con funciones
-Se debe implementar la función de auto-llenado
-Se podrá llenar hasta 50 espacios con valores  random entre 1 y 200, los cuales le serán preguntados al usuario final
-implementar 2 algoritmos de ordenamiento (burbuja y Quicksort)
-implementar el algoritmo de busqueda binaria
-implementar que cuando se inserten, se vayan ordenando de menor a mayor

**************************************************************/

#include <iostream>
#include <windows.h>
#include "rammarlib.cpp"

using namespace std;

int Acum;
float Grado;
char Opcion, MenuPrincipal, MenuOperaciones, MenuAlgoritmos;

int main () {
system("cls"); //Borrar la pantalla 
const int NCOLUMNAS = 50; //Valor para las columnas 
float Arreglo [1][NCOLUMNAS] = {{0}}; //Declaracion del arreglo

//Bienvenida/Inicio del programa
cout<<"Bienvenido usuario" <<endl;
Windows();
Bienvenida:
    cout<<"Indicar el grado de la matriz representa la magnitud de la misma, puede obtener valores desde 2 (1x2) hasta 50 (1x50)\n" <<endl;
    cout<<"Ingrese el grado de la matriz" <<endl;
    cout<<"Respuesta: ";
    cin>>Grado;
    system("cls");
        if(Grado>0 && Grado<=50) { //if inicial
        cout<<"Configurando su matriz..." <<endl;
        Windows();

    MenuPrincipal:
    system("cls");
        cout<<"Selecciona una de las opciones\n" <<endl; 
        cout<<"[1] Modificar la cantidad de espacios del arreglo" <<endl;
        cout<<"[2] Mostrar los elementos del arreglo"<<endl; 
        cout<<"[3] Insertar elementos en el arreglo" <<endl; 
        cout<<"[4] Borrar elementos del arreglo" <<endl; 
        cout<<"[5] Algoritmos de ordenamiento" <<endl; 
        cout<<"[6] Realizar operaciones con el arreglo" <<endl; 
        cout<<"[7] Salir del programa\n" <<endl; 
        cout<<"Respuesta: ";
        cin>>MenuPrincipal;
        system("cls");

    switch (MenuPrincipal)
    {
        case 49: //Modificar la cantidad de espacios en el arreglo
            CargandoOpcion();
            goto Bienvenida;
        break;

        case 50: //Mostrar elementos del arreglo
            CargandoOpcion();
            Op2:
                ImpArreglo(Arreglo,1,Grado); //Impresion del arreglo
                cout<<"[1] Volver al menu" <<endl;
                cout<<"[2] Salir del programa" <<endl;
                cin>>Opcion;
                system("cls");
                    if(Opcion==49){ //Volver al menu 
                        Menu();
                        goto MenuPrincipal;
                    }
                    else if(Opcion==50){ //Salir del programa
                        Salir();
                    }
                    else{ //Opcion predeterminada 
                        Predeterminado();
                        goto Op2;
                    } 
        break;

        case 51: //Insertar elementos en el arreglo 
            Llenar:
                LlenarArreglo(Arreglo,1,Grado); //Llenar los espacios del arreglo
            Op3:
                ImpArreglo(Arreglo,1,Grado); //Impresion del arreglo 
                cout<<"[1] Volver al menu" <<endl;
                cout<<"[2] Volver a llenar el arreglo" <<endl;
                cout<<"[3] Salir del programa" <<endl;
                cin>>Opcion;
                system("cls");
                    if(Opcion==49){ //Volver al menu 
                        Menu();
                        goto MenuPrincipal;
                    }
                    else if(Opcion==50){ //Salir del programa
                        goto Llenar;
                    }
                    else if(Opcion==51){ //Salir del programa
                        Salir();
                    }
                    else{ //Opcion predeterminada 
                        Predeterminado();
                        goto Op3;
                    } 
        break;

        case 52: //Borrar los elementos del arreglo
            BorrarArreglo(Arreglo,1,Grado); //Borrar arreglo
            cout<<"El arreglo se ha borrado correctamente..."<<endl;
            Op4: 
                ImpArreglo(Arreglo,1,Grado); //Impresion del arreglo
                cout<<"[1] Volver al menu" <<endl;
                cout<<"[2] Salir del programa" <<endl;
                cin>>Opcion;
                system("cls");
                    if(Opcion==49){ //Volver al menu 
                        Menu();
                        goto MenuPrincipal;
                    }
                    else if(Opcion==50){ //Salir del programa
                        Salir();
                    }
                    else{ //Opcion predeterminada 
                        Predeterminado();
                        goto Op4;
                    } 
        break;

        case 53: //Algoritmos de ordenamiento
            cout<<"Cargando menu de algoritmos de ordenamiento"<<endl;
            Windows();
            MenuAlgoritmos:
            cout<<"Que metodo de ordenamiento desea utilizar?\n"<<endl;
            cout<<"[1] Ordenamiento por Burbuja" <<endl;
            cout<<"[2] Ordenamiento por Quicksort" <<endl;
            cout<<"[3] Volver al menur principal" <<endl;
            cin>>MenuAlgoritmos;
            system("cls");

            switch (MenuAlgoritmos){
                case 49: //Ordenamiento por Burbuja
                OrdenamientoBurbuja:
                    cout<<"Ordenando los espacios de los arreglos por el metodo de ordenamiento Burbuja..."<<endl;
                    Windows();
                    Burbuja(Arreglo,Grado); //Metodo de ordenamiento burbuja
                    Op7: 
                        ImpArreglo(Arreglo,1,Grado); //Impresion del arreglo
                        cout<<"[1] Volver al menu de algoritmos" <<endl; 
                        cout<<"[2] Volver al menu principal" <<endl;
                        cout<<"[3] Utilizar el algoritmo de busqueda binaria" <<endl;
                        cin>>Opcion;
                        system("cls");
                            if(Opcion==49){ //Volver al menu de algoritmos de ordenamiento
                                cout<<"Volviendo al menu de algoritmos de ordenamiento..." <<endl;
                                Windows();
                                goto MenuAlgoritmos;
                            }
                            else if(Opcion==50){ //Volver al menu principal
                                Menu();
                                goto MenuPrincipal;
                            }
                            else if(Opcion==51){ //Busqueda binaria 
                                cout<<"El algoritmo de busqueda binaria encuentra un numero determinado "<<endl;
                                cout<<"dentro del arreglo, el cual debe de estar ordenado de manera ascendente...\n"<<endl;
                                Op6:
                                ImpArreglo(Arreglo,1,Grado);
                                BusquedaBinaria(Arreglo,Grado);
                                    cout<<"\n[1] Volver al menu de algoritmos de ordenamiento" <<endl;
                                    cout<<"[2] Utilizar el algoritmo de busqueda binaria nuevamente" <<endl;
                                    cin>>Opcion;
                                    system("cls");
                                        if(Opcion==49){ //Volver al menu de algoritmos de ordenamiento
                                            cout<<"Volviendo al menu de algoritmos de ordenamiento..." <<endl;
                                            Windows();
                                            goto MenuAlgoritmos;
                                        } //Fin de if
                                        else if (Opcion==50){ //Utilizar nuevamente el algoritmo de busqueda binaria
                                            cout<<"Cargando algoritmo..."<<endl;
                                            Windows();
                                            goto Op6;
                                        } //Fin de else if 
                                        else { //Mensaje predeterminado
                                            Predeterminado();
                                            goto Op6;
                                        }//Fin de else
                            } //Fin de else if
                            else{ //Mensaje predeterminado 
                                Predeterminado();
                                goto Op7;
                            }
                break;

                case 50: //Ordenamiento por Quicksort
                    goto OrdenamientoBurbuja;
                    //El algortimo QuickSort es muy complicado...
                break;

                case 51: //Volver al menu principal
                    cout<<"Volviendo al menu principal" <<endl;
                    Windows();
                    goto MenuPrincipal;
                break;

                default: //Mensaje predeterminado
                cout<<"Hola";
                break;
        } //Fin de switch Menu Algoritmos

        case 54: //Realizar operaciones con el arreglo
            cout<<"Cargando operaciones..."<<endl;
            Windows();
            MenuOperaciones:
            ImpArreglo (Arreglo,1,Grado);
            cout<<"Que operacion deseas hacer?" <<endl;
            cout<<"[1] Suma del arreglo"<<endl;
            cout<<"[2] Resta del arreglo"<<endl;
            cout<<"[3] Multiplicacion del arreglo"<<endl;
            cout<<"[4] Mostrar el valor minimo, maximo y promedio del arreglo"<<endl;
            cout<<"[5] Volver al menu principal" <<endl;
            cin>>MenuOperaciones;
            system("cls");

                switch (MenuOperaciones){
                    case 49: //Suma del arreglo
                        cout<<"Sumando el arreglo..."<<endl;
                        Windows();
                        ImpArreglo(Arreglo,1,Grado);
                        SumarArreglo(Arreglo,1,Grado);
                        cout<<"\n";
                        cout<<"[1] Volver al menu de operaciones" <<endl;
                        cout<<"[2] Volver al menu principal" <<endl;
                        cin>>Opcion;
                        system("cls");
                            if(Opcion==49){ //Volver al menu de operaciones
                                goto MenuOperaciones;
                            }
                            else if(Opcion==50){ //Volver al menu principal 
                                Menu();
                                goto MenuPrincipal;
                            }
                            else{ //Mensaje predeterminado 
                                Predeterminado();
                                goto MenuOperaciones;
                            }
                    break;

                    case 50: //Resta del arreglo
                        cout<<"Restando el arreglo..."<<endl;
                        Windows();
                        ImpArreglo(Arreglo,1,Grado);
                        RestarArreglo(Arreglo,1,Grado);
                        cout<<"\n";
                        cout<<"[1] Volver al menu de operaciones" <<endl;
                        cout<<"[2] Volver al menu principal" <<endl;
                        cin>>Opcion;
                        system("cls");
                            if(Opcion==49){ //Volver al menu de operaciones
                                goto MenuOperaciones;
                            }
                            else if(Opcion==50){ //Volver al menu principal 
                                Menu();
                                goto MenuPrincipal;
                            }
                            else{ //Mensaje predeterminado 
                                Predeterminado();
                                goto MenuOperaciones;
                            }
                    break;

                    case 51: //Multiplicacion del arreglo 
                        cout<<"Multiplicando el arreglo..."<<endl;
                        Windows();
                        ImpArreglo(Arreglo,1,Grado);
                        MultiplicarArreglo(Arreglo,1,Grado);
                        cout<<"\n";
                        cout<<"[1] Volver al menu de operaciones" <<endl;
                        cout<<"[2] Volver al menu principal" <<endl;
                        cin>>Opcion;
                        system("cls");
                            if(Opcion==49){ //Volver al menu de operaciones
                                goto MenuOperaciones;
                            }
                            else if(Opcion==50){ //Volver al menu principal 
                                Menu();
                                goto MenuPrincipal;
                            }
                            else{ //Mensaje predeterminado 
                                Predeterminado();
                                goto MenuOperaciones;
                            }
                    break;

                    case 52: //Mostrar el valor minimo, maximo y promedio
                        cout<<"Realizando operaciones..."<<endl;
                        Windows();
                        ImpArreglo(Arreglo,1,Grado); //Impresion del arreglo
                        Promedio(Arreglo,1,Grado); //Valor promedio
                        MinMax(Arreglo,1,Grado); //Valor minimo
                        cout<<"\n";
                        cout<<"[1] Volver al menu de operaciones" <<endl;
                        cout<<"[2] Volver al menu principal" <<endl;
                        cin>>Opcion;
                        system("cls");
                            if(Opcion==49){ //Volver al menu de operaciones
                                goto MenuOperaciones;
                            }
                            else if(Opcion==50){ //Volver al menu principal 
                                Menu();
                                goto MenuPrincipal;
                            }
                            else{ //Mensaje predeterminado 
                                Predeterminado();
                                goto MenuOperaciones;
                            }
                    break;

                    case 53:
                        Menu();
                        goto MenuPrincipal;
                    break;

                    default: //Mensaje predetemrinado
                        system("cls");
                        cout<<"Introduzca un caracter valido" <<endl;
                        Sleep(2500);
                        goto MenuOperaciones;
                    break;
                } //Fin de Swtich MenuOperaciones 
        break;

        case 55: //Salir del programa
            Salir();
        break;

        default: //Mensaje predeterminado 
            system("cls");
            cout<<"Introduzca un caracter valido" <<endl;
            Sleep(2500);
            goto MenuPrincipal;
        break;
    } //Fin de Switch MenuPrincipal 
    } //Fin de if inicial
    else{ //else inicial
        cout<<"Ingrese una cantidad entre 1 y 50..." <<endl;
        Windows();
        goto Bienvenida;
    } //Fin de else inicial
} //Fin de Main 

//FIN DEL PROGRAMA :)