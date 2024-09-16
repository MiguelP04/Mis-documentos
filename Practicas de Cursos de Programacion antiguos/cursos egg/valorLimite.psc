Algoritmo valorLimite
	Definir limite, num, res como Entero
	Escribir "Escriba el valor límite positivo"
	leer limite
	
	Escribir "Ingrese el valor inicial"
	leer num
	
	Mientras num < limite Hacer
		Escribir "Ingrese otro valor hasta llegar al valor límite"
		leer res
		
		num = res + num
		Escribir num
	FinMientras
	
	Escribir "Valor límite superado"
FinAlgoritmo
