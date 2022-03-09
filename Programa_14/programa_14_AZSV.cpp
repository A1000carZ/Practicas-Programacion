// Programa No. 14: asignar las calificaciones Nombradas:
// A = Excelente, B = Bueno, C = Suficiente, D = Apenas, E= Reprobaste,
// a partir de la calificación del alumno:D
#include <iostream>
// funciones previamente mencionadas
#include "../my_console_features.h"

using namespace std;

int main()
{
	int _calification; // variables
	char _asignation;  // variables

	loadingAnimation(100, 3);

	animatedTitle("Que calificacion te mereces?", 100);

	cout << "Ingresa tu calificacion: ";
	cin >> _calification; // lee calificacion

	if (_calification == 10)//Si _calificacion igual a 10
	{
		_asignation = 'A'; // Asigna A
	}
	else if (_calification >= 8)//Si _calificacion mayor o igual a 8
	{
		_asignation = 'B'; // Asigna B
	}
	else if (_calification >= 7)//Si _calificacion mayor o igual a 7
	{
		_asignation = 'C'; // Asigna C
	}
	else if (_calification >= 6)//Si _calificacion mayor o igual a 6
	{
		_asignation = 'D'; // Asigna D
	}
	else if (_calification <= 5)//Si _calificacion menor o igual a 5
	{
		_asignation = 'E'; // Asigna E
	}
	else
	{
		_asignation = 'X'; // Asigna error
	}
	// 2 Parte
	switch (_asignation)
	{
	case 'A': // Si _asignacion es A
		changeColour(11);
		cout << "\nExcelente!" << endl;
		break;
	case 'B': // Si _asignacion es B
		changeColour(10);
		cout << "\nMuy Bueno" << endl;
		break;
	case 'C': // Si _asignacion es C
		changeColour(10);
		cout << "\nSuficiente" << endl;
		break;
	case 'D': // Si _asignacion es D
		changeColour(14);
		cout << "\nPor poco!" << endl;
		break;
	case 'E': // Si _asignacion es E
		changeColour(12);
		cout << "\nLo siento reprobaste" << endl;
		break;
	default: // Si _asignacion es X
		cout << "\nNo has ingresado una calificacion valida" << endl;
		break;
	}

	changeColour(15);

	return 0;
}
