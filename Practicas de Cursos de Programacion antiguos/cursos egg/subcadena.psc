Algoritmo sin_titulo
	Definir palabra, primeraLetra, ultimaLetra Como Caracter
	Escribir "Escribe una palabra"
	leer palabra
	primeraLetra = Subcadena(palabra,0,0)
	ultimaLetra = Subcadena(palabra,Longitud(palabra) - 1, Longitud(palabra) - 1)
	
	Si primeraLetra = ultimaLetra Entonces
		Escribir "Correcto"
	SiNo
		Escribir "Incorrecto"
	FinSi
	
	
FinAlgoritmo
