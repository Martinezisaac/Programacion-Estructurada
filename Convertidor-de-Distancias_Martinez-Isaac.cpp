/*Libreria con el proposito especifico de poder convertir hasta 5 unidades entre si
(centimetros, metros, millas, yardas, pulgadas, kilometros, pies, etc.) */

#include <iostream>
#include <windows.h>

using namespace std;

//VARIABLES GLOBALES
int Unidad1, Unidad2;
float Medida1, Resultado;
char U;

//FUNCIONES
void Predeterminado();
void Puntos();

void ConvertidorDeDistancias(){

    Inicio:
    cout<<"Seleccione la unidad de su medida\n" <<endl;
    
    cout<<"[1] - Centimetros (cm)" <<endl;
    cout<<"[2] - Metros (m)" <<endl;
    cout<<"[3] - Pies (ft)" <<endl;
    cout<<"[4] - Kilometros (km)" <<endl;
    cout<<"[5] - Millas (mi)" <<endl;
    cout<<"\nSeleccion: "; 
    cin>>Unidad1;
    system("cls");

        switch (Unidad1){

            case 1: //Centimetros
                cout<<"Ingrese su medida en Centimetros (cm): ";
                cin>>Medida1;
            break; //Fin de case 1

            case 2: //Metros
                cout<<"Ingrese su medida en Metros (m): ";
                cin>>Medida1;
            break; //Fin de case 2

            case 3: //Pies
                cout<<"Ingrese su medida en Pies (ft): ";
                cin>>Medida1;
            break; //Fin de case 3

            case 4: //Kilometros
                cout<<"Ingrese su medida en Kilometros (km): ";
                cin>>Medida1;
            break; //Fin de case 4

            case 5: //Millas
                cout<<"Ingrese su medida en Millas (mi): ";
                cin>>Medida1;
            break; //Fin de case 5

            default: //Mensaje predetermiando
                Predeterminado();
                goto Inicio;
            break; //Fin de case default

        } //Fin de switch

    Unidad:
    cout<<"\nSeleccione la unidad a la que quiere convertir su medida\n" <<endl;

    cout<<"[1] - Centimetros (cm)" <<endl;
    cout<<"[2] - Metros (m)" <<endl;
    cout<<"[3] - Pies (ft)" <<endl;
    cout<<"[4] - Kilometros (km)" <<endl;
    cout<<"[5] - Millas (mi)" <<endl;
    cout<<"\nSeleccion: "; 
    cin>>Unidad2;

    //Medida1 = 1(Cm) | Medida1 = 2(m) | Medida1 = 3(ft) | Medida1 = 4(km) | Medida1 = 5(mi)

        switch(Unidad2){

            case 1: // X unidad a Centimetros
                if(Unidad1 == 1){ //Centimetros a centimetros
                    cout<<"\nIngrese una unidad de conversion diferente"; Puntos();
                    goto Unidad;
                }
                else if(Unidad1 == 2){ //Metros a Centimetros
                    Resultado = (Medida1 * 100);
                    cout<<Medida1 <<" (m) = " <<Resultado <<" (cm)";   
                }
                else if(Unidad1 == 3){ //Pies a Centimetros
                    Resultado = (Medida1 * 30.48);
                    cout<<Medida1 <<" (ft) = " <<Resultado <<" (cm)"; 
                }
                else if(Unidad1 == 4){ //Kilometros a Centimetros
                    Resultado = (Medida1 * 100000);
                    cout<<Medida1 <<" (km) = " <<Resultado <<" (cm)"; 
                }
                else if(Unidad1 == 5){ //Millas a Centimetros
                    Resultado = (Medida1 * 160934);
                    cout<<Medida1 <<" (mi) = " <<Resultado <<" (cm)"; 
                }
            break; //Fin de case 1

            case 2: // X unidad a Metros
                if(Unidad1 == 1){ //Centimetros a Metros
                    Resultado = (Medida1 / 100);
                    cout<<Medida1 <<" (cm) = " <<Resultado <<" (m)"; 
                }
                else if(Unidad1 == 2){ //Metros a Metros
                    cout<<"\nIngrese una unidad de conversion diferente"; Puntos();
                    goto Unidad; 
                }
                else if(Unidad1 == 3){ //Pies a Metros
                    Resultado = (Medida1 / 3.281);
                    cout<<Medida1 <<" (ft) = " <<Resultado <<" (m)"; 
                }
                else if(Unidad1 == 4){ //Kilometros a Metros
                    Resultado = (Medida1 * 1000);
                    cout<<Medida1 <<" (km) = " <<Resultado <<" (m)"; 
                }
                else if(Unidad1 == 5){ //Millas a Metros
                    Resultado = (Medida1 * 1609);
                    cout<<Medida1 <<" (mi) = " <<Resultado <<" (m)"; 
                }
            break; //Fin de case 2

            case 3: // X unidad a Pies
                if(Unidad1 == 1){ //Centimetros a Pies
                    Resultado = (Medida1 / 30.48);
                    cout<<Medida1 <<" (cm) = " <<Resultado <<" (ft)"; 
                }
                else if(Unidad1 == 2){ //Metros a Pies
                    Resultado = (Medida1 * 3.281);
                    cout<<Medida1 <<" (m) = " <<Resultado <<" (ft)"; 
                }
                else if(Unidad1 == 3){ //Pies a Pies
                    cout<<"\nIngrese una unidad de conversion diferente"; Puntos();
                    goto Unidad; 
                }
                else if(Unidad1 == 4){ //Kilometros a Pies
                    Resultado = (Medida1 * 3281);
                    cout<<Medida1 <<" (km) = " <<Resultado <<" (ft)"; 
                }
                else if(Unidad1 == 5){ //Millas a Pies
                    Resultado = (Medida1 * 5280);
                    cout<<Medida1 <<" (mi) = " <<Resultado <<" (ft)"; 
                }
            break; //Fin de case 3

            case 4: // X unidad a Kilometros
                if(Unidad1 == 1){ //Centimetros a Kilometros
                    Resultado = (Medida1 / 100000);
                    cout<<Medida1 <<" (cm) = " <<Resultado <<" (km)"; 
                }
                else if(Unidad1 == 2){ //Metros a Kilometros
                    Resultado = (Medida1 / 1000);
                    cout<<Medida1 <<" (m) = " <<Resultado <<" (km)"; 
                }
                else if(Unidad1 == 3){ //Pies a Kilometros
                    Resultado = (Medida1 / 3281);
                    cout<<Medida1 <<" (ft) = " <<Resultado <<" (km)"; 
                }
                else if(Unidad1 == 4){ //Kilometros a Kilometros
                    cout<<"\nIngrese una unidad de conversion diferente"; Puntos();
                    goto Unidad;
                }
                else if(Unidad1 == 5){ //Millas a Kilometros
                    Resultado = (Medida1 * 1.609);
                    cout<<Medida1 <<" (mi) = " <<Resultado <<" (km)"; 
                }
            break; //Fin de case 4

            case 5: // X unidad a Millas
                if(Unidad1 == 1){ //Centimetros a Millas
                    Resultado = (Medida1 / 160934);
                    cout<<Medida1 <<" (cm) = " <<Resultado <<" (mi)"; 
                }
                else if(Unidad1 == 2){ //Metros a Millas
                    Resultado = (Medida1 / 1609);
                    cout<<Medida1 <<" (m) = " <<Resultado <<" (mi)"; 
                }
                else if(Unidad1 == 3){ //Pies a Millas
                    Resultado = (Medida1 / 5280);
                    cout<<Medida1 <<" (ft) = " <<Resultado <<" (mi)"; 
                }
                else if(Unidad1 == 4){ //Kilometros a Millas
                    Resultado = (Medida1 / 1.609);
                    cout<<Medida1 <<" (km) = " <<Resultado <<" (mi)"; 
                }
                else if(Unidad1 == 5){ //Millas a Millas
                    cout<<"\nIngrese una unidad de conversion diferente"; Puntos();
                    goto Unidad;
                }
            break; //Fin de case 5

            default: //Mensaje predetermiando
                Predeterminado();
                goto Unidad;
            break; //Fin de case default

        } //Fin de Switch

} //Fin de la funcion

        /*
        cout<<"[1] - Convertir otra medida" <<endl;
        cout<<"[2] - Volver al menu principal" <<endl;
            cin>>VolverMenu;

            if(VolverMenu == 1){

            } //Ingresar otra medida
            else if(VolverMenu == 2){
                
            } //Volver al menu principal
            else{
                Predeterminado();
            } //Mensaje predetermiando

            */