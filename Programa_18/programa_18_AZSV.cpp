// Programa No. 12:  Realizar un programa que imprima el resultado de las tablas de verdad.
//: D
#include <iostream>
// funciones previamente mencionadas
#include "../my_console_features.h"

using namespace std;

int main()
{
	int choice, i;
	// menu
	loadingAnimation(100,3);

	animatedTitle("Tablas de Verdad",100);

	cout << "1. Tabla de verdad de AND" << endl;
	cout << "2. Tabla de verdad de OR" << endl;
	cout << "3. Tabla de verdad de XOR" << endl;
	cout << "4. Tabla de verdad de NOT" << endl;

	cout << "Elija una opcion: ";
	cin >> choice;
	cout << endl;

	switch (choice)
	{
	case 1:
		// Tabla de verdad de AND
		cout << "Tabla de verdad de AND" << endl;
		cout << "a\tb\ta&b\t(a&&b)" << endl;
		for (i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				cout << i << "\t" << j << "\t" << (i & j) << "\t" << (i && j) << endl;
			}
		}
		break;
	case 2:
		// Tabla de verdad de OR
		cout << "Tabla de verdad de OR" << endl;
		cout << "a\tb\ta|b\t(a||b)" << endl;
		for (i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				cout << i << "\t" << j << "\t" << (i | j) << "\t" << (i || j) << endl;
			}
		}
		break;
	case 3:
		//
		cout << "Tabla de verdad de XOR" << endl;
		cout << "a\tb\ta^b\t(a^b)" << endl;
		for (i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				cout << i << "\t" << j << "\t" << (i ^ j) << "\t" << (i ^ j) << endl;
			}
		}
		break;
	case 4:
		// Tabla de verdad de NOT
		cout << "Tabla de verdad de NOT" << endl;
		cout << "a\t!a\t!(a)" << endl;
		for (i = 0; i < 2; i++)
		{
			cout << i << "\t" << !i << "\t" << !(i) << endl;
		}
		break;
	case 5:
		// Salir
		cout << "Saliendo..." << endl;
		break;
	default:
		cout << "Opcion incorrecta" << endl;
		break;
	}
	cout << endl;

	return 0;
}
