
	Algoritmo manana
		Definir desayuno, cortado, tipoLeche Como Caracter
		Escribir "�Qu� desea tomar caf� o t�?"
		Leer desayuno
		
		Si desayuno == "cafe" Entonces
			Escribir "�C�mo desea su caf�, s�lo o cortado?"
			Leer cortado
			
			si cortado == "solo" Entonces
				Escribir "Le sirvo su caf� s�lo"
			SiNo
				Escribir "�Prefiere con leche vegetal?"
				Leer tipoLeche
				
				si tipoLeche == "si" Entonces
					Escribir "Su caf� con leche vegetal"
				SiNo
					Escribir "Su caf� sin leche vegetal"
					
				FinSi
			FinSi
		SiNo
			Escribir "T�"
		FinSi
FinAlgoritmo
