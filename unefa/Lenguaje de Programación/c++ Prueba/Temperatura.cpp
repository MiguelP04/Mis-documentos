#include <iostream>

using namespace std;

int main(){
	float tempcelcius = 30.2;
	
	float tempfaren = (9 * tempcelcius) / 5 + 32;
	
	cout << "Los grados celcius convertidos a grados Fahrenheit es de: " << tempfaren;
	return 0;
}

