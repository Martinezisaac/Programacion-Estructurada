#include <iostream>

using namespace std;

//CONVERTIR TODA UNIDAD A CENTIMETROS

    float MaCM(float Unidad){
        return (Unidad * 100);
    } //Convertir Metros a centimetros

    float FTaCM(float Unidad){
        return (Unidad * 30.48);
    } //Convertir Pies a centimetros

    float KMaCM(float Unidad){
        return (Unidad * 100000);
    } //Convertir Kilometros a centimetros

    float MIaCM(float Unidad){
        return (Unidad * 160934);
    } //Convertir Millas a centimetros

//CONVERTIR A UNIDAD DESEADA

    float CMaM(float Unidad){
        return (Unidad / 100);
    } //Convertir Metros a centimetros

    float CMaFT(float Unidad){
        return (Unidad / 30.48);
    } //Convertir Pies a centimetros

    float CMaKM(float Unidad){
        return (Unidad / 100000);
    } //Convertir Kilometros a centimetros

    float CMaMI(float Unidad){
        return (Unidad / 160934);
    } //Convertir Millas a centimetros