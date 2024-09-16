#include <iostream>
#include <locale.h>
#include <conio.h>

using namespace std;

void preguntar_notas(string nota, string corte);
double calc_notas_semestre(double nota, double porc);
double calc_notas_corte(double nota, double porc);


int main()
{
    setlocale(LC_ALL, "");
    /*cout << "Buenos días!!" << endl;
    cout << "El día de hoy les presentamos un programa que calcula todas tus notas de las materias" << endl; */

    int nota, porc;
    int acum_porc = 0;
    double suma = 0;

    for(int i=1; i<5; i++){


        for(int j=1; j<4; j++){
            cout << "Ingrese el valor en porcentaje de la nota " << j << " del corte " << i << endl;
            cin >> porc;

            while(porc > 25)



            cout << "Ingrese la nota " << j << " del corte " << i << endl;
            cin >> nota;


            suma += calc_notas_semestre(nota, porc);

        }
        system("cls");
        cout << "Tu nota actual del semestre en base a 20pts es de " << suma << "pts." "\n" << endl;



    }





    return 0;
}

double calc_notas_semestre(double nota, double porc){
        double resultado;
        resultado = nota * porc / 100;
        return resultado;
}

double calc_notas_corte(double nota, double porc){
        double resultado;
        resultado = (nota * porc / 100) * 4;
        return resultado;
}






