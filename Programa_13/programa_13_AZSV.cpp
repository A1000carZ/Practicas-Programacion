// Programa No. 13:  determinar el mayor y menor de 3 
//números con la sentencia if. :D
#include <iostream>
// funciones previamente mencionadas
#include "../my_console_features.h"

using namespace std;

int main()
{
	int a, b, c; // variables

	loadingAnimation(100, 3);

	animatedTitle("Cual es el mayor y cual el menor?", 100);

	cout << "Ingresa el primer numero: ";
	cin >> a; // lee el numero a
	cout << "Ingresa el segundo numero: ";
	cin >> b; // lee el numero b
	cout << "Ingresa el tercer numero: ";
	cin >> c; // lee el numero c

	if (a > b && a > c) // Si a es mayor que b y a es mayor que c
	{
		cout << "\nEl numero mayor es: ";
		changeColour(10);
		cout << a << endl;
		changeColour(15);
		if (b > c) // Si b es mayor que c
		{
			cout << "\nEl numero menor es: ";
			changeColour(10);
			cout << c << endl;
			changeColour(15);
		}
		else // Si c es mayor que b
		{
			cout << "\nEl numero menor es: ";
			changeColour(10);
			cout << b << endl;
			changeColour(15);
		}
	}
	// 2 Parte
	else if (b > a && b > c) // Si b es mayor que a y b es mayor que c
	{
		cout << "\nEl numero mayor es: ";
		changeColour(10);
		cout << b << endl;
		changeColour(15);
		if (a > c) // Si a es mayor que c
		{
			cout << "\nEl numero menor es: ";
			changeColour(10);
			cout << c << endl;
			changeColour(15);
		}
		else // Si a es mayor que b
		{
			cout << "\nEl numero menor es: ";
			changeColour(10);
			cout << a << endl;
			changeColour(15);
		}
	}
	else // Si c es mayor que a y c es mayor que b
	{
		cout << "\nEl numero mayor es: ";
		changeColour(10);
		cout << c << endl;
		changeColour(15);
		if (a > b) // Si a es mayor que b 
		{
			cout << "\nEl numero menor es: ";
			changeColour(10);
			cout << b << endl;
			changeColour(15);
		}
		else // Si c es mayor que a 
		{
			cout << "\nEl numero menor es: ";
			changeColour(10);
			cout << a << endl;
			changeColour(15);
		}
	}

	return 0;
}
