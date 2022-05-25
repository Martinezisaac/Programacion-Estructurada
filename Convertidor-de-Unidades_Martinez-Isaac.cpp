#include <iostream>

using namespace std;

void DecimalBinario(int UnidadDecimal){
    if (UnidadDecimal!=0){
        DecimalBinario(UnidadDecimal/2);
        cout<<UnidadDecimal%2;
    } //Fin de Decimal a Binario
} //Fin de la funcion

void DecimalOctal(int UnidadDecimal){
    if(UnidadDecimal != 0){
        DecimalOctal(UnidadDecimal / 8);
        cout<<UnidadDecimal%8;
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
