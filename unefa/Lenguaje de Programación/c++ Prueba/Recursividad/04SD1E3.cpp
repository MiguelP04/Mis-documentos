//Ejercicio 3: Implementar una función recursiva para verificar si una palabra es un palíndromo (es decir, si se
//lee igual de izquierda a derecha que de derecha a izquierda). Por ejemplo, "anita lava la tina" es un
//palíndromo. 

#include <iostream>
#include <string>

using namespace std;

bool sonIguales(char a, char b) {
    a = tolower(a);
    b = tolower(b);
    return a == b;
}


bool esPalindromo(string palabra, int izquierda, int derecha) {
    if (izquierda >= derecha) {
        return true;
    }
    
    if (!sonIguales(palabra[izquierda], palabra[derecha])) {
        return false;
    }

    return esPalindromo(palabra, izquierda + 1, derecha - 1);
}

int main() {
    string palabra = "arteletraa";
    bool esUnPalindromo = esPalindromo(palabra, 0, palabra.length() - 1);

    if (esUnPalindromo) {
        cout << "\"" << palabra << "\" es un palindromo." << endl;
    } else{
        cout << "\"" << palabra << "\" NO es un palindromo." << endl;
    }

    return 0;
}