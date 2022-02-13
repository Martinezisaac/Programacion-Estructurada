/********************PRESENTACION*******************************

NOMBRE: Isaac Martinez
FECHA: 14/Febrero/2022
PROGRAMA: Actividad de programacion 5
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Utilizar funciones para disminuir la cantidad de lineas utilizadas en la actividad de programacion 4 

**************************************************************/

#include <iostream>
#include <windows.h>
#include "imglib.cpp"

using namespace std;

int Acum, v, max, min, cont; //y = valor entero para preguntar en los menu   //Acum = Acumulador para la suma    //min = Valor minimo  //max = Valor maximo   //cont = Contador
char i, u, x;     //i = switch    //u = Codigo ASCII    //x = Codigo ASCII 

int main () {
inicio:
system("cls");

    cout<<"Selecciona una de las siguientes opciones\n" <<endl;
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
        Windows();
            
            case1:
                Arreglo();

            cout<<"[1] Volver al menu" <<endl;
            cout<<"[2] Salir del programa" <<endl;
            cin>>u;
            system("cls");

                if (u == 49) { //Si el usuario selecciona 1 volvera al menu
                    Menu();
                    goto inicio;
                }
                else if (u == 50) { //Si el usuario selecciona 2 saldra del programa
                    Salir();
                }
                else { //Si el usuario selecciona cualquier otra opcion que no sea 1 y 2 le marcara error y volvera a preguntar
                    OpIncorrecta();
                    goto case1;
                }
        break;

        case 50: //Insertar elementos en el arreglo
        cout<<"Usted ingreso a la opcion 2 correctamente" <<endl;
        Windows();   

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

            cout<<"[1] Insertar un digito en el arreglo" <<endl;
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
                                        Windows();
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
                                                cout<<"El valor \"" <<v <<"\" se sobrescribio correctamente" <<endl;
                                                Windows();
                                                goto case2;
                                            }
                                            else if (u == 'N' || u == 'n') {
                                                cout<<"Volviendo al menu para insertar un valor..." <<endl;
                                                Windows();
                                                goto case2;
                                            }
                                            else {
                                                OpIncorrecta();
                                                goto caseU;
                                            }
                                    }
                                    else{
                                        system("cls");
                                        array[y] = v;
                                        cout<<"El valor \"" <<v <<"\" se ha guardado correctamente" <<endl;
                                        Windows();
                                        goto case2;
                                    }
                                }
                                else{
                                    system("cls");
                                    cout<<"Las posiciones del arreglo solamente son del 0 al 9"<<endl;
                                    Windows();
                                    goto case3;
                                }
                        }
                else if (x == 50){
                    Menu();
                    goto inicio; 
                }        
                else{
                    OpIncorrecta();
                    goto case2;
                }
        break;

        case 51: //Borrar elementos del arreglo
        cout<<"Usted ingreso a la opcion 3 correctamente" <<endl;
        Windows();

            case4:
            Arreglo();

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
                Windows();
                goto case4; 
            }
            else if (x == 50){

                case5:
                    Arreglo();

                cout<<"Que posicion del arreglo deseas borrar?" <<endl;
                cin>>y;
                system("cls");

                    if(y<0 || y>9) { //Digito introducio invalido
                        cout<<"Las posiciones del arreglo solamente son del 0 al 9"<<endl;
                        Windows();
                        goto case5;
                    }
                    else if (y>=0 && y<=9) { //Digito introducido valido
                        array[y] = 0;
                        cout<<"La posicion del arreglo \"" <<y <<"\" ha sido eliminado correctamente" <<endl;
                        Windows();
                        goto case4;
                    }
                }
            else if (x == 51){
                Menu();
                goto inicio; 
            }        
            else{
                OpIncorrecta();
                goto case4;
            }       
        break;

        case 52: //Mostrar la sumatoria de los elementos del arreglo
        cout<<"Usted ingreso a la opcion 4 correctamente" <<endl;
        Windows();
            
            menu5:
            Arreglo();

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
                            Menu();
                            goto inicio; 
                            }
                        else{ //Digito introducido invalido
                            OpIncorrecta();
                            goto menu5;
                        }
        break;

        case 53: //Mostar la multiplicacion de los elementos del arreglo
        cout<<"Usted ingreso a la opcion 5 correctamente" <<endl;
        Windows();

            menu6:
            Arreglo();

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
                            Menu();
                            goto inicio; 
                            }
                        else{ //Digito introducido invalido
                            OpIncorrecta();
                            goto menu6;
                        }
        break;

        case 54: //Mostar el valor minimo, maximo y el promedio de los elementos del arreglo
        cout<<"Usted ingreso a la opcion 6 correctamente" <<endl;
        Windows();

            menu7:
            Arreglo();

                    int max, min;
                    max = array[0];
                    min = 100;

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
                    Acum = Acum + array[y];
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
                            Menu();
                            goto inicio; 
                            }
                        else{ //Digito introducido invalido
                            OpIncorrecta();
                            goto menu7;
                        }
        break;

        case 55: //Salir del programa
        cout<<"Usted ingreso a la opcion 7 correctamente" <<endl;
            Sleep(2000);
            Salir();
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