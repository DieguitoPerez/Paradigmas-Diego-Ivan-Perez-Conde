#include <iostream>

using namespace std;

int main(){
	int Numbersillas = 5;
	int Numbermesas = 9;
	int Numberpuertas = 15;
	int Numberobjectos = Numbersillas + Numbermesas + Numberpuertas;
	
	cout <<"El numero de sillas es:" << Numbersillas << endl;
	cout << "El numero de mesas es:" << Numbermesas << endl;
	cout << "El numero de puertas es:" << Numberpuertas << endl;
	
	cout <<"El total de objectos es:" << Numberobjectos << endl;
	
	cout <<"Tienes una nueva mesa" << endl;
	
	Numbermesas = Numbermesas + 1;
	
	cout << "El nuevo numero nuevo de mesas es:" << Numbermesas << endl;
	
	return 0;
	
	
}
