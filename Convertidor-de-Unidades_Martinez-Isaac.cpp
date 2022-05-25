/********************PRESENTACION*******************************

NOMBRE: Isaac Martinez
FECHA: 25/Mayo/2022
PROGRAMA: Proyecto Final
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Libreria de Convertidor de Unidades (Proyecto Final)

**************************************************************/

#include <iostream>

using namespace std;

//DECLARAR FUNCIONES
void GuardarBinario(float Variable);
void GuardarOctal(float Variable);

void DecimalBinario(int UnidadDecimal){
float Binario;
    if (UnidadDecimal!=0){
        DecimalBinario(UnidadDecimal / 2);
        cout<<UnidadDecimal%2;
        Binario = UnidadDecimal%2;
        GuardarBinario(Binario);
    } //Fin de Decimal a Binario
} //Fin de la funcion

void DecimalOctal(int UnidadDecimal){
float Octal;
    if(UnidadDecimal != 0){
        DecimalOctal(UnidadDecimal / 8);
        cout<<UnidadDecimal%8;
        Octal = UnidadDecimal%8;
        GuardarOctal(Octal);
    } //Fin de Decimal a Octal
} //Fin de la funcion

void DecimalHexadecimal(int UnidadDecimal){

    if(UnidadDecimal < 16){
        switch(UnidadDecimal){

            case 10:
                cout<<"A";
            break;

            case 11:
                cout<<"B";
            break;

            case 12:
                cout<<"C";
            break;

            case 13:
                cout<<"D";
            break;

            case 14:
                cout<<"E";
            break;

            case 15:
                cout<<"F";
            break;

            default:
                cout<<UnidadDecimal;
            break;

        } //Fin de switch
    } //Fin de if

    else{
        DecimalHexadecimal(UnidadDecimal/16);
        DecimalHexadecimal(UnidadDecimal%16);
    } //Fin de else

} // Fin de la funcion Decimal a Hexadecimal
