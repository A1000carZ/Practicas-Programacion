//Programa 9: Realizar un programa que pida al 
//usuario 5 variables y realice las siguientes operaciones aritméticas:
//1.- (a^2 *b^2) + 5 * c^2, 2.- e-(d*5*10)-b, 3.- a+b+c+d*(a+b)^2
#include <iostream>
#include <cmath>
// funciones previamente mencionadas
#include "../my_console_features.h" 

using namespace std;

int main(){
	int a,b,c,d,e,_op1,_op2,_op3; // declaramos las variables

	loadingAnimation(100,3); // muestra una animacion
	animatedTitle("Calcular las siguentes operaciones",100);
	cout << "1.- (a^2 * b^2) + 5 * c^2\n";
	cout << "2.- e - (d * 5 * 10) - b\n";
	cout << "3.- a + b + c + d * (a + b) ^2\n\n";
	cout<<"Ingresa el numero a: ";
	cin>>a; // lee a
	cout<<"Ingresa el numero b: ";
	cin>>b; // lee b
	cout<<"Ingresa el numero c: ";
	cin>>c; // lee c
	cout<<"Ingresa el numero d: ";
	cin>>d; // lee d
	cout<<"Ingresa el numero e: ";
	cin>>e; // lee e
	cout << endl;

	_op1 = (pow(a,2) * pow(b,2)) + 5 * pow(c,2); // operacion 1
	_op2 = e - (d * 5 * 10) - b; // operacion 2
	_op3 = (a + b + c + d) * pow(a + b,2); // operacion 3

	cout << "El resultado de la operacion 1 es: ";
	changeColour(10);
	cout << _op1 << endl; // muestra resultado 1
	changeColour(15);
	cout << "El resultado de la operacion 2 es: ";
	changeColour(11);
	cout << _op2 << endl; // muestra redultado 2
	changeColour(15);
	cout << "El resultado de la operacion 3 es: ";
	changeColour(12);
	cout << _op3 << endl; // muestra resultado 3
	changeColour(15);

	return 0;	
}
