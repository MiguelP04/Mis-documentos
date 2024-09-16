#include <iostream>

using namespace std;

int main() {
	
	int numeros[10];
	int positivos = 0;
	int negativos = 0;
	int ceros = 0;
	cout << "Ingrese 10 digitos: " << "\n";
	int num;
	for(int i = 0; i < 10; i++){
		cout << "Numero " << (i + 1) << ": " << "\n";
		cin >> num;
		numeros[i] = num;
		if(numeros[i] > 0){
			positivos++;
		} else if (numeros[i] < 0){
			negativos++;
		} else if(numeros[i] == 0){
			ceros++;
		} else {
			cout << "Acción incorrecta" << "\n";
		}
		
	}
	cout << "La cantidad de numeros positivos es de: " << positivos << "\n";
	cout << "La cantidad de numeros negativos es de: " << negativos << "\n";
	cout << "La cantidad de numeros que son ceros es de: " << ceros << "\n";
	return 0;
}
