// Programa No. 4: conocer si un numero ingresado por el usuario
// es mayor a 10 :D
#include <iostream>
#include <stdio.h>
// funciones previamente mencionadas
#include "../my_console_features.h"

using namespace std;

int main()
{
	int num; // variable para el numero

	loadingAnimation(100, 3); // Animación de carga

	animatedTitle("Es mayor a 10?", 100);

	printf("Dame un numero: "); // Pregunta al usuario

	scanf("%i", &num); // Lee el valor de num

	if (num > 10) // Si el numero es par
	{
		changeColour(11); // Cambia el color de la consola
		
		cout << "\n En efecto, el numero "; // Imprime el mensaje
		
		cout << num << " es mayor a 10!\n"; // Imprime el mensaje
		
		changeColour(15); // Cambia el color de la consola
	}
	else // Si no es par
		
		cout << "\nEl numero " << num << " no es mayor a 10\n"; // Imprime el mensaje
	
	return 0; // Retorna 0
}
