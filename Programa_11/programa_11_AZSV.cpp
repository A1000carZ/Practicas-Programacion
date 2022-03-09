// Programa No. 11:  indicar si fue exitosa la siguiente operación
// aritmética: (a + b) (8* (9+3)/6)) :D
#include <iostream>
// funciones previamente mencionadas
#include "../my_console_features.h"
#include <string>

using namespace std;

int main()
{
	int a, b, _userAnswer, _answer; // declaracion de variables
	string operation; // declaracion de variables

	loadingAnimation(100, 3); // muestra una animacion

	animatedTitle("Veamos que tanto sabes...", 100);
	
	cout << "Dame un numero: ";		// pedimos el numero a
	cin >> a;						// lee el numero a
	cout << "\nDame otro numero: "; // pedimos el numero b
	cin >> b;						// lee el numero b
	
	animatedTitle("Listo?... Empecemos!", 100);
	emptyScreen(); // limpia la consola

	//intToString(a); //convierte el numero a en un string
	operation = "Cuanto es: ("+intToString(a)+"+"+intToString(b)+")"+" * "+"((8)*(9+3)/6)";
	
	animatedTitle(operation, 100);

	_answer = (a + b) * (8 * (9 + 3) / 6); //calcula la respuesta
	
	cout << "\nEscribe tu respuesta: ";
	cin >> _userAnswer; // lee la respuesta del usuario

	if (_userAnswer == _answer) //Comprobar si la respuesta es correcta
	{
		changeColour(10); //cambia el color de la consola
		cout << "\nCorrecto! ";
		changeColour(15);
		cout << "el resultado es: "<< _answer<< "\n\n";//muestra el resultado
	}
	else
	{
		changeColour(12); //cambia el color de la consola
		cout << "\nIncorrecto!";
		changeColour(15);
		cout << " el resultado es: "<< _answer;//muestra el resultado
		cout << ", vuelve a intentarlo.\n\n";
	}

	return 0;
}
