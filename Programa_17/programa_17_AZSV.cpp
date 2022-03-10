// Programa No. 16: Consiste en desarrollar un menú para un consultorio médico 
// inteligente, donde te pregunte los síntomas, y el sistema de una solución, 
// de no saberla te mandará con un doctor certificado. :D
#include <iostream>
// funciones previamente mencionadas
#include "../my_console_features.h"
#include <vector>

using namespace std;

int main(){
	int _choice;

	vector<string> _symptom;

    _symptom.push_back("Tos seca");
    _symptom.push_back("Dolor de Cabeza");
    _symptom.push_back("Constante Estornudo");
    _symptom.push_back("Fiebre");
    _symptom.push_back("Cuerpo cortado");
    _symptom.push_back("Cansancio");
    _symptom.push_back("Dolor de estomago");
    _symptom.push_back("Ojos irritados");
    _symptom.push_back("Diarrea");
    _symptom.push_back("Dificultad para respirar");

	loadingAnimation(100, 3);
	animatedTitle("Bienvenido al Consultorio Auxiliar", 100);
	animatedSimpleText("Cual es tu sintoma?", 100);
	cout << "\n\n";

	for (int i = 0; i < _symptom.size(); i++ ){
		cout<<i+1<<". " << _symptom[i]<<"\n";
	}

	cout <<"\nIngresa la opcion que te representa en estos momentos: ";
	cin >> _choice;
	// 2 Parte
	switch(_choice){
		case 1:
			cout<<"\nPara Tos Seca: intenta tomar 50 ml de Jarabe para tos, ";
		break;
		case 2:
			cout<<"\nPara Dolor de cabeza: intenta tomar 1 tableta de paracetamol, ";
		break;
		case 3:
			cout<<"\nPara Constante Estornudo: intenta tomar 1 tableta de Agrifen, ";
		break;
		case 4:
			cout<<"\nPara Fiebre: intenta tomar 1 tableta de Paracetamol, ";
		break;
		case 5:
			cout<<"\nPara Cuerpo cortado: intenta tomar 1 tableta de Tabcin Active, ";
		break;
		case 6:
			cout<<"\nPara Cansancio: intenta tomar agua constantemente y duerme al menos 8 horas, ";
		break;
		case 7:
			cout<<"\nPara Dolor de estomago: intenta tomar 100 ml de Pepto Bismol, ";
		break;
		case 8:
			cout<<"\nPara Ojos irritados: intenta Utilizar gotas lubricantes para los ojos, ";
		break;
		case 9:
			cout<<"\nPara Diarrea: intenta tomar 1 tableta de Treda, ";
		break;
		case 10:
			cout<<"\nPara Dificultad para respirar: intenta tomar 1 tableta de Montelukast, ";
		break;
		default:
			cout<<"\nNo encontramos una solucion,por favor intenta asistir ";
			cout<<"\na la unidad medica mas cercana.\n";	
	}
	
	cout<<"\nen caso de no funcionar consulte a un medico.\n";

	return 0;
}
