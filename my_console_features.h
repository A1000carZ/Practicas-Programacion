// Estas son funciones para reutilizar a lo largo de los
// programas, a la cual llamé "my_console_features.h".
#include <iostream>
#include <windows.h>

// Su función: cambiar el color de texto de la consola
void changeColour(int colour) {
	HANDLE hConsole;
	
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	SetConsoleTextAttribute(hConsole, colour);
}

// Su función: eliminar caracteres de la consola
void clearScreen(int characterLength) {
	for (int i = 0; i < characterLength; i++) {
		std::cout << "\b";
	}
}

// Parte de "my_console_features.h"
// Su función: hacer una animación al texto
void animatedTitle(std::string title, int delay) {

	std::cout << "\n\n\n";
	std::cout << "      ";

	int x = 0;
	while (title[x] != '\0') {
		std::cout << title[x];
		Sleep(delay);
		x++;
	}
	std::cout << "\n\n\n";
}
// Parte de "my_console_features.h"
// Su función: hacer una animación al texto
void animatedSimpleText(std::string title, int delay) {
	int x = 0;
	while (title[x] != '\0') {
		std::cout << title[x];
		Sleep(delay);
		x++;
	}
}
// Parte de "my_console_features.h"
// Su función: hacer una animación colorida al texto
void animatedColoredTitle(std::string title, int delay) {
	std::cout << "\n\n\n";
	std::cout << "      ";
	int x = 0;

	while (title[x] != '\0') {
		
		if (x % 2 == 0) {
			changeColour(x + 3);
		}
		else {
			changeColour(x + 5);
		}
		std::cout << title[x];
		Sleep(delay);
		x++;
	}
	std::cout << "\n\n\n";
	changeColour(15);
}
// Su función: limpiar la consola
void emptyScreen() {
	system("cls");
}
// Parte de "my_console_features.h"
// Su función: hacer una animación de carga
void loadingAnimation(int delay,int duration) {
	int i = 0;
	std::cout << "\n\n\n";
	std::cout << "      ";

	while ( i < duration) {
		i++;
		std::cout <<"\b\b\b\b\b\b\b\b\b\b\bCargando   "<<std::flush;
		Sleep(delay);
		std::cout <<"\b\b\b\b\b\b\b\b\b\b\bCArgando   "<<std::flush;
		Sleep(delay);
		std::cout <<"\b\b\b\b\b\b\b\b\b\b\bCaRgando   "<<std::flush;
		Sleep(delay);
		std::cout <<"\b\b\b\b\b\b\b\b\b\b\bCarGando   "<<std::flush;
		Sleep(delay);
		std::cout <<"\b\b\b\b\b\b\b\b\b\b\bCargAndo   "<<std::flush;
		Sleep(delay);
		std::cout <<"\b\b\b\b\b\b\b\b\b\b\bCargaNdo   "<<std::flush;
		Sleep(delay);
		std::cout <<"\b\b\b\b\b\b\b\b\b\b\bCarganDo   "<<std::flush;
		Sleep(delay);
		std::cout <<"\b\b\b\b\b\b\b\b\b\b\bCargandO  "<<std::flush;
		Sleep(delay);
		std::cout <<"\b\b\b\b\b\b\b\b\b\b\bCargando. "<<std::flush;
		Sleep(delay);
		std::cout <<"\b\b\b\b\b\b\b\b\b\b\bCargando.."<<std::flush;
		Sleep(delay);
		std::cout <<"\b\b\b\b\b\b\b\b\b\b\bCargando..."<<std::flush;
		Sleep(delay);
	}
	system("cls");
}

std::string intToString(int num)
{
    std::string numAsStr;
    bool isNegative = num < 0;
    if(isNegative) num*=-1;

    do
    {
       char toInsert = (num % 10) + 48;
       numAsStr.insert(0, 1, toInsert);

       num /= 10;
    }while (num);
  
    return isNegative? numAsStr.insert(0, 1, '-') : numAsStr;
}