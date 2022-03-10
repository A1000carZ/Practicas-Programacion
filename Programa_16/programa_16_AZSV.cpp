// Programa No. 16: Realizar un programa con switch para un negocio 
//local, donde aplique los descuentos de un artículo :D
#include <iostream>
// funciones previamente mencionadas
#include "../my_console_features.h"
#include <cmath>

using namespace std;

int main(){
	int _items;// numero de items
	char _typeDisc;// tipo de descuento
	double _price = 32.45; // precio del producto
	double _disc = 0.00; // descuento
	double _total = 0.00; // total a pagar

	loadingAnimation(100, 3);
	animatedTitle("Cual es el precio del lapiz?", 100);

	cout << "Lapiz Ink 45678-ACO\n";
	cout << "Precio unidad $ " << _price << "\n\n";
	cout << "Cuantos vas a llevar? ";
	
	changeColour(11); // color de la consola
	cin >> _items; // lee el numero de items
	changeColour(15); // color de la consola
	cout << "\n";
	
	if (_items <= 12){ //si el numero de items es menor o igual a 12
		_typeDisc = 'A'; // tipo de descuento A
	}
	else if (_items <= 20) { //si el numero de items es menor o igual a 20
		_typeDisc = 'B'; // tipo de descuento B
	}
	else if (_items <= 49){ //si el numero de items es menor o igual a 49
		_typeDisc = 'C'; // tipo de descuento C
	}
	else if (_items <= 99){ //si el numero de items es menor o igual a 99
		_typeDisc = 'D'; // tipo de descuento D
	}
	else { // si el numero de items es mayor a 99
		_typeDisc = 'E'; // tipo de descuento E
	}
	// 2 Parte
	switch (_typeDisc){
		case 'A': // si el tipo de descuento es A
			_disc = _price * 0.05; // descuento del 5%
			_price = _price - _disc;
			animatedSimpleText("La cantidad aplica para un descuento del ", 100);
			changeColour(12); 
			cout <<"5%!\n\n";
			changeColour(15);
			break;
		case 'B': // si el tipo de descuento es B
			_disc = _price * 0.10; // descuento del 10%
			_price = _price - _disc;
			animatedSimpleText("La cantidad aplica para un descuento del ", 100);
			changeColour(12);
			cout<<"10%!\n\n";
			changeColour(15);
			break;
		case 'C': // si el tipo de descuento es C
			_disc = _price * 0.20; // descuento del 20%
			_price = _price - _disc;
			animatedSimpleText("La cantidad aplica para un descuento del ", 100);
			changeColour(12);
			cout <<"20%!\n\n";
			changeColour(15);
			break;
		case 'D': // si el tipo de descuento es D
			_disc = _price * 0.35; // descuento del 35%
			_price = _price - _disc;
			animatedSimpleText("La cantidad aplica para un descuento del ", 100);
			changeColour(12);
			cout <<"35%!\n\n";
			changeColour(15);
			break;
		case 'E': // si el tipo de descuento es E
			_disc = _price * 0.40; // descuento del 40%
			_price = _price - _disc;
			animatedSimpleText("La cantidad aplica para un descuento del ", 100);
			changeColour(12);
			cout <<"40%!\n\n";
			changeColour(15);
			break;
		default : // si no se cumple ninguna de las anteriores
			cout << "No fue posible procesar su compra, intente de nuevo.\n";								
	}
	_total = _price * _items;

	cout <<"Descuento unitario: -$ "<<_disc;//imprime el descuento unitario
	cout <<"\n\nPrecio Unitario Final: $ ";//imprime el precio unitario final
	changeColour(11);
	cout <<_price << "\n\n";
	changeColour(15);
	cout <<"Total: $ "<<_total << "\n\n";//imprime el total
	cout << "**Gracias por su compra**\n";
		
    return 0;
}