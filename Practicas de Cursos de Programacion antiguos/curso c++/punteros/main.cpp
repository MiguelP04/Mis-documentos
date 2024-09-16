#include <iostream>

using namespace std;

int main()
{
    int entero = 5;
    int *pentero = &entero;
    double decimal = 2.5;
    double *pdecimal = &decimal;
    char letra = 'a';
    char *pletra = &letra;

    cout << *pentero << endl;
    cout << *pdecimal << endl;
    cout << *pletra << endl;
    return 0;
}
