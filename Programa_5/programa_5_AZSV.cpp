// Programa No. 5: conocer tu fecha de nacimiento
#include <iostream>
#include <stdio.h>
// funciones previamente mencionadas
#include "../my_console_features.h"

using namespace std;

int main(){
	int _fecha;

	loadingAnimation(100,3);

	animatedTitle("Cuando naciste?",100); // Titulo

	printf("Digita el año en que naciste: ");// Pregunta al usuario
	
	scanf("%i", &_fecha); // Lee el valor de _fecha
	
	int edad = 2022 - _fecha; // Calcula la edad
	
	printf("Tu edad es de "); // Imprime el mensaje

	changeColour(3);

	printf("%i",edad);

	changeColour(15);

	printf(" años");
	
	return 0; // Retorna 0
	
}
