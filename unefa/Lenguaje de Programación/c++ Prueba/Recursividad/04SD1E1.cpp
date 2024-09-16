//1. Revertir una cadena usando Recursión.

#include <iostream>
#include <string>
using namespace std;

void RevertirTexto(string &cadena, int primera, int ultima) {
    if (primera >= ultima) {
        return;
    }
    // está función sirve para cambiar de lugar el valor de las varibles
    swap(cadena[primera], cadena[ultima]);
    RevertirTexto(cadena, primera + 1, ultima - 1);
    // aquí se llama la función así misma hasta que
    // se haya revertido completamente 
}

int main() {
    string texto;
    cout << "ingrese el texto: " << endl;
    getline(cin, texto);
    RevertirTexto(texto, 0, texto.size() - 1);
    cout << "texto revertido: " << texto << endl;
    return 0;
}
