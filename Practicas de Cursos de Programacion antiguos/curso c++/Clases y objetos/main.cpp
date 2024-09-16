#include <iostream>

using namespace std;

class Alumnos {
private:
    string grado;
public:
    string nombre;
    int edad;
    double nota;

    Alumnos(){
        nombre = "Sin asignar";
        edad = 0;
        nota = 0;
    }

    Alumnos(string nombre_alumno, string grado_alumno, int edad_alumno, double nota_alumno){
        nombre = nombre_alumno;
        definir_grado(grado_alumno);
        edad = edad_alumno;
        nota = nota_alumno;
    }

    void definir_grado(string grado_alumno){
        if (grado_alumno == "Arquitectura" || grado_alumno == "Ingenieria" || grado_alumno == "Economia"){
            grado = grado_alumno;
        } else {
            grado = "grado incorrecto";
        }
    }

    string obtener_grado(){
        return grado;
    }

};

int main()
{
    Alumnos alumno1("Miguel", "Petit", 19, 16.5);

    Alumnos alumno2("Anyelo", "Economia", 27, 9.5);

    cout << alumno1.nota << endl;
    cout << alumno2.obtener_grado() << endl;
    return 0;
}
