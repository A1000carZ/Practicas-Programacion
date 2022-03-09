// Programa No. 8: A partir del numero introducido por
// el usuario, muestre la tabla de multiplicar hasta el 10.
#include <iostream>

// funciones previamente mencionadas
#include "../my_console_features.h" 

using namespace std;

void showTableOf(int a){ // funcion que muestra la tabla de multiplicar
	
	int _num = a;
	
	int i;
	
	int _numbers = 10;
	
	for(i=0; i <= _numbers; i++){
		cout << "\n";
		cout << _num << " x " << i << " = " << _num * i;
		cout << "\n";
	}
}

int main(){
	
	int _num;
	
	loadingAnimation(100,3); // muestra una animacion

	animatedTitle("Que tabla de multiplicar quieres ver?",100);

	cout<<"Ingresa el numero deseado: "; // pedimos el numero
	
	cin>>_num; // lee el numero deseado
	
	changeColour(_num); // cambia el color de la consola

	showTableOf(_num);//funcion que muestra la tabla de multiplicar
	
	changeColour(15); // cambia el color de la consola
	
	return 0;
	
}
