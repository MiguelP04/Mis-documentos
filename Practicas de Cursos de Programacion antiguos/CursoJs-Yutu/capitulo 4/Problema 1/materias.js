let materias = {
	Matematicas: ["Rodriguez", "Juan", "Pedro", "Maria", "Cofla"],
	Defensa:["Perez", "Juan", "Pedro", "Andrea", "Maria"],
	Programacion:["Dalto", "Juan", "Andrea", "Maria", "Cofla"],
	Logica: ["Ramirez", "Andrea", "Maria" ]
}

let obtenerInfo = (materia)=>{
	if(materias[materia] !== undefined){
		return [materias[materia], materia, materias];
	}
	else{
		return materias;
	}
}

let mostrarInfo = (materia)=>{
	let informacion = obtenerInfo(materia);

let profesor = informacion[0][0];
let alumnos = informacion[0];
alumnos.shift();

if(informacion !== false){
	document.write(`El profesor de <b>${informacion[1]}</b> es: <b style=color:red>${profesor}</b> <br> 
		Los alumnos son: <b style=color:blue>${alumnos}</b> <br> <br>`);
	} 
}

mostrarInfo("Matematicas");
mostrarInfo("Defensa");
mostrarInfo("Logica");
mostrarInfo("Programacion");

let mostrarAlumno = (alumno)=>{
	let informacion = materias;
	let cantidadTotal = 0;
	let clasesPresentes = [];
	for (info in informacion){
		console.log(info);
		if(informacion[info].includes(alumno)){
		 	cantidadTotal++;
		 	clasesPresentes.push(" " + info);


		}
		else{
			false;
		}
		
	}
	document.write(`<b style=color:blue>${alumno}</b> está en <b>${cantidadTotal}</b> clases: <b style=color:green>${clasesPresentes}</b> <br> </br> `);
}

mostrarAlumno("Cofla")
mostrarAlumno("Maria")
