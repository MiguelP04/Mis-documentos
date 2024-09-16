#include <iostream>

using namespace std;

bool numeroPar(int numero);
int sumaPares(int numero);

int main(){
	int numero;
	cout << "Ingrese un numero para sumar los numeros pares" << endl;
	
	cin >> numero;
	
	cout << "La suma de los numeros pares es de: " << sumaPares(numero) << endl;
}

bool numeroPar(int numero){
	if(numero % 2 == 0){
		return true;
	}else{
		return false;	
	}
}
int sumaPares(int numero){
	int i = 0;
	int suma = 0;
	while(i <= numero){
		if(numeroPar(i)){
			suma = suma + i;
		} 
		i++;
	}    
	return suma;
}