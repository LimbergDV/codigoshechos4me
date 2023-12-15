#include<iostream> //cabecera
using namespace std;

//declaración de variables GLOBALES
string nombre;
int edad;
int nac;
//nac es el año de nacimiento

void ingresarDatos (){
	//instrucciones
	cout<<"Ingresa tu nombre: "<<endl;
	cin>>nombre;
	cout<<"Ingresa el año de nacimiento: "<<endl;
	cin>>nac;
}
	
void validarNacimiento (){
	while(nac<=0)
	{
	cout<<"\nError vuelva a intentarlo\n";
	cout<<"Ingrese el año de su nacimiento: "<<endl;
	cin>>nac;
}

}

void calcularEdad(){
	edad=2023-nac;
	if(edad>=18)
	{
		cout<<"\n"<<nombre<<" eres mayor de edad";
		}else {
			cout<<"\n"<<nombre<<" eres menor de edad";
		}
}

main(){
	ingresarDatos();
	validarNacimiento();
	calcularEdad();
}
	
	

	
