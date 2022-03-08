// Programa No. 7: realizar operaciones artimeticas básicas
// con numeros introducidos por el usuario
#include <iostream>
#include <stdio.h>
// funciones previamente mencionadas
#include "../my_console_features.h"

using namespace std;

int main()
{
	float num1, num2;
	int opcion; // variables
	float resultado; // variable para el resultado
	loadingAnimation(100, 3);

	animatedTitle("Realizar operaciones artimeticas", 100);

	printf("Digita el primer numero: "); // Pregunta al usuario
	scanf("%f", &num1); // Lee el valor de num1

	printf("Digita el segundo numero: "); // Pregunta al usuario
	scanf("%f", &num2); // Lee el valor de num2

	printf("\nDigita la operacion que deseas realizar: \n"); // Pregunta al usuario

	printf("1. Suma\n");
	printf("2. Resta\n");
	printf("3. Multiplicacion\n");
	printf("4. Division\n");

	printf("\nOpcion: "); // Pregunta al usuario
	scanf("%i", &opcion); // Lee el valor de opcion

	switch (opcion) // Switch para la opcion
	{
	case 1: // Si la opcion es 1
		resultado = num1 + num2; // Suma los numeros
		printf("\nEl resultado de la suma es: ");
		changeColour(10);
		printf("%i", resultado); // resultado
		break; // Salir del switch
	case 2: // Si la opcion es 2
		resultado = num1 - num2; // Resta los numeros
		printf("\nEl resultado de la resta es: ");
		changeColour(10);
		printf("%i", resultado);
		break; // Salir del switch
	case 3: // Si la opcion es 3
		resultado = num1 * num2; // Multiplica los numeros
		printf("\nEl resultado de la multiplicacion es: ");
		changeColour(10);
		printf("%i", resultado);
		break; // Salir del switch
	case 4: // Si la opcion es 4
		resultado = num1 / num2; // Divide los numeros
		printf("\nEl resultado de la division es: ");
		changeColour(10);
		printf("%f", resultado);
		break; // Salir del switch
	default: // Si no es ninguna de las anteriores
		changeColour(12);
		printf("\nOpcion invalida"); // Imprime el mensaje
		break; // Salir del switch
	}

	changeColour(15);

	return 0;
}
