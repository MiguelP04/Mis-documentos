#include <iostream>
#include <string>
#include <vector>

// Clase Usuario
class Usuario {
private:
    std::string nombre;
    std::string apellido;
    std::string username;
    std::string password;

public:
    Usuario(std::string nombre, std::string apellido, std::string username, std::string password)
        : nombre(nombre), apellido(apellido), username(username), password(password) {}

    void mostrarInformacion() {
        std::cout << "Nombre: " << nombre << " " << apellido << std::endl;
        std::cout << "Username: " << username << std::endl;
    }
};

// Clase GestorUsuarios
class GestorUsuarios {
private:
    std::vector<Usuario> usuarios;

public:
    void agregarUsuario(Usuario usuario) {
        usuarios.push_back(usuario);
    }

    void mostrarUsuarios() {
        for (const auto& usuario : usuarios) {
            usuario.mostrarInformacion();
        }
    }
};

int main() {
    // Crear usuarios
    Usuario usuario1("Juan", "Perez", "jperez", "123456");
    Usuario usuario2("Maria", "Gonzalez", "mgonzalez", "password");

    // Crear gestor de usuarios
    GestorUsuarios gestor;

    // Agregar usuarios al gestor
    gestor.agregarUsuario(usuario1);
    gestor.agregarUsuario(usuario2);

    // Mostrar usuarios
    gestor.mostrarUsuarios();

    return 0;
}
