Algoritmo minimos_maximos
	Definir min,max,num,i Como Entero
	
	Escribir "Ingrese el n�mero m�nimo"
	Leer min
	
	Escribir "Ingrese el n�mero m�ximo"
	Leer max
	
	Escribir "Ingrese un n�mero entero"
	Leer num
	
	i = 0
	Mientras num <= max y num >= min Hacer

		i = i + 1
		Escribir "Ingrese un n�mero entero"
		Leer num
	FinMientras
	
	Escribir "La cantidad de n�meros enteros dentro del intervalo de m�nimo y m�ximo es de " i
FinAlgoritmo
