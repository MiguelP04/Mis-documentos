#include <iostream>

using namespace std;

int main()
{
    string nombre;
    cout << "Introduce tu nombre: ";
    getline(cin, nombre);
    cout << "Te llamas " << nombre << endl;
    return 0;
}
