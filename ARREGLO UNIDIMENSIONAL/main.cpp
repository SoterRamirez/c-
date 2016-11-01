/* 
 * File:   main.cpp
 * Author: Soter
 * 
 * Created on 1 de noviembre de 2016, 10:44 AM
 */
#include <iostream>
#define MAX 30

// No se deberia declara, sino usar std:: para cada funcion de iostream
using namespace std;


// Inicio de la clase hacker
int a, b, c;
class hack {
	public:
		int array[30],n,i;};

// Final de la clase hack

// Inicio de la clase soter
class soter{
public:
    char nombre[8];
};
// Final de la clase soter

// inicio de la funcion principal del programa
int main(void){
    // objeto soter
    soter irc;
    
    cout<<"Saludos, cual es tu nombre?  "; 
    cin>>irc.nombre;
	    
    cout<<"\nHola "<<irc.nombre;
    
    //objeto hack
    hack num;
    //Se pide valor a usuari y se condiciona el valor
    do{
        cout<<"\n\nCantidad de elementos a ingresar: ";cin>>num.n;
            if(num.n<=0)
                cout<<"...No seas payaso(a), ingresa una cantidad correcta: "<<endl;
            if(num.n>MAX)
                cout<<"...La cantidad maxima permitida es "<<MAX<<" : "<<endl;
    }while(num.n<=0 || num.n>MAX);
    //Se hacen las operaciones que se piden el problema
		for(num.i=0; num.i<num.n; num.i++){
		cout<<"\n Elemneto ["<<num.i<<"] ";
		cin>> num.array	[num.i];
	}
	cout<<"\n Elementos en el array: ";
	for(num.i=0; num.i<num.n; num.i++){
		cout<<"\n Elemneto ["<<num.i<<"]: "<<num.array[num.i];
		
	}
	cout<<"\n Elementos en el array sin repetir: ";	
	
	                
    return 0;
}
