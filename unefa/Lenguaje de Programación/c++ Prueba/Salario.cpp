#include <iostream>

using namespace std;

int main(){
	float josesalario = 1.5;
	float antoniosalario = 3.2;
	
	cout << "Cuantas horas trabajo Jose?" << endl;
	int josehorastrabajadas = 0;
	cin >> josehorastrabajadas;
	
	cout << "Cuantas horas trabajo Antonio?" << endl;
	int antoniohorastrabajadas = 0;
	cin >> antoniohorastrabajadas;
	
	float totaljose = josesalario * josehorastrabajadas;
	float totalantonio = antoniosalario * antoniohorastrabajadas;
	
	cout << "Jose cobro " << totaljose << "$" << " por las horas trabajadas" << endl;
	cout << "Antonio cobro " << totalantonio << "$" << " por las horas trabajadas" << endl;
	
	float totalcobrado = totaljose + totalantonio;
	
	cout << "el total que cobraron los dos fue de: " << totalcobrado << "$";
	return 0;
}

