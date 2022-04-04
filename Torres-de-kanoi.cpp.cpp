#include<iostream>

using namespace std;
 
void hanoi(int num,char torre1,char torre3,char torre2)
{
    if(num==1)
    {
            cout<<"Mueva el bloque "<<num<<" desde la torre "<<torre1<<" hasta  "<<torre3<<endl;
             
    }
    else
    {
        hanoi(num-1,torre1,torre2,torre3);
        cout<<"Mueva el bloque "<<num<<" desde la torre "<<torre1<<" hasta  "<<torre3<<endl;
        hanoi(num-1,torre2,torre3,torre1);
    }
}
 
int main()
{
        int n;
        char torre1,torre2,torre3;
 
        cout<<"Los torres son 1 2 3\n";
        cout<<"Numero de discos: ";
        cin>>n;
        hanoi(n,'torre1','torre3','torre2');
         
}
