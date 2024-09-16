#include <iostream>

using namespace std;

int main() {
    const int num_cortes = 3;
    double notas[num_cortes];
    double nota_total = 0;

    // Solicitar las notas de cada corte al usuario
    for (int i = 0; i < num_cortes; i++) {
        cout << "Ingrese la nota del corte " << i + 1 << ": ";
        cin >> notas[i];
    }

    // Calcular la nota total
    for (int i = 0; i < num_cortes; i++) {
        nota_total += notas[i];
    }

    // Imprimir la nota total
    cout << "La nota total en la materia es: " << nota_total << endl;

    return 0;
}
