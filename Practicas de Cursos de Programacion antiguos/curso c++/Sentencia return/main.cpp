#include <iostream>

using namespace std;

double media(double num1, double num2);

int main()
{
    double numero1 = 7.2;
    double numero2 = 9.4;
    double resultado;

    resultado = media(numero1, numero2);

    cout << "El resultado de la media es: " << resultado << endl;

    return 0;
}

double media(double num1, double num2){
    double resultado;

    resultado = (num1 + num2) / 2;

    return resultado;
}
