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
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <vector>

using namespace std;

    //FUNCIONES
    void Windows(){ //Funciones de Windows 
        Sleep(2000); //Dormir el programa 
        system("cls"); //Resetear la pantalla 
    } //Fin de la funcion 

    void ImpArreglo(float array[][50], int NFILA, int NCOLUMNA){ //Impresion del arreglo
    cout<<"Estos son los valores de tu arreglo:" <<endl; 
        for(int x=0;x<NFILA;x++){
            cout<<"\n";
            for(int y=0;y<NCOLUMNA;y++){
                cout<<"["<<array[x][y]<<"] ";
            }//Fin de for columna
        }//Fin de for fila
        cout<<"\n"<<endl;
    }//Fin de la funcion

    void LlenarArreglo(float array[][50], int NFILA, int NCOLUMNA){ //Rellenar arreglo
    cout<<"Llenando los espacios del arreglo..."<<endl;
    Windows();
        for(int x=0;x<NFILA;x++){ 
            for(int y=0;y<NCOLUMNA;y++){
                array[x][y] = 1 + rand()%199;
            }//Fin de for columna
        }//Fin de for fila
    }//Fin de la funcion

    void BorrarArreglo(float array[][50], int NFILA, int NCOLUMNA){ //Borrar arreglo
    cout<<"Borrando los elementos del arreglo..." <<endl;
    Windows();
        for(int x=0;x<NFILA;x++){ 
            for(int y=0;y<NCOLUMNA;y++){
                array[x][y] = 0;
            }//Fin de for columna
        }//Fin de for fila 
    }//Fin de la funcion

    void SumarArreglo(float array[][50], int NFILA, int NCOLUMNA){ //Sumar arreglos
    int Acum = 0;
        for(int x=0;x<NFILA;x++){
            cout<<"\n";
                for(int y=0;y<NCOLUMNA;y++){
                    Acum = Acum + array[x][y];
                } //Fin de for Columna
        } //Fin de for fila
        cout<<"La suma total del arreglo es: "<<Acum <<endl; 
    } //Fin de la funcion 

    void RestarArreglo(float array[][50], int NFILA, int NCOLUMNA){ //Sumar arreglos
    int Acum = 0;
        for(int x=0;x<NFILA;x++){
            cout<<"\n";
                for(int y=0;y<NCOLUMNA;y++){
                    Acum = Acum - array[x][y];
                } //Fin de for Columna
        } //Fin de for fila
        cout<<"La resta total del arreglo es: "<<Acum <<endl; 
    } //Fin de la funcion

    void MultiplicarArreglo(float array[][50], int NFILA, int NCOLUMNA){ //Sumar arreglos
    int Acum = 1;
        for(int x=0;x<NFILA;x++){
            cout<<"\n";
                for(int y=0;y<NCOLUMNA;y++){
                    Acum = Acum * array[x][y];
                } //Fin de for Columna
        } //Fin de for fila
        cout<<"La multiplicacion total del arreglo es: "<<Acum <<endl; 
    } //Fin de la funcion 

    void Menu(){ //Funcion para volver al menu principal 
        cout<<"Volviendo al menu principal..." <<endl;
        Windows();
        //goto Menu; 
    }//Fin de la funcion

    void Predeterminado(){ //Funcion de validacion tipo caracter 
        cout<<"Ingrese una opcion valida..." <<endl;
        Windows();
        //goto Op; 
    }//Fin de la funcion

    void Salir(){
        cout<<"Saliendo del programa..." <<endl;
        Sleep(2000);
        system("cls");
        cout<<"Usted ha salido correctamente del programa...\n" <<endl;
        exit(EXIT_SUCCESS); 
    }//Fin de la funcion

    void CargandoOpcion(){ //Mensaje predeterminado para entrar a las opciones del programa 
        cout<<"Cargando Opcion..." <<endl;
        Windows();
    }//Fin de la funcion 

    void Promedio(float array[][50], int NFILA, int NCOLUMNA){ //Valor promedio del arreglo
    int Acum = 0;
    int Vpromedio;
        for(int x=0;x<NFILA;x++){
            cout<<"\n";
                for(int y=0;y<NCOLUMNA;y++){
                    Acum = Acum + array[x][y];
                    Vpromedio = Acum / NCOLUMNA;
                } //Fin de for Columna
        } //Fin de for fila
        cout<<"El valor promedio del arreglo es: "<<Vpromedio <<endl; 
    } //Fin de la funcion

    void MinMax(float array[][50],int NFILA, int NCOLUMNA){
    float menor, mayor;
    menor = array[0][0];
    mayor = array[0][0];      
        for(int x=0;x<NFILA;x++){
            for(int y=0;y<NCOLUMNA;y++){
                for(int u=0;u<NCOLUMNA;u++){
                    if(menor>array[0][u]){
                        menor = array[0][u];
                    }//Fin de if
                    if(mayor<array[0][u]){
                        mayor = array[0][u];
                    }//Fin de if 
                } //Fin de for Columna
            } //Fin de for fila
        }//Fin de la funcion
        cout<<"El numero menor del arreglo es: "<<menor <<endl;
        cout<<"El numero mayor del arreglo es: "<<mayor <<endl;
    }//Fin de la funcion    

    void Burbuja(float array[][50], int NCOLUMNA){ //Metodo de ordenamiento burbuja
    cout<<"Metodo de ordenamiento Burbuja"<<endl;
    float cambio;
         for (int x = 0; x<NCOLUMNA; x++){
             for (int y = x; y<NCOLUMNA; y++){
                 if (array[0][x]>array[0][y]){
                     cambio = array[0][x];
                     array[0][x] = array[0][y];
                     array[0][y]=cambio;
                 }//Fin de if
             }//Fin de for ordenamiento
         }//Fin de for x
    } //Fin de la funcion

    void BusquedaBinaria(float array[][50], int NCOLUMNA){ //Busqueda binaria
    cout<<"Algoritmo de busqueda binaria: " <<endl;
    int inferior,superior,mitad,valor;
        char validacion = 'F';
        array[0][NCOLUMNA];
        cout<<"Que numero en el arreglo estas buscando?: ";
        cin>>valor;
        inferior = 0;
        superior = NCOLUMNA;
            while(inferior<=superior){
                mitad = (inferior + superior) / 2; 
                    if(array[0][mitad] == valor){
                        validacion = 'V';
                        break;
                    }//Fin de if encontrado
                    if(array[0][mitad] > valor){
                        superior = mitad;
                        mitad = (inferior + superior) / 2;                      
                    }//Fin de if
                    if(array[0][mitad] < valor){
                        inferior = mitad;
                        mitad = (inferior + superior) / 2;                       
                    }//Fin de if
            }//Fin de while
            if(validacion == 'V'){
                cout<<"\nEl numero a sido encontrando en la posicion: "<<mitad<<endl;
                }//Fin de if
            else {
                cout<<"\nEl numero no ha sido encontrado..."<<endl;
            } //Fin de else 
        }//Fin de la funcion

        //QUICKSORT
        int particion(vector<float>&Arreglo2, int inicio, int final){
            int pivote = Arreglo2[inicio];
            int i = inicio + 1;
                for(int j=i;j<=final; j++){
                    if(Arreglo2[j]<pivote){
                       swap(Arreglo2[i], Arreglo2[j]);
                        i++;
                    }//Fin de if
                }//Fin de for
            swap(Arreglo2[inicio], Arreglo2[i-1]);
                return i-1;
        } //Fin de la funcion
        
        void Quicksort(vector<float>&array, int inicio, int final){ //Busqueda Quicksort 
            if(inicio<final){
                int pivote = particion(array, inicio, final);
                Quicksort(array,inicio,final-1);
                Quicksort(array,pivote+1,final);
            }//Fin de if
        }//Fin de la funcion

        void ImpQuicksort(vector<float>Arreglo2){
            for(int i=0;i<Arreglo2.size();i++){
                cout<<"["<<Arreglo2[i]<<"] ";
            }
        }