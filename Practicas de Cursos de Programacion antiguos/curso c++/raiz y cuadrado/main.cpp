#include <iostream>
#include <cmath>

using namespace std;

float rz(float nro);
float cuadra(float nro);

int main()
{
    float numero;
    float raiz;
    float cuadrado;
    cout << "Inserte un número para sacar su raíz y su cuadrado" << endl;
    cin >> numero;


    raiz = rz(numero);
    cuadrado = cuadra(numero);

    cout << "La raiz del " << numero << " es " << raiz << endl;
    cout <<"El cuadrado del " << numero << " es " << cuadrado << endl;



    return 0;
}

float rz(float nro){
    return sqrt(nro);
}

float cuadra(float nro){
    return pow(nro, 2);
}

