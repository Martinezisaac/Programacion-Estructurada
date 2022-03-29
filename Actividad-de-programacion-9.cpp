/********************PRESENTACION*******************************

NOMBRE: Isaac Martinez
FECHA: 29/Marzo/2022
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

//VARIABLES GLOBALES
char Menu, Perfil, MenuPerfil;

//FUNCIONES
void Windows();
void Predeterminado();
void Salir(); 

//ESTRUCTURA
struct Datos{
	char Nombre[50];
	char ApellidoP[50];
	char ApellidoM[50];
	char Ciudad[50];
	char Estado[50];
	char Calle[50];
	int NumCalle;
	int Edad;
	float Estatura;
}D1,D2,D3,D4,D5;

int main(){
	system("cls");
	cout<<"Bienvenido Usuario\n" <<endl;
	Windows();

		Directorio:
		cout<<"Directorio de datos: \n" <<endl;
		cout<<"[1] Perfil 1" <<endl;
		cout<<"[2] Perfil 2" <<endl;
		cout<<"[3] Perfil 3" <<endl;
		cout<<"[4] Perfil 4" <<endl;
		cout<<"[5] Perfil 5" <<endl;
		cout<<"[6] Informacion de los perfiles" <<endl;
		cout<<"[7] Salir del programa\n" <<endl;
		cout<<"Seleccion: ";
		cin>>Perfil;
		system("cls");
				
			switch(Perfil){
				case 49: //Perfil 1
					cout<<"Cargando rubros..." <<endl;
					Windows();
					cout<<"Perfil 1\n" <<endl;
					fflush(stdin); //Vaciar el Buffer y permitir digitar valores
					cout<<"Nombre(s): "; cin.getline(D1.Nombre,50,'\n'); fflush(stdin);
					cout<<"Apellido Paterno: "; cin.getline(D1.ApellidoP,50,'\n'); fflush(stdin);
					cout<<"Apeliido Materno: "; cin.getline(D1.ApellidoM,50,'\n'); fflush(stdin);
					cout<<"Ciudad o Municipio: "; cin.getline(D1.Ciudad,50,'\n'); fflush(stdin);
					cout<<"Estado: "; cin.getline(D1.Estado,50,'\n'); fflush(stdin);
					cout<<"Calle: "; cin.getline(D1.Calle,50,'\n'); fflush(stdin);
					cout<<"Num. Domicilio: "; cin>>D1.NumCalle; fflush(stdin);
					cout<<"Edad: "; cin>>D1.Edad; fflush(stdin);
					cout<<"Estatura(cm) : "; cin>>D1.Estatura; fflush(stdin);
					system("cls");
					cout<<"\nGuardando informacion..." <<endl;
					Windows();
					goto Directorio; //Volver al directorio de datos
				break;

				case 50: //Perfil 2
					cout<<"Cargando rubros..." <<endl;
					Windows();
					cout<<"Perfil 2\n" <<endl;
					fflush(stdin); //Vaciar el Buffer y permitir digitar valores
					cout<<"Nombre(s): "; cin.getline(D2.Nombre,50,'\n'); fflush(stdin);
					cout<<"Apellido Paterno: "; cin.getline(D2.ApellidoP,50,'\n'); fflush(stdin);
					cout<<"Apeliido Materno: "; cin.getline(D2.ApellidoM,50,'\n'); fflush(stdin);
					cout<<"Ciudad o Municipio: "; cin.getline(D2.Ciudad,50,'\n'); fflush(stdin);
					cout<<"Estado: "; cin.getline(D2.Estado,50,'\n'); fflush(stdin);
					cout<<"Calle: "; cin.getline(D2.Calle,50,'\n'); fflush(stdin);
					cout<<"Num. Domicilio: "; cin>>D2.NumCalle; fflush(stdin);
					cout<<"Edad: "; cin>>D2.Edad; fflush(stdin);
					cout<<"Estatura(cm) : "; cin>>D2.Estatura; fflush(stdin);
					system("cls");
					cout<<"\nGuardando informacion..." <<endl;
					Windows();
					goto Directorio; //Volver al directorio de datos
				break;
						
				case 51: //Perfil 3
					cout<<"Cargando rubros..." <<endl;
					Windows();
					cout<<"Perfil 3\n" <<endl;
					fflush(stdin); //Vaciar el Buffer y permitir digitar valores
					cout<<"Nombre(s): "; cin.getline(D3.Nombre,50,'\n'); fflush(stdin);
					cout<<"Apellido Paterno: "; cin.getline(D3.ApellidoP,50,'\n'); fflush(stdin);
					cout<<"Apeliido Materno: "; cin.getline(D3.ApellidoM,50,'\n'); fflush(stdin);
					cout<<"Ciudad o Municipio: "; cin.getline(D3.Ciudad,50,'\n'); fflush(stdin);
					cout<<"Estado: "; cin.getline(D3.Estado,50,'\n'); fflush(stdin);
					cout<<"Calle: "; cin.getline(D3.Calle,50,'\n'); fflush(stdin);
					cout<<"Num. Domicilio: "; cin>>D3.NumCalle; fflush(stdin);
					cout<<"Edad: "; cin>>D3.Edad; fflush(stdin);
					cout<<"Estatura(cm) : "; cin>>D3.Estatura; fflush(stdin);
					system("cls");
					cout<<"\nGuardando informacion..." <<endl;
					Windows();
					goto Directorio; //Volver al directorio de datos
				break;
						
				case 52: //Perfil 4
					cout<<"Cargando rubros..." <<endl;
					Windows();
					cout<<"Perfil 4\n" <<endl;
					fflush(stdin); //Vaciar el Buffer y permitir digitar valores
					cout<<"Nombre(s): "; cin.getline(D4.Nombre,50,'\n'); fflush(stdin);
					cout<<"Apellido Paterno: "; cin.getline(D4.ApellidoP,50,'\n'); fflush(stdin);
					cout<<"Apeliido Materno: "; cin.getline(D4.ApellidoM,50,'\n'); fflush(stdin);
					cout<<"Ciudad o Municipio: "; cin.getline(D4.Ciudad,50,'\n'); fflush(stdin);
					cout<<"Estado: "; cin.getline(D4.Estado,50,'\n'); fflush(stdin);
					cout<<"Calle: "; cin.getline(D4.Calle,50,'\n'); fflush(stdin);
					cout<<"Num. Domicilio: "; cin>>D4.NumCalle; fflush(stdin); 
					cout<<"Edad: "; cin>>D4.Edad; fflush(stdin);
					cout<<"Estatura(cm) : "; cin>>D4.Estatura; fflush(stdin);
					system("cls");
					cout<<"\nGuardando informacion..." <<endl;
					Windows();
					goto Directorio; //Volver al directorio de datos
				break;
						
				case 53: //Perfil 5
					cout<<"Cargando rubros..." <<endl;
					Windows();
					cout<<"Perfil 5\n" <<endl;
					fflush(stdin); //Vaciar el Buffer y permitir digitar valores
					cout<<"Nombre(s): "; cin.getline(D5.Nombre,50,'\n'); fflush(stdin);
					cout<<"Apellido Paterno: "; cin.getline(D5.ApellidoP,50,'\n'); fflush(stdin);
					cout<<"Apeliido Materno: "; cin.getline(D5.ApellidoM,50,'\n'); fflush(stdin);
					cout<<"Ciudad o Municipio: "; cin.getline(D5.Ciudad,50,'\n'); fflush(stdin);
					cout<<"Estado: "; cin.getline(D5.Estado,50,'\n'); fflush(stdin);
					cout<<"Calle: "; cin.getline(D5.Calle,50,'\n'); fflush(stdin);
					cout<<"Num. Calle: "; cin>>D5.NumCalle; fflush(stdin);
					cout<<"Edad: "; cin>>D5.Edad; fflush(stdin);
					cout<<"Estatura(cm) : "; cin>>D5.Estatura; fflush(stdin);
					system("cls");
					cout<<"\nGuardando informacion..." <<endl;
					Windows();
					goto Directorio; //Volver al directorio de datos
				break;
						
				case 54: //Informacion de los perfiles 
					cout<<"Cargando Informacion..." <<endl;
					Windows();
					Perfiles:
					cout<<"Datos del Perfil 1:" <<endl;
						cout<<"Nombre Completo: "; cout<<D1.Nombre <<" " <<D1.ApellidoP <<" " <<D1.ApellidoM <<endl;//Concatenacion de Nombre, Apellido Paterno, Apellido Materno
						cout<<"Localizacion: " ; cout<<D1.Estado <<", " <<D1.Ciudad <<", " <<D1.Calle <<" # " <<D1.NumCalle <<endl;//Concatenacion de Ciudad o Municipio, Estado, Calle y Numero de Calle 
						cout<<"Datos: "; cout<<D1.Edad <<" anos, " <<D1.Estatura <<" cm" <<endl; //Concatenar Edad y Estatura
						cout<<"\n";

					cout<<"Datos del Perfil 2:" <<endl;
						cout<<"Nombre Completo: "; cout<<D2.Nombre <<" " <<D2.ApellidoP <<" " <<D2.ApellidoM <<endl;//Concatenacion de Nombre, Apellido Paterno, Apellido Materno
						cout<<"Localizacion: " ; cout<<D2.Estado <<", " <<D2.Ciudad <<", " <<D2.Calle <<" # " <<D2.NumCalle <<endl;//Concatenacion de Ciudad o Municipio, Estado, Calle y Numero de Calle 
						cout<<"Datos: "; cout<<D2.Edad <<" anos, " <<D2.Estatura <<" cm" <<endl; //Concatenar Edad y Estatura
						cout<<"\n";

					cout<<"Datos del Perfil 3:" <<endl;
						cout<<"Nombre Completo: "; cout<<D3.Nombre <<" " <<D3.ApellidoP <<" " <<D3.ApellidoM <<endl;//Concatenacion de Nombre, Apellido Paterno, Apellido Materno
						cout<<"Localizacion: " ; cout<<D3.Estado <<", " <<D3.Ciudad <<", " <<D3.Calle <<" # " <<D3.NumCalle <<endl;//Concatenacion de Ciudad o Municipio, Estado, Calle y Numero de Calle 
						cout<<"Datos: "; cout<<D3.Edad <<" anos, " <<D3.Estatura <<" cm" <<endl; //Concatenar Edad y Estatura
						cout<<"\n";

					cout<<"Datos del Perfil 4:" <<endl;
						cout<<"Nombre Completo: "; cout<<D4.Nombre <<" " <<D4.ApellidoP <<" " <<D4.ApellidoM <<endl;//Concatenacion de Nombre, Apellido Paterno, Apellido Materno
						cout<<"Localizacion: " ; cout<<D4.Estado <<", " <<D4.Ciudad <<", " <<D4.Calle <<" # " <<D1.NumCalle <<endl;//Concatenacion de Ciudad o Municipio, Estado, Calle y Numero de Calle 
						cout<<"Datos: "; cout<<D4.Edad <<" anos, " <<D4.Estatura <<" cm" <<endl; //Concatenar Edad y Estatura
						cout<<"\n";

					cout<<"Datos del Perfil 5:" <<endl;
						cout<<"Nombre Completo: "; cout<<D5.Nombre <<" " <<D5.ApellidoP <<" " <<D5.ApellidoM <<endl;//Concatenacion de Nombre, Apellido Paterno, Apellido Materno
						cout<<"Localizacion: " ; cout<<D5.Estado <<", " <<D5.Ciudad <<", " <<D5.Calle <<" # " <<D1.NumCalle <<endl;//Concatenacion de Ciudad o Municipio, Estado, Calle y Numero de Calle 
						cout<<"Datos: "; cout<<D5.Edad <<" anos, " <<D5.Estatura <<" cm" <<endl; //Concatenar Edad y Estatura
					
					cout<<"\n[1] - Volver al directorio" <<endl;
					cin>>MenuPerfil;
					
						if(MenuPerfil == 49){
							system("cls");
							cout<<"Volviendo al directorio..." <<endl;
							Windows();
							goto Directorio;
						}
						else{
							system("cls");
							Predeterminado();
							goto Perfiles;
						}
				break;

				case 55: //Salir del programa
					Salir();
				break;
				
				default:
					Predeterminado(); //Funcion de mensaje predeterminado
					goto Directorio;
				break;
			} //Fin de switch 
	
return 0;
} //Fin de main 

//FUNCIONES

//FUNCION PARA DORMIR Y RESETEAR PANTALLA
void Windows(){
	Sleep(2000);
	system("cls");
} //Fin de la funcion Windows

//FUNCION DE MENSAJE PREDETERMINADO
void Predeterminado(){ //Funcion de validacion tipo caracter 
    cout<<"Ingrese una opcion valida..." <<endl;
    Windows();
    //goto Op; 
} //Fin de la funcion

//FUNCION PARA SALIR DEL PROGRAMA
void Salir(){
    cout<<"Saliendo del programa..." <<endl;
    Sleep(2000);
    system("cls");
    cout<<"Usted ha salido correctamente del programa...\n" <<endl;
    exit(EXIT_SUCCESS); 
} //Fin de la funcion