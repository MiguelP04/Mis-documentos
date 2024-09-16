#include <iostream>
using namespace std;

int main (){
	int suma = 0, num = 0; float promedio;
	for(int i = 1; i <= 10; i++){
		cout << "Ingrese el numero " << i << ":" << endl;
		cin >> num;
		suma += num;
	}	
	promedio = suma / 10.0;
	cout << "El promedio es de " << promedio << endl;
	return 0;
}