#include <iostream>
using namespace std;

int main(){
	float factura = 0, propina = 0, propina_por, monto_pro, total;
	cout << "Ingrese el monto de la factura" << endl;
	cin >> factura;
	cout << "Ingrese el porcentaje" << endl;
	cin >> propina;
	if(propina >= 0 && propina <= 100){
		propina_por = propina / 100;
	} else {
		cout << "No es valido" << endl;
		system("cls");
	}
	monto_pro = factura * propina_por;
	total = monto_pro + factura;
	cout << "El monto de la propina es " << monto_pro << endl;
	cout << "El total de la factura mas de la propina es " << total << endl;
	
	return 0;
}