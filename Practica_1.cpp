#include<iostream> //cabecera
using namespace std;

//Declaración de variables GLOBALES
string nombre;

//declaración de funcion
void imprimirMensaje (){
	//instrucciones
	cout<<"hola mundo"<<endl;
	cout<<"\nBienvenido a Algoritmos " <<nombre;
}
void capturarDatos(){
	cout<<"Ingresa tu primer nombre"<<endl;
	cin>>nombre;
}
main(){
	//instrucciones
	capturarDatos();
	imprimirMensaje();//llamada de la funcion
}