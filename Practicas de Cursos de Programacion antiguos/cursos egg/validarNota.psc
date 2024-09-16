Algoritmo validarNota
	Definir num Como Entero
	Escribir "Ingrese una nota de un número entre 0 y 10"
	leer num
	
	Mientras num < 0 o num > 10 Hacer
		Escribir "Número inválido, ingrese otro"
		leer num
	FinMientras
	
	Escribir "Nota correcta"
FinAlgoritmo
