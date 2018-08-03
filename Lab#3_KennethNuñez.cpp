#include <iostream>
using std::endl;
using std::cin;
using std::cout;

#include<string>
using std::string;

#include<math.h>
void ejercicio1();

int main() {
	char resp = 's';
	while (resp == 'S' || resp == 's'){
		cout << "	Main"<<endl;
		cout << "1. Ejercicio 1 " << endl;
		cout << "2. Ejercicio 2 " << endl;
		cout << "3. Ejercicio 3 " << endl;
		cout << "Ingrese el numero de su opcion " << endl;
		int option = 0;
		cin >> option;
	
		switch(option){
			case 1:	
				ejercicio1();
				break;
			case 2:
				break;

			case 3:
				break;
			default:
				cout << "Opcion Invalida" << endl;
				break;
		}	


		cout << "Desea volver al menu [S/N]" << endl;
		cin >> resp;
	}
	return 0;
}


void ejercicio1() {
	cout << "Para el polinomio 𝐴𝑥^2 + 𝐵𝑥 + C, Ingrese A: " << endl;
	int* ecuacion = new int[3];
	cin >> ecuacion[0];
	int Adouble = ecuacion[0] * ecuacion[0];
	cout << "Ingrese B: " << endl;
	cin >> ecuacion[1];
	int Bdouble = ecuacion[1] * ecuacion[1];
	cout << "Ingrese C: " << endl;
	int Cdouble = ecuacion[2] * ecuacion[2];
	cin >> ecuacion[2];

	double firstanswer = (-1 * ecuacion[1] + sqrt((Bdouble - (4*ecuacion[0] * ecuacion[2]) )))/(2*ecuacion[0]);
	double secondanswer = (  -1 * ecuacion[1] - sqrt(Bdouble - (4*ecuacion[0] * ecuacion[2]) ))/(2*ecuacion[0]);

	cout << ecuacion[0] << "X^2 " << ecuacion[1] << "x " << ecuacion[2] << endl;
	cout << "Factorizado: " << "(x " << (-1 * firstanswer) << " )";





}
