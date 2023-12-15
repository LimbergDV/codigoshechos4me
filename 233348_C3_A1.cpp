#include <iostream>
#include <iomanip>
using namespace std;

string contratos[3][7];

void imprimirMensaje() {
    cout<<"---------------------------------Banco Azteca---------------------------------"<<endl;
    cout<<"----------------------------------Bienvenido----------------------------------"<<endl<<endl;
}

float calcularIntereses(float prestamo) {
    return prestamo * 0.10;
}

float totalAPagar(float prestamo) {
    return prestamo + calcularIntereses(prestamo);
}

float cantidadPagar(float totalAPagar, float plazoLiquidar) {
    return totalAPagar / plazoLiquidar;
}

string leerDatosCliente() {
    string datocliente;
    cin>>datocliente;
    return datocliente;
}

void ingresarDatosPrestamo(){
    string preguntas[3] = {"¿Cuánto quieres? ($5,000, $10,000 o $15,000 pesos): ","Plazo para liquidar el préstamo (meses max. 12): ","Frecuencia de pago: 1.Semanal 2.Quincenal 3.Mensual: "};
    string prestamo, plazoLiquidar, totalPagar;
    int max_clientes = 3;

    for (int i=0;i<3;i++) {
        cout<<"Ingrese su nombre"<<endl;
        bool nombreRepetido;
        do{
            nombreRepetido=false;
            contratos[i][0]=leerDatosCliente();
            for(int j=0;j<i;j++){
                if(contratos[j][0]==contratos[i][0]){
                    cout<<"Error: El nombre ingresado ya ha sido utilizado para otro cliente. Ingrese un nombre diferente."<<endl;
                    nombreRepetido=true;
                    break;
                }
            }
        } 
		
		while (nombreRepetido);

        bool cantidadValida;
        do{
            cantidadValida=true;
            cout<<preguntas[0];
            contratos[i][1]=leerDatosCliente();
            if (contratos[i][1] != "5000" && contratos[i][1] != "10000" && contratos[i][1] != "15000") {
                cout<<"Error: Solo se permiten las opciones de $5,000, $10,000 o $15,000 pesos."<<endl;
                cantidadValida=false;
            }
        } 
		while (!cantidadValida);

        for(int j=1;j<3;j++) {
            cout<<preguntas[j];
            contratos[i][j + 1]=leerDatosCliente();
        }

        prestamo = contratos[i][1];
        float f_prestamo = stof(prestamo);
        contratos[i][4] = to_string(calcularIntereses(f_prestamo));
        totalPagar = to_string(totalAPagar(f_prestamo));
        contratos[i][5] = totalPagar;
        plazoLiquidar = contratos[i][2];
        contratos[i][6] = to_string(cantidadPagar(stof(totalPagar), stof(plazoLiquidar)));
    }
}

void busqueda(string nombre, int max_clientes=3) {
    for (int i=0;i<max_clientes;i++) {
        if (contratos[i][0]==nombre) {
            for (int j=0;j<7;j++) {
                cout<<contratos[i][j]<< "  ";
            }
            cout<<endl;
            break;
        }
    }
}

void imprimirTabla(){
    cout <<setw(15)<<"Nombre"<<setw(15)<<"Monto"<<setw(15)<<"Plazo"<<setw(15)<<"Frecuencia"<<setw(15)<<"Intereses"<<setw(15)<<"Total Pagar"<<setw(15)<<"Cuota Mensual"<<endl;
    for (int i=0;i<3;i++) {
        for (int j=0;j<7;j++) {
            cout<<setw(15)<<contratos[i][j];
        }
        cout<<endl;
    }
}

int main() {
    string buscarNombre;
    imprimirMensaje();
    ingresarDatosPrestamo();
    int menuOpciones;

    do {
        cout<<"¿Qué desea realizar?"<< endl;
        cout<<"1) Imprimir tabla con datos de préstamos 2) Buscar cliente 3) Salir del programa"<<endl;
        cin>>menuOpciones;

        switch (menuOpciones){
            case 1:
                imprimirTabla();
                break;
            case 2:
                cout<<"¿Qué persona desea buscar?: "<<endl;
                buscarNombre = leerDatosCliente();
                busqueda(buscarNombre);
                break;
            case 3:
                cout<<"Saliendo del programa......... ¡Hasta luego!"<<endl;
                return 0;
            default:
                cout<<"Tu elección no está en las opciones"<<endl;
                break;
        }

    } while (cin.get()=='\n');

    cout<<"Presiona Enter para salir...";
    cin.ignore();
    return 0;
}