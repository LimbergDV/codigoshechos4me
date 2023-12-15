#include <iostream>
using namespace std;

int precios [5];
string nombres [5];

void ingresarDatos(){
	cout<<"Ingresa los nombres de los productos: "<<endl;
	
	for(int i=0;i<5; i++){
		cout<<"Nombre "<<i+1<<endl;
		cin>>nombres[i];
	}
	cout<<"Ingresa los precios de los productos: "<<endl;
	for(int i=0; i<5; i++){
		cout<<nombres[i]<<" : ";
		cin>>precios[i];
	}
	
}

void ordenar(){
	int auxPrecio;
	string auxNombre;
	
	for(int i=0;i<5; i++){
		for(int j=i+1; j<5; j++){
			if (precios [i] > precios[j]){
				auxPrecio = precios [i];
				auxNombre = nombres [i];
				precios[i] = precios[j];
				nombres[i] = nombres [j];
				precios[j] = auxPrecio;
				nombres[j] = auxNombre; 
			}
		
		}
	}
	
}

void visualizar(){
	cout<<"Producto\t"<<"Precio"<<endl;
	for(int i=0;i<5;i++){
	cout<<nombres[i]<<"\t"<<precios[i]<<endl;
}
}

int contarVacios(){
	int contador = 0;
	for(int i=0;i<5;i++){
		if(precios[i]==0){
			contador++;
		}
		
	}
	cout<<contador<<endl;
	return contador;

}




int mostrarLista(int precioLimite){
	for(int i=0; i<5; i++){
		if(precios[i]<=precioLimite){
			cout<<nombres[i]<<"\t"<<precios[i]<<endl;
		}
	}
}

void visualizarMenu(contarVacios()){
	int opcion;
	do{
		cout<<"1. Ingresar datos"<<endl;
		cout<<"2. Visualizar datos ordenados"<<endl;
		cout<<"3. Consultar precios"<<endl;
		cout<<"4. Salir"<<endl;
		cin>>opcion;
		switch(opcion){
			case 1: ingresarDatos();
					ordenar();
			break;
			case 2: if (contarVacios() == 5){
						cout<<"No se cuentan con datos";
				}
				else{
					visualizar();
				}
			break;
			case 3:
					if(contarVacios() == 5){
						cout<<"No se cuentan con datos";
					}
					else{
						visualizarSubmenu();
					}
			break;
		}
	}
	while(opcion !=4);
} 

void visualizarSubmenu(){
	int mayor, opcion2;
	cout<<"1. Precio mas bajo   2. Precio mas alto  3. Lista Precios Especìficos";
	cin>>opcion2;
	switch (opcion2){
		case 1: cout<<nombres[0]<<"\t"<<precios[0]<<endl;
			break;
			
		case 2: cout<<nombres[4]<<"\t"<<precios[4]<<endl;
			break;
		case 3: cout<<"Ingresa el precio limite"<<endl;
						cin>>mayor;
						mostrarLista(mayor);
			break;	
	}
}






main(){
	visualizarMenu();
}

