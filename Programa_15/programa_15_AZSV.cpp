// Programa No. 15: crear una calculadora cientifica
// con una funcion switch :D
#include <iostream>
// funciones previamente mencionadas
#include "../my_console_features.h"
#include <cmath>

using namespace std;

int main()
{
	int _option; // variables
	float _num1, _num2; // variables
	float _result; // variables
	
	loadingAnimation(100, 3);
	
	animatedTitle("Calculadora cientifica", 100);

	cout << "Ingresa el primer numero: ";
	cin >> _num1; // lee el numero 1
	cout << "Ingresa el segundo numero: ";
	cin >> _num2; // lee el numero 2
	
	cout << "1. Suma +" << endl;
	cout << "2. Resta -" << endl;
	cout << "3. Multiplicacion *" << endl;
	cout << "4. Division /" << endl;
	cout << "5. Potencia x^" << endl;
	cout << "6. Raiz" << endl;
	cout << "7. Seno sen()" << endl;
	cout << "8. Coseno cos()" << endl;
	cout << "9. Tangente tan()" << endl;
	cout << "10. Logaritmo log()" << endl;
	cout << "11. Logaritmo natural ln()" << endl;
	
	cout << "\nIngresa la opcion: ";
	cin >> _option; // lee la opcion
	// 2 Parte
	switch (_option) // switch
	{
	case 1: // suma
		_result = _num1 + _num2;
		cout << "La suma es: " << _result << endl;
		break;
	case 2: // resta
		_result = _num1 - _num2;
		cout << "La resta es: " << _result << endl;
		break;
	case 3: // multiplicacion
		_result = _num1 * _num2;
		cout << "La multiplicacion es: " << _result << endl;
		break;
	case 4: // division
		_result = _num1 / _num2;
		cout << "La division es: " << _result << endl;
		break;
	case 5: // potencia
		_result = pow(_num1, _num2);
		cout <<"La potencia es: "<<_result<<endl;
		break;
	case 6: // raiz
		_result = sqrt(_num1);
		cout<<"La raiz de "<<_num1<<"es: "<<_result<<endl;
		break;
	case 7: // seno
		_result = sin(_num1);
		cout<<"El seno de "<<_num1<<" es: "<<_result<<endl;
		break;
	case 8: // coseno
		_result = cos(_num1);
		cout<<"El coseno de "<<_num1<<" es: "<<_result<<endl;
		break;
	case 9: // tangente
		_result = tan(_num1);
		cout<<"La tangente de "<<_num1<<" es: "<<_result<<endl;
		break;
	case 10: // Logaritmo
		_result = log(_num1);
		cout<<"El logaritmo de "<<_num1<<" es: "<<_result<<endl;
		break;
	case 11: // Logaritmo natural
		_result = log10(_num1);
		cout<<"El logaritmo natural de "<<_num1<<" es: "<<_result << endl;
		break;
	default:
		cout<<"Opcion invalida" << endl;
		break;
	}
	
	return 0;
}