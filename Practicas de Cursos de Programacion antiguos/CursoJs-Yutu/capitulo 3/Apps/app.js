class apps {
	constructor(juego, descargas, puntuacion, peso){
		this.descargas = descargas;
		this.puntuacion = puntuacion;
		this.peso = peso;
		this.juego = juego;
		this.instalar = false;
		this.abrir = false;
	}

	descargar(){
		if(this.instalar == false){
			alert("App instalada");
			this.instalar = true;
		}
	}

	abrirApp(){
		if(this.instalar == true && this.abrir == false){
			alert("La app se ha abierto correctamente");
			this.abrir = true;
		}
	}

	cerrar(){
		if(this.abrir == true){
			alert("La aplicación se ha cerrado");
			this.abrir = false;
		}
	}

	desinstalar(){
		if(this.intalar == true){
			alert("App desinstalada");
		}
	}

	info(){
		return ` <b>${this.juego}</b> <br>
				 Cantidad de descargas: <b>${this.descargas}</b> <br>
		         Puntuación: <b>${this.puntuacion}</b> <br>
		         peso: <b>${this.peso} </b> <br> <br>` 

	}
	
}

const cod = new apps("Call of duty", "200m", "10/10", "1gb");
const apex = new apps("Apex Legends", "10m", "7/10", "260mb");

document.write(cod.info());
document.write(apex.info());

cod.descargar();
cod.abrirApp();
cod.cerrar();
cod.desinstalar();