let materias = {
    Matematicas: ["Rodriguez", "Juan", "Pedro", "Maria", "Cofla"],
    Defensa:["Perez", "Juan", "Pedro", "Andrea", "Maria"],
    Programacion:["Dalto", "Juan", "Andrea", "Maria", "Cofla"],
    Logica: ["Ramirez", "Andrea", "Maria" ]
}

let inscribir = (alumno, materia)=>{
    let personas = materias[materia];
    
    if(personas.length < 21){
        personas.push(alumno);
        if(materia == "Matematicas"){
            materias = {
            Matematicas: personas,
            Defensa: materias["Defensa"],
            Programacion: materias["Programacion"],
            Logica: materias["Logica"]
            }
        }
        else if(materia == "Defensa"){
            materias = {
            Matematicas: materias["Matematicas"],
            Defensa: personas,
            Programacion: materias["Programacion"],
            Logica: materias["Logica"]
            }
        }
        else if(materia == "Programacion"){
            materias = {
            Matematicas: materias["Matematicas"],
            Defensa: materias["Defensa"],
            Programacion: personas,
            Logica: materias["Logica"]
            }
        }

        else if(materia == "Logica"){
            materias = {
            Matematicas: materias["Matematicas"],
            Defensa: materias["Defensa"],
            Programacion: materias["Programacion"],
            Logica: personas
            }
        }

         document.write(`¡¡Felicidades alumno <b style=color:blue>${alumno}</b> te has logrado inscribir a <b style=color:red>${materia}</b>!!<br></br>`);
    }
        else{
            document.write(`Lo siento ${alumno}, ya las clases de ${materia} están llenas <br></br>`);
        }
}


inscribir("David", "Matematicas");
inscribir("Juan", "Matematicas");
inscribir("Luis", "Matematicas");
inscribir("David", "Matematicas");
inscribir("Juan", "Matematicas");
inscribir("Luis", "Matematicas");

inscribir("David", "Matematicas");
inscribir("Juan", "Matematicas");
inscribir("Luis", "Matematicas");

inscribir("David", "Matematicas");
inscribir("Juan", "Matematicas");
inscribir("Luis", "Matematicas");

inscribir("David", "Matematicas");
inscribir("Juan", "Matematicas");
inscribir("Luis", "Matematicas");

inscribir("David", "Matematicas");
inscribir("Juan", "Matematicas");
inscribir("Luis", "Matematicas");


inscribir("David", "Matematicas");
inscribir("Juan", "Matematicas");
inscribir("Luis", "Matematicas");



document.write( "<b>" + materias['Matematicas'] + "</b>");


