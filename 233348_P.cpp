#include <iostream>
using namespace std;

int valor;
int cantidadDinero;
float cantidadProducto;
int total;

void compra (){
cout<<"Hola Usuario, el valor de cada producto es igual a $15 pesos"<<endl;
cout<<"Cuanto tienes de dinero: "<<endl;
cin>>cantidadDinero;
cout<<"Cuanto producto quiere comprar: "<<endl;

do{
cin>>valor;
if (cantidadDinero>0 && valor>0){
total=valor*15;
}

}while(cantidadDinero<=0 || valor<=0);

if(cantidadDinero>=total)
cout<<"Puedes realizar la compra";

else{
	cout<<"No te alcanza";
}

}

main(){
	compra();
}




