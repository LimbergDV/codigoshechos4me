#include <iostream>
using namespace std;




void datosEmergencia (){
	int incidente;
	string nom;
	int ubi;
	
 cout<<"-----------Servicio de emergencia 911-----------"<<endl;
	cout<<"¿Cual es tu nombre completo?"<<endl;
	getline(cin, nom); 	cout<<"Selecciona tu ubicacion"<<endl<<endl;
	cout<<"1) UP Chiapas 2) Monumento Jaguar 3) Panteon Municipal 4) Unidad Deportiva 5) Monumento Suchiapa 6) Otro"<<endl;
    cin>>ubi;
    
    switch (ubi){
		case 1: cout<<"Ubicacion: UP Chiapas ¿Cual es su emergencia?"<<endl<<endl; 
		break;
		
		case 2: cout<<"Ubicacion: Monumeto Jaguar ¿Cual es su emergencia?"<<endl<<endl; 
		break;
		
		case 3: cout<<"Ubicacion: Panteon Municipal ¿Cual es su emergencia?"<<endl<<endl; 
		break; 
		
		case 4: cout<<"Ubicacion: Unidad Deportiva ¿Cual es su emergencia?"<<endl<<endl; 
		break;
		
		case 5: cout<<"Ubicacion: Monumento Suchiapa ¿Cual es su emergencia?"<<endl<<endl;  
		break;
		
		case 6: cout<<"Escriba su ubicación, por favor"<<endl<<endl; 
		cin>>incidente; break;
		
		default: cout<<"Seleccion Invalida, intente de nuevo por favor"; 
		break;
				}

	}



void elegirEmergencia (){
	int emer;
	cout<<"Selecciona tu emergencia, por favor"<<endl;
	cout<<"1) Robo  2) Incendio  3) Emergencia Medica  4) Accidente Automovilistico"<<endl;
	cin>>emer;
	
	switch (emer){
	
	case 1: cout<<"Los policias van en camino a tu ubicacion seleccionada"<<endl<<endl; break;
	
	case 2: cout<<"Los bomberos van en camino a tu ubicacion seleccionada"<<endl<<endl; break;
		
	case 3: cout<<"Los paramedicos van en camino a su ubicacion seleccionada"<<endl<<endl; break;
		
	case 4: cout<<"Transito Municipal va en camino junto con los paramedicos a su ubicacion actual"<<endl<<endl; break;
	
	default: cout<<"Error, seleccione alguna emergencia"<<endl<<endl; break;
 				}
	
}









main(){
	datosEmergencia();
	elegirEmergencia();
}

