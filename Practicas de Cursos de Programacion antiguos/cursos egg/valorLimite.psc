Algoritmo valorLimite
	Definir limite, num, res como Entero
	Escribir "Escriba el valor l�mite positivo"
	leer limite
	
	Escribir "Ingrese el valor inicial"
	leer num
	
	Mientras num < limite Hacer
		Escribir "Ingrese otro valor hasta llegar al valor l�mite"
		leer res
		
		num = res + num
		Escribir num
	FinMientras
	
	Escribir "Valor l�mite superado"
FinAlgoritmo
