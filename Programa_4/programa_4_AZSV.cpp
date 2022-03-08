// Programa No. 4: conocer si un numero es
// par o impar :D
#include <iostream>
#include <stdio.h>
// funciones previamente mencionadas
#include "../my_console_features.h"


using namespace std;

int main()
{

	int num; // variable para el numero

	loadingAnimation(100,3); // Animación de carga

	animatedTitle("Es par o impar?",100);

	printf("Dame el valor de a: "); // Pregunta al usuario

	scanf("%i",&num); // Lee el valor de num

	if (num % 2 == 0) // Si el numero es par

		printf("El numero %i es par", num); // Imprime el mensaje

	else // Si no es par

		printf("El numero %i es impar", num); // Imprime el mensaje

	return 0; // Retorna 0
}
