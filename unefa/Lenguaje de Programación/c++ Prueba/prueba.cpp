#include <iostream>
#include <string>

using namespace std;

int main(){
	float harinaprecio = 1.2;
	float azucarprecio = 1.7;
	float salsaprecio = 2.3;
	
	cout << "Cuantas harina pan llevar" << endl;
	int cantidadharina;
	cin >> cantidadharina;
	
	cout << "Cuantas azucar va a llevar" << endl;
	int cantidadazucar;
	cin >> cantidadazucar;
	
	cout << "Cuantas salsa llevara" << endl;
	int cantidadsalsa;
	cin >> cantidadsalsa;
	
	float totalharina = harinaprecio * cantidadharina;
	cout << "La harina en total te cuesta: " << totalharina << endl;
	
	float totalazucar  = azucarprecio * cantidadazucar;
	cout << "La harina en total te cuesta: " << totalazucar << endl;
	
	float totalsalsa = salsaprecio * cantidadsalsa;
	cout << "La harina en total te cuesta: " << totalsalsa << endl;
	
	float totalprecio = totalharina + totalazucar + totalsalsa;
	
	cout << "El total de todo seria: " << totalprecio;
	return 0;
}

