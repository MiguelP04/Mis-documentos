Algoritmo minimos_maximos
	Definir min,max,num,i Como Entero
	
	Escribir "Ingrese el número mínimo"
	Leer min
	
	Escribir "Ingrese el número máximo"
	Leer max
	
	Escribir "Ingrese un número entero"
	Leer num
	
	i = 0
	Mientras num <= max y num >= min Hacer

		i = i + 1
		Escribir "Ingrese un número entero"
		Leer num
	FinMientras
	
	Escribir "La cantidad de números enteros dentro del intervalo de mínimo y máximo es de " i
FinAlgoritmo
