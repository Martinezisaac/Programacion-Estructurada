/********************PRESENTACION*******************************

NOMBRE: Isaac Martinez
FECHA: 31/Enero/2022
PROGRAMA: Actividad de programacion 3
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Elaborar un programa en donde se le pida un numero al usuario:
    -Si el numero es mayor a 0 y menor a 500, subir la cantidad de 5 en 5, 100 veces.
    -Si el numero es mayor a 500 y menor a 1000, subir el numero de 10 en 10, 50 veces.
    -Si el numero es mayor a 1000, entonces imprimir "No se puede calcular el valor". 

**************************************************************/

#include <stdio.h>
#include <iostream>

using namespace std;

int Acum;
float x,y;
char i;

int main() {
system("cls");
inicio:

    cout<<"Ingresa un numero: ";
    cin>>x;

        if (x>0 && x<500){ Acum++;//Acumulador para las repeticiones 
                for(y=0; y<100; y++) { //La variable "y" hara las repeticiones desde 0 a 99 y se repetira hasta el numero final (99), con el fin de despues imprimir "x"
                    x = x + 5; //Acumulador (x = x + 5, 5 + 5 = 10, 10 + 5 = 15...)
                    cout<< x <<endl; } //Impresion de todas las repeticiones
                        }

        else if (x>500 && x<1000){ Acum++;//Acumulador para las repeticiones
                for(y=0; y<50; y++) { //La variable "y" hara las repeticiones desde 0 a 50 y se repetira hasta el numero final (49), con el fin de despues imprimir "x"
                    x = x + 10; //Acumulador (x = x + 10, 10 + 5 = 15, 15 + 5 = 20...)
                    cout<< x <<endl; } //Impresion de todas las repeticiones
                        }
            
        else if (x>1000){ Acum++;//Acumulador para las repeticiones
            cout<<"No se puede calcular el valor" <<endl;
                        }
        
        else //Todo aquel numero que no se encuentre en el "if" y "else if" no podra realizar la secuencia
            cout<<"Ingresa un caracter valido" <<endl; 

    do{
    cout<<"Deseas salir del programa? S = Si    N = No" <<endl;
    cin>>i; 

        system ("cls");
        if(i==115 || i==83){
            cout<<"Repeticiones del programa: " <<Acum <<endl;
            cout<<"Gracias por usar el programa" <<endl;
            exit(EXIT_SUCCESS);
        }

        else if (i==78 || i==110){
            goto inicio;
        }
        
        else
            cout<<"Ingrese un caracter valido" <<endl;

    }while(i!=115 && i!=83 && i!=78 && i!=110);

return 0;
}//Fin de Main 