Algoritmo ejcoop
	Definir nro,unidades,decenas,centenas Como Real
	escribir "	ingrese un número de 1 a 3 cifras"
	leer nro
	centenas = trunc(nro / 100)
	escribir "Centenas: ", centenas
	decenas = trunc(nro / 10) % 10
	escribir "Decenas: " decenas
	unidades = nro % 10
	escribir "Unidades: " unidades
	
	
FinAlgoritmo
