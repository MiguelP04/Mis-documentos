#include <iostream>
#include <string>

using namespace std;

struct libro {
    string titulo, autor;
    float precio;
};

bool guardarLibro(libro libros[], int& cantidadLibros) {
    if (cantidadLibros < 100) {
        string titulo, autor;
        float precio;

        cout << "\nIngrese el título del libro: ";
            cin.ignore();
            getline(cin,titulo);

        cout << "\nIngrese el autor del libro: ";
            getline(cin,autor);

        cout << "\nIngrese el precio del libro: ";
        cin >> precio;

        libros[cantidadLibros].titulo = titulo;
        libros[cantidadLibros].autor = autor;
        libros[cantidadLibros].precio = precio;

        cantidadLibros++;
        cout << "Libro guardado exitosamente" << endl;
        return true;
    } else {
        cout << "La capacidad de la biblioteca está llena" << endl;
        return false;
    }
}

void mostrarLibros(libro libros[], int cantidadLibros) {
    if (cantidadLibros == 0) {
        cout << "No hay libros en la biblioteca" << endl;
    } else {
        for (int i = 0; i < cantidadLibros; i++) {
            cout << "Título: " << libros[i].titulo << endl;
            cout << "Autor: " << libros[i].autor << endl;
            cout << "Precio: " << libros[i].precio<< "$" << endl;
            cout << "------------------------" << endl;
        }
    }
}

bool buscarPorTitulo(libro libros[], int cantidadLibros) {
    string tituloBuscado;
    cout << "Ingrese el título del libro a buscar: ";
    cin.ignore();
     getline(cin,tituloBuscado);

    for (int i = 0; i < cantidadLibros; i++) {
        if (libros[i].titulo == tituloBuscado) {
            cout << "Título: " << libros[i].titulo << endl;
            cout << "Autor: " << libros[i].autor << endl;
            cout << "Precio: " << libros[i].precio<< "$"<< endl;
            return true;
        }
    }

    cout << "Libro no encontrado" << endl;
    return false;
}

bool buscarPorAutor(libro libros[], int cantidadLibros) {
    string autorBuscado;
    cout << "Ingrese el autor del libro a buscar: ";
    cin.ignore();
    getline(cin, autorBuscado);

    bool encontrado = false;
    for (int i = 0; i < cantidadLibros; i++) {
        if (libros[i].autor == autorBuscado) {
            cout << "Título: " << libros[i].titulo << endl;
            cout << "Autor: " << libros[i].autor << endl;
            cout << "Precio:" << libros[i].precio << "$" << endl;
            encontrado = true;
        }
    }

    if (!encontrado) {
        cout << "Libros del autor no encontrados" << endl;
    }

    return encontrado;
}

int main() {
    libro libros[100];
    int cantidadLibros = 0;
    int opcion;

    do {
        cout << "1. Guardar Libro" << endl;
        cout << "2. Mostrar Libros" << endl;
        cout << "3. Buscar Libros por Título" << endl;
        cout << "4. Buscar Libros por Autor" << endl;
        cout << "5. Salir" << endl;
        
        cin >> opcion;

        switch (opcion) {
            case 1:
                guardarLibro(libros, cantidadLibros);
                break;
            case 2:
                mostrarLibros(libros, cantidadLibros);
                break;
            case 3:
                buscarPorTitulo(libros, cantidadLibros);
                break;
            case 4:
                buscarPorAutor(libros, cantidadLibros);
                break;
            case 5:
                cout << "Saliendo" << endl;
                break;
            default:
                cout << "Opción no válida" << endl;
                break;
        }
    } while (opcion != 5);

    return 0;
}
    