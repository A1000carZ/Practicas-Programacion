// Programa No. 6: conocer si un almuno esta aprobado o no,
// a partir de su calificación :D
#include <iostream>
#include <stdio.h>
// funciones previamente mencionadas
#include "../my_console_features.h"

using namespace std;

int main()
{
	int _calificacion;

	loadingAnimation(100, 3);

	animatedTitle("Estas aprobado? Comprobemoslo...", 100);

	printf("Digita tu calificacion: "); // Pregunta al usuario

	scanf("%i", &_calificacion); // Lee el valor de _calificacion

	if (_calificacion >= 6)
	{
		printf("\nFelicidades tu califcacion de ");// Imprime el mensaje
		changeColour(10);
		printf("%i",_calificacion);
		changeColour(15);
		printf(" es aprobatoria \n");
	}
	else
	{
		changeColour(12);
		printf("Lo siento no aprobaste :C\n");// Imprime el mensaje
	}
	changeColour(15);

	return 0;
}
