#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

float x,Acum;

main(){

cout<<"Ingresa un numero para multiplicar" <<endl;
cin>>x;
Acum = x;
cout<<"x" <<endl;
cin>>x;

        inicio:
        Acum = Acum * x;
        cout<<"\nTotal de la multiplicacion: " <<Acum <<endl;
        cout<<"Ingrese 00 para dejar de multiplicar"<<endl;
        cout<<"Ingrese un numero para multiplicar tu cantidad" <<endl;
        cin>>x;

        if (x==00) { 
                exit(EXIT_SUCCESS);
                   }
        else {
                goto inicio;
        }

return 0;
}
