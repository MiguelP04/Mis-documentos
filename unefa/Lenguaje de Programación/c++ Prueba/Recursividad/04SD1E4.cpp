//Ejercicio 4: Calcular el máximo común divisor entre dos números. El máximo común divisor es el número más
//grande que divide exactamente ambos números. Se puede calcular utilizando el algoritmo de
//Euclides, que es una función recursiva

#include <iostream>
using namespace std;
// la función se repite hasta que num2==0, por lo tanto al cumplirse
// la función retorna el valor de num1 que terminaría siendo el MCD
// c++ god
int mcd(int num1, int num2) {
    if (num2 == 0)
        return num1;
    return mcd(num2, num1 % num2);
}

int main() {
    int num1, num2;
cout << "Ingrese el primer numero: ";
cin >> num1;
cout << "Ingrese el segundo numero: ";
cin >> num2;
cout << "El MCD de " << num1 << " y de " << num2 << " es: " << mcd(num1, num2) << endl;
    
    return 0;
}
