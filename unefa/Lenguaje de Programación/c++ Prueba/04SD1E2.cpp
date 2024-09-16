#include <iostream>
#include <vector>
using namespace std;

int main() {
	int num = 0;
	int factorial = 1;
	cout << "Ingrese el numero para calcular su factorial: " << endl;
	cin >> num;
	
	for(int i = 0; i <= num; i++){
		if(num == 0){
			factorial = 0;
		} else if (num > 0){
			if(i == 0){
				continue;
			}
			factorial *= i;
			
		} else {
			cout << "Error! el numero ingresado es negativo";
		}
	}
	cout << "El factorial de " << num << " es: " << factorial;
	
	return 0;
}
