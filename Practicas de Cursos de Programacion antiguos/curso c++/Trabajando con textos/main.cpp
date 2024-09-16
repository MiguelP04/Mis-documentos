#include <iostream>

using namespace std;

int main()
{
    string nombre = "Miguel Petit";
    string Apellido = nombre.substr(7, 5);
    cout << Apellido << endl;
    cout << nombre.length() << endl;
    cout << nombre.find(                     "e", 5) << endl;
    return 0;
}
