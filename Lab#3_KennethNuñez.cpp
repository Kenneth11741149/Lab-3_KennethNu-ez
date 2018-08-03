#include <iostream>
using std::endl;
using std::cin;
using std::cout;

#include<string>
using std::string;

#include<math.h>
#define PI 3.14159265

#include <iomanip>
using std::setw;
void ejercicio1();
void ejercicio2();
int factorial(int numero){
	long double acumulador = 1;
	for(int i = numero; i >= 1; i--){
		acumulador = acumulador * i;
	}
	return acumulador;
}
void ejercicio3(int);


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
				ejercicio2();
				break;

			case 3:
				{
				cout << "Ingrese el numero de lineas" << endl;
				int lines = 0;
				cin >> lines;
				ejercicio3(lines);
				}
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
	cout << "Si la respuesta son numeros imaginarios su respuesta sera nan" << endl;
	cout << "Favor Ingresar TODOS los elementos, si no hay elementos favor poner 0" << endl;
	cout << "Para el polinomio 𝐴𝑥^2 + 𝐵𝑥 + C, Ingrese A: " << endl;
	int* ecuacion = new int[3];
	//(Letra)Double son los cuadrados de las respectivas A, B Y C.
	ecuacion[0] = 0;
	ecuacion[1] = 0;
	ecuacion[2] = 0;
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
	string pluser = ""; //Variables de espacio, ya que si son positivas no quiero que me muestre las respuestas sin singo al final;
	string pluser2 = "";
	string pluser3 = "";
	string pluser4 = "";



	if(firstanswer > 0){
		pluser = "";
	} else {
		pluser = "+ ";
	}	

	if(secondanswer > 0){
		pluser2 = "";
	} else {
		pluser2 = "+ ";
	}

	if(ecuacion[1] > 0){
		pluser3 = "+ ";
	}

	if(ecuacion[2] > 0){
		pluser4 = "+ ";
	}

	cout << ecuacion[0] << "X^2 " << pluser3 <<ecuacion[1] << "x " << pluser4 <<ecuacion[2] << endl;
	cout << "Factorizado: " << "(x " << pluser << (-1 * firstanswer) << " )" << endl;
	cout << "(x " << pluser2 << (-1 * secondanswer) << " )" << endl;

	delete[] ecuacion;
} //Fin del ejercicio 1.


void ejercicio2(){
	cout << "Ingrese el angulo en grados: " << endl;
	long double angulo = 0;
	cin >> angulo;
	angulo = angulo * (PI/180);
	long double sinacumulador = 0;
	long double cosacumulador = 0;
	//Calculo de Seno
	for( int n = 0; n <= 5; n++){
		//long double pow1 = pow(-1,n);
		//long double pow2 =  pow(angulo,(2*n+1));
		//long double den = factorial(2*n+1);
		sinacumulador += (pow(-1,n) * pow(angulo,(2*n+1)))/(factorial(2*n+1));
	}
	cout << "Seno: "<< sinacumulador << endl;
	
	for(int j = 0; j <= 3; j++){
		cosacumulador += (pow(-1,j) * pow(angulo,2*j)) / (factorial(2*j)) ;
	}	
	cout << "Coseno: " << cosacumulador << endl;
	
}

void ejercicio3(int lines){
	for(int i = lines; i > 0; i--){
		cout << setw(i);
		
		
		
	}

	
}


