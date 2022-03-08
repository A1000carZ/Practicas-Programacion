// Programa No. 3: Imprimir un Hola Mundo con
// cin y cout :D
#include <iostream>

// funciones previamente mencionadas
#include "../my_console_features.h" 

using namespace std;

int main()
{	
	string name; // variable para almacenar el nombre

	// Esta función hace una animación de carga
	loadingAnimation(100,3);

	animatedTitle("Hola mundo!",100);

	cout << "Ingresa tu nombre: "; // Funcion Cout	
	
	cin >> name; // Funcion Cin

	cout << "Hola ";
	
	changeColour(2); // Función para cambiar el color de texto
	
	cout << name; // Imprime el mensaje
	
	changeColour(15); // Función para cambiar el color de texto
	
	cout << "!" << endl;
	
	return 0; // Salida del programa
}
