
	Algoritmo manana
		Definir desayuno, cortado, tipoLeche Como Caracter
		Escribir "¿Qué desea tomar café o té?"
		Leer desayuno
		
		Si desayuno == "cafe" Entonces
			Escribir "¿Cómo desea su café, sólo o cortado?"
			Leer cortado
			
			si cortado == "solo" Entonces
				Escribir "Le sirvo su café sólo"
			SiNo
				Escribir "¿Prefiere con leche vegetal?"
				Leer tipoLeche
				
				si tipoLeche == "si" Entonces
					Escribir "Su café con leche vegetal"
				SiNo
					Escribir "Su café sin leche vegetal"
					
				FinSi
			FinSi
		SiNo
			Escribir "Té"
		FinSi
FinAlgoritmo
