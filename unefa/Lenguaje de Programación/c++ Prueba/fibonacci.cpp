#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int s = 1;
	int d = 0;
	int f = 0;
	int n;
	cout << "Sucesion fubonacci" << endl;
	cout << "Ingrese la cantidad de numeros de la sucesion" << endl;
	cin >> n;
	
	for(int i = 0; i<=n; i++){
		d = f;
		f = f + s;
		s = d;
		cout << f << " - " << endl;
	}
	return 0;
}