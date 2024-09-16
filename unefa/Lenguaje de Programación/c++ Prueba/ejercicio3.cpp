#include <iostream>
#include <string>
using namespace std;

int main() {
	int num1 = 0;
	int num2 = 0;
	int resultado = 0;
	string respuesta;
	cout << "Coloca un primer numero para sumar: " << "\n";
	cin >> num1;
	cout << "Coloca un segundo numero para sumar: " << "\n";
	cin >> num2;
	
	resultado = num1 + num2;
	cout << "El resultado de la suma es: " << resultado << endl;
	system("pause");
	system("cls");
	 
	cout << "Desea realizar otra suma de dos numeros enteros?" << endl;
	cout << "Si" << endl;
	cout << "No" << endl;
	cin >> respuesta;
	system("cls");
	
	if(respuesta == "si" || respuesta == "SI"){
		cout << "Coloca un primer numero para sumar: " << "\n";
		cin >> num1;
		cout << "Coloca un segundo numero para sumar: " << "\n";
		cin >> num2;
		
		resultado = num1 + num2;
		cout << "El resultado de la suma es: " << resultado << endl;
	} else {
		cout << "Programa Finalizado";
	}
	return 0;
}