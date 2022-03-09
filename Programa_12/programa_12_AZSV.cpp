// Programa No. 12:  Realizar un programa que imprima 
//el resultado de las tablas de verdad. :D
#include <iostream>
// funciones previamente mencionadas
#include "../my_console_features.h"

using namespace std;

int main()
{
	int choice, i;

	loadingAnimation(100, 3);

	animatedTitle("Tablas de Verdad", 100);
	// menu
	cout << "1. Tabla de verdad de AND" << endl;
	cout << "2. Tabla de verdad de OR" << endl;
	cout << "3. Tabla de verdad de XOR" << endl;
	cout << "4. Tabla de verdad de NOT" << endl;
	cout << "5. Tabla de verdad de NAND" << endl;
	cout << "6. Tabla de verdad de NOR" << endl;
	cout << "\nElija una opcion: ";
	cin >> choice; // lee el valor de la opcion
	cout << endl;

	if (choice == 1){
		// Tabla de verdad de AND
		animatedTitle("Tabla de verdad de AND", 100);
		cout << "A\tB\tSalida\t" << endl;
		for (i = 0; i < 2; i++) // i es A
		{
			for (int j = 0; j < 2; j++) // j es B
			{
				cout<<i<<"\t"<<j<<"\t"<<(i & j)<<"\t"<<endl;
			}
		}
	}
	else if (choice == 2){
		// Tabla de verdad de OR
		animatedTitle("Tabla de verdad de OR", 100);
		cout << "A\tB\tSalida\t" << endl;
		for (i = 0; i < 2; i++) // i es A
		{
			for (int j = 0; j < 2; j++) // j es b
			{
				cout <<i<<"\t"<<j<<"\t"<<(i|j)<<"\t"<<endl;
			}
		}
	}
	// 2 Parte
	else if (choice == 3){
		// Tabla de verdad de XOR
		animatedTitle("Tabla de verdad de XOR", 100);
		cout << "A\tB\tSalida\t" << endl;
		for (i = 0; i < 2; i++) // i es A
		{
			for (int j = 0; j < 2; j++)// j es B
			{
				cout <<i<<"\t"<<j<<"\t"<<(i^j)<<"\t"<<endl;
			}
		}
	}
	else if (choice == 4){
		// Tabla de verdad de NOT
		animatedTitle("Tabla de verdad de NOT", 100);
		cout << "A\t!A\t" << endl;
		for (i = 0; i < 2; i++)// i es A
		{
			cout << i << "\t" << !i << "\t"<< endl;
		}
	}
	else if (choice == 5){
		// Tabla de verdad de NAND
		animatedTitle("Tabla de verdad de NAND", 100);
		cout << "A\tB\tSalida\t" << endl;
		for (i = 0; i < 2; i++) // i es A
		{
			for (int j = 0; j < 2; j++) // j es B
			{
			   cout<<i<<"\t"<<j<<"\t"<<(!(i&j))<<"\t"<<endl;
			}
		}
	}
	else if (choice == 6){
		// Tabla de verdad de NOR
		animatedTitle("Tabla de verdad de NOR", 100);
		cout << "A\tB\tSalida\t" << endl;
		for (i = 0; i < 2; i++)// i es A
		{
			for (int j = 0; j < 2; j++) // j es B
			{
			   cout<<i<<"\t"<<j<<"\t"<<(!(i|j))<<"\t"<<endl;
			}
		}
	}
	else{
		// Opcion invalida
		cout << "Opcion invalida" << endl;
	}

	return 0;
}
