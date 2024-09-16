const materias = {
	fisica: [48, 8, 3, "Fisica"],
	matematicas: [90, 9, 4, "Matematicas"],
	defensa: [60, 6, 3, "Defensa"],
	logica: [78, 4, 2, "Logica"],
	calculo: [90, 8, 4, "Calculo"]
}

let aprobo = ()=>{
	for (materia in materias){
		let asistencias = materias[materia][0];
		let promedio = materias[materia][1];
		let trabajosPracticos = materias[materia][2];
			console.log(materias[materia][3]);
		if(asistencias >= 90){
			console.log(`%cAsistencias en orden`, `color:green`);
		}
		else{
			console.log(`%cFalta de Asistencias`, `color:red`);
		}

		if(promedio >= 7){
			console.log(`%cPromedio en orden`, `color:green`);
		}
		else{
			console.log(`%cFalta Promedio`, `color:red`);
		}

		if(trabajosPracticos >= 3){
			console.log(`%cTrabajos Prácticos en orden`, `color:green`);
		}
		else{
			console.log(`%cFalta por entrega de Trabajos Prácticos`, `color:red`);
		}
	}
}

aprobo();