// Programa No. 2: Imprimir un Hola Mundo 10 veces :D
#include <iostream>
#include "../my_console_features.h" // funciones previamente mencionadas

int main()
{	
	// Esta función hace una animación de carga
	loadingAnimation(100,3);
	
	for(int i=0;i<10;i++) // Loop de 10 veces
	{
		printf("Hola mundo!\n"); // Imprime el mensaje
	}

	return 0;
}
