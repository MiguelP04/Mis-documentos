#include <iostream>
#include <string>
using namespace std;

int main(){
	string trabajadores[100][3];
	string nombre_completo, cedula, salario, buscar_cedula;
	int tecla;
	string encontrado[1][1];
	
	do{
		cout << "Bienvenido al sistema de empleados" << endl;
		cout << "" << endl;	
		cout << "1) Guardar Empleado" << endl;
		cout << "2) Mostrar Empleados" << endl;
		cout << "3) Buscar Empleados por Cedula" << endl;
		cout << "4) Mostrar el Empleado con mayor salario" << endl;
		cout << "" << endl;
		cout << "8) Salir del programa" << endl;
		cin >> tecla;
		cin.ignore();
		system("cls");
	
		switch(tecla){
			case 1:
				for(int i = 0; i < 100; i++){
					if(trabajadores[i][0].empty()){
						for(int j = 0; j < 3; j++){
							switch(j){
								case 0:
									cout << "Ingrese su Nombre Completo" << endl;
									getline(cin, trabajadores[i][j]);
									break;
								case 1:
									cout << "Ingrese su cedula" << endl;
									cin >> trabajadores[i][j]; 
									cin.ignore();
									break;
								case 2: 
									cout << "Ingrese su salario en $" << endl;
									cin >> trabajadores[i][j];
									cin.ignore();
									break;
							}
						}
						system("cls");
						cout << "Empleado guardado" << endl;
						system("pause");
						system("cls");
						break;
					}
					
				}
				break;
			case 2:
				if(trabajadores[0][0].empty()){
					cout << "No hay empleados para mostrar" << endl;
					system("pause");
					system("cls");
					
				} else {
					for(int i = 0; i < 100; i ++){
					if(trabajadores[i][0].empty() == false){
						for(int j = 0; j < 3; j++){
						switch(j){
							case 0:
								cout << "Nombre del empleado " << i + 1 << ": " << trabajadores[i][j] << endl;
								break;
							case 1:
								cout << "Cedula del empleado " << i + 1  << ": " << trabajadores[i][j] << endl;
								break;
							case 2:
								cout << "Salario del empleado " << i + 1  << ": " << trabajadores[i][j] << endl;
								break;
						}
						}
						cout << "" << endl;
					}
				}
				system("pause");
				system("cls");
				}
				
				break;
			case 3:
				
				if(trabajadores[0][0].empty()){
					cout << "No hay empleados para buscar" << endl;
					system("pause");
					system("cls");
				} else {
					cout << "Coloca la cedula para buscar el empleado" << endl;
					cin >> buscar_cedula;
					system("cls");
					for(int i = 0; i < 100; i++){
						if(trabajadores[i][1] == buscar_cedula){
							encontrado[0][0] = "hola";
							for(int j = 0; j < 3; j++){
								switch(j){
									case 0:
										cout << "Nombre Completo: " << trabajadores[i][j] << endl;
										break;
									case 1: 
										cout << "Cedula: " << trabajadores[i][1] << endl;
										break;
									case 2:
										cout << "Salario: " << trabajadores[i][2] << endl;
										break;
								}
							}
							
							system("pause");
							system("cls");
							break;
						} else if(i == 99){
							
							cout << "Empleado no encontrado" << endl;
							system("pause");
							system("cls");
							break;
							
						}
					}
				}
				break;
			case 8:
				cout << "Gracias por usar el programa" << endl;
				break;
			default:
				system("cls");
				cout << "Opcion invalida" << endl;
				tecla = 8;
				break;		      	
		}
	}while(tecla != 8);
	
	// num = [["hola"]]
	 return 0;
}