/********************PRESENTACION*******************************

NOMBRE: Isaac Martinez
FECHA: 05/Abril/2022
PROGRAMA: Actividad de programacion 9
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Realizar un programa con las siguientes caracterisiticas
			-Directorio con datos personales de los companeros del salon 
			-Datos: Nombre, Apellidos, Ciudad, Estado, Municipio, Calle, Edad, Estatura en cm
			-Solicitar datos de 5 companeros
			-Realizar una buena presentacion

**************************************************************/
#include <iostream>
#include <windows.h>

using namespace std;

//LIBRERIA DE FUNCIONES

//FUNCION PARA PAUSAR PUNTOS
void Puntos(){
	cout<<".";
	Sleep(666);
	cout<<".";
	Sleep(666);
	cout<<".";
	Sleep(666);
	system("cls");
} //Fin de la funcion

//FUNCION PARA DORMIR Y RESETEAR PANTALLA
void Windows(){
	Sleep(2000);
	system("cls");
} //Fin de la funcion Windows

//FUNCION DE MENSAJE PREDETERMINADO
void Predeterminado(){ //Funcion de validacion tipo caracter 
    cout<<"Ingrese una opcion valida"; Puntos();
    system("cls");
    //goto Op; 
} //Fin de la funcion

//FUNCION PARA SALIR DEL PROGRAMA
void Salir(){
    cout<<"Saliendo del programa"; Puntos();
    system("cls");
    cout<<"Usted ha salido correctamente del programa." <<endl;
    exit(EXIT_SUCCESS); 
} //Fin de la funcion

//ESTRUCTURA
struct Datos{
	char Nombre[50], ApellidoP[50], ApellidoM[50], Ciudad[50], Estado[50], Calle[50];
	int NumCalle, Edad;
	float Estatura;
}D[6]; //Cantidad de perfiles
//Coloque "D[6]" para evitar un bug que no permitia colocar informacion en el ultimo perfil... 

//FUNCION PARA LLENAR DATOS
void LlenarPerfil(int V){
		cout<<"Perfil " <<V <<endl;
		fflush(stdin); //Vaciar el Buffer y permitir digitar valores
		cout<<"\nNombre(s): "; cin.getline(D[V].Nombre,50,'\n'); fflush(stdin);
		cout<<"Apellido Paterno: "; cin.getline(D[V].ApellidoP,50,'\n'); fflush(stdin);
		cout<<"Apellido Materno: "; cin.getline(D[V].ApellidoM,50,'\n'); fflush(stdin);
		cout<<"Ciudad o Municipio: "; cin.getline(D[V].Ciudad,50,'\n'); fflush(stdin);
		cout<<"Estado: "; cin.getline(D[V].Estado,50,'\n'); fflush(stdin);
		cout<<"Calle: "; cin.getline(D[V].Calle,50,'\n'); fflush(stdin);
		cout<<"Num. Domicilio: "; cin>>D[V].NumCalle; fflush(stdin);
		cout<<"Edad: "; cin>>D[V].Edad; fflush(stdin);
		cout<<"Estatura(cm) : "; cin>>D[V].Estatura; fflush(stdin);
		system("cls");
		cout<<"\nGuardando informacion"; Puntos();
		//goto Directorio; //Volver al directorio de datos
} //Fin de la funcion

//FUNCION PARA MOSTRAR DATOS PRINCIPALES DE UN PERFIL
void MostrarInfo(){
	for(int f=1; f<=5; f++){
	cout<<"[" <<f  <<"]"<<" - "<<D[f].Nombre <<" " <<D[f].ApellidoP <<" " <<D[f].ApellidoM <<endl;//Concatenacion de Nombre, Apellido Paterno, Apellido Materno
	} //Fin de for
} //Fin de la funcion

//FUNCION PARA UN PERFIL EN ESPECIFICO
void MostrarPerfil(int V){
			cout<<"Datos del Perfil: " <<V <<endl;
			cout<<"Nombre Completo: "; cout<<D[V].Nombre <<" " <<D[V].ApellidoP <<" " <<D[V].ApellidoM <<endl;//Concatenacion de Nombre, Apellido Paterno, Apellido Materno
			cout<<"Estado: ";  cout<<D[V].Estado <<endl;
			cout<<"Ciudad o Municipio: "; cout<<D[V].Ciudad <<endl; 
			cout<<"Calle: "; cout<<D[V].Calle <<endl;
			cout<<"Num. Calle: "; cout <<D[V].NumCalle <<endl;
			cout<<"Edad: "; cout<<D[V].Edad <<endl; 
			cout<<"Estatura(cm): "; cout<<D[V].Estatura <<endl;
			cout<<"\n"; 
} //Fin de la funcion

//FUNCION PARA MOSTRAR TODOS LOS PERFILES
void MostrarPerfiles(){
	MostrarPerfil(1);
	MostrarPerfil(2);
	MostrarPerfil(3);
	MostrarPerfil(4);
	MostrarPerfil(5);
} //Fin de la funcion

/*
//FUNCION PARA MOSTRAR TODOS LOS PERFILES
void MostrarPerfiles(){
	cout<<"Cargando Informacion"; Puntos();
		for(int f=1; f<=5; f++){
			cout<<"Datos del Perfil: " <<f <<endl;
			cout<<"Nombre Completo: "; cout<<D[f].Nombre <<" " <<D[f].ApellidoP <<" " <<D[f].ApellidoM <<endl;//Concatenacion de Nombre, Apellido Paterno, Apellido Materno
			cout<<"Localizacion: " ; cout<<D[f].Estado <<", " <<D[f].Ciudad <<", " <<D[f].Calle <<" # " <<D[f].NumCalle <<endl;//Concatenacion de Ciudad o Municipio, Estado, Calle y Numero de Calle 
			cout<<"Datos: "; cout<<D[f].Edad <<" anos, " <<D[f].Estatura <<" cm" <<endl; //Concatenar Edad y Estatura
			cout<<"\n";
		} //Fin de for
} //Fin de la funcion
*/