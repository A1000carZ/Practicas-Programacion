// Programa No. 19: . Realizar un programa que pregunte al usuario cuál de los 3 
//tipos de tarifas de Uber va a viajar y cuanta distancia recorrerá y en base a 
//esos datos, calcule el costo en tres tarifas diferentes. (Uber, Uber XL Uber Black)
#include <iostream>
// funciones previamente mencionadas
#include "../my_console_features.h"

using namespace std;

int main() {
	
	int choice, km, costo;

	loadingAnimation(100,3);
	
	animatedTitle("Bienvenido a Uber",100);
	
	cout << "A continuacion contamos con los siguientes servicios\n\n";
	
	cout << "1. UberX" << endl;
	cout << "2. Uber XL" << endl;
	cout << "3. Uber Black" << endl;
	cout << "\nElija una opcion: ";
	
	cin >> choice;
	cout << endl;

	emptyScreen(); // limpia la pantalla
	// 2 parte
	switch (choice) {
	case 1:
		// Uber
		changeColour(11);
		animatedSimpleText("\nUsted selecciono: UberX\n",100);
		changeColour(15);
		cout << "\nIngrese la distancia en Km: ";
		cin >> km;
		costo = km * 3.57;
		cout <<"\nEl costo del viaje es de: $"<<costo<<endl;
		break;
	case 2:
		// Uber XL
		changeColour(11);
		animatedSimpleText("\nUsted selecciono: Uber XL\n",100);
		changeColour(15);
		cout << "\nIngrese la distancia en Km: ";
		cin >> km;
		costo = km * 6.28;
		cout <<"\nEl costo del viaje es de: $"<<costo<<endl;
		break;
	case 3:
		// Uber Black
		changeColour(11);
		animatedSimpleText("\nUsted selecciono: Uber Black\n",100);
		changeColour(15);
		cout << "\nIngrese la distancia Km: $";
		cin >> km;
		costo = km * 9.27;
		cout <<"\nEl costo del viaje es de: $"<<costo<<endl;
		break;
	default:
		cout << "\nOpcion no valida"<<endl;
		break;
	}

	return 0;
}
