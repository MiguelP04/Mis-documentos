#include <iostream>

using namespace std;

double media(double num1, double num2);

int main()
{
    int numero1 = 7;
    int numero2 = 9;
    double resultado;

    resultado = media(numero1, numero2);

    cout << "El resultado de la media es: " << resultado << endl;
}

double media(double num1, double num2){
    double resultado;

    double resultado = (num1 + num2) / 2;

    return resultado
}
