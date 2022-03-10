// Programa No. 18: Consiste en utilizar las funciones switch para sacar 
//las operaciones lógicas NOT, OR, AND, XOR, NAND, NOR. :D
#include <iostream>
// funciones previamente mencionadas
#include "../my_console_features.h"

using namespace std;

int main()
{
	int choice, i; // variables para el menu
	loadingAnimation(100,3);

	animatedTitle("Tablas de Verdad",100);

	cout << "1. Tabla de verdad de AND" << endl;
	cout << "2. Tabla de verdad de OR" << endl;
	cout << "3. Tabla de verdad de XOR" << endl;
	cout << "4. Tabla de verdad de NOT" << endl;
	cout << "5. Tabla de verdad de NAND" << endl;
	cout << "6. Tabla de verdad de NOR" << endl;
	cout << "\nElija una opcion: ";
	cin >> choice;
	cout << endl;

	emptyScreen(); // limpia la pantalla

	switch (choice)
	{
	case 1:
		// Tabla de verdad de AND
		animatedSimpleText("Tabla de verdad de AND", 100);
		cout << "\na\tb\tSalida\n" << endl;
		for (i = 0; i < 2; i++) // i = a
		{
			for (int j = 0; j < 2; j++) // j = b
			{
				// imprime AND
				cout << i << "\t" << j << "\t" << (i & j) << endl;
			}
		}
		break;
	case 2:
		// Tabla de verdad de OR
		animatedSimpleText("Tabla de verdad de OR", 100);
		cout << "\na\tb\tSalida\n" << endl;
		for (i = 0; i < 2; i++) // i = a
		{
			for (int j = 0; j < 2; j++) // j = b
			{
				// imprime OR
				cout << i << "\t" << j << "\t" << (i | j) << endl;
			}
		}
		break;
	// 2 Parte
	case 3:
		// Tabla de verdad de XOR
		animatedSimpleText("Tabla de verdad de XOR", 100);
		cout << "\na\tb\tSalida\n" << endl;
		for (i = 0; i < 2; i++) // i = a
		{
			for (int j = 0; j < 2; j++) // j = b
			{
				// imprime XOR
				cout << i << "\t" << j << "\t" << (i ^ j)<< endl;
			}
		}
		break;
	case 4:
		// Tabla de verdad de NOT
		animatedSimpleText("Tabla de verdad de NOT", 100);
		cout << "\na\t!a\n" << endl;
		for (i = 0; i < 2; i++) // i = a 
		{
			// imprime NOT
			cout << i << "\t" << !i<< endl;
		}
		break;
	case 5:
		// Tabla de verdad de NAND
		animatedSimpleText("Tabla de verdad de NAND", 100);
		cout << "\na\tb\tSalida\n" << endl;
		for (i = 0; i < 2; i++) // i = a
		{
			for (int j = 0; j < 2; j++) // j = b
			{
				// imprime NAND
				cout << i << "\t" << j << "\t" << (!(i & j)) << endl;
			}
		}
		break;
	case 6:
		// Tabla de verdad de NOR
		animatedSimpleText("Tabla de verdad de NOR", 100);
		cout << "\na\tb\tSalida\n" << endl;
		for (i = 0; i < 2; i++) // i = a
		{
			for (int j = 0; j < 2; j++) // j = b
			{
				// imprime NOR
				cout << i << "\t" << j << "\t" << (!(i | j)) << endl;
			}
		}
		break;
	default:
		cout << "Opcion invalida" << endl;
		break;
	}
	cout << endl;

	return 0;
}
