class celular {
	constructor(tipo, color, peso, pantalla, camara, ram){
		this.tipo = tipo;
		this.color = color;
		this.peso = peso;
		this.pantalla = pantalla;
		this.camara = camara;
		this.ram = ram;
		this.info = `El teléfono <b>${this.tipo}</b> <br> posee un color <b>${this.color}</b>, <br> un peso de <b>${this.peso}</b>, <br> una pantalla de <b>${this.pantalla}</b>, <br> la cámara es <b>${this.camara}</b> <br> y una memoria ram de <b>${this.ram}</b> <br>`
		this.encendido = false;
	}

	presionarBotonEncendido(){
		if(this.encendido == false){ 
			alert(`El teléfono ${this.tipo} se ha encendido `);
			this.encendido = true;
		}
		else{
			alert(`El teléfono ${this.tipo} se apagó`);
			this.encendido = false;
		}
	}
	reiniciar(){
		if(this.encendido == true){
			alert(`El teléfono ${this.tipo} se reiniciará`);	
		}
		else{
			alert(`El teléfono ${this.tipo} está apagado`);
		}
	}
	tomarFotos(){
		if(this.encendido == true){
			alert(`La foto ha sido tomada por una cámara de ${this.camara}`);
		}
		else{
			alert(`El teléfono ${this.tipo} está apagado`);
		}
	}
	grabar(){
		if(this.encendido == true){
			alert(`El vídeo se grabó a una resolución de ${this.pantalla}`);
		}
		else{
			alert(`El teléfono ${this.tipo} está apagado`);
		}
	}
	verInfo(){
		return this.info;
	}
}

class altaGama extends celular {
	constructor(tipo, color, peso, pantalla, camara, ram, camaraextra){;
	super(tipo, color, peso, pantalla, camara, ram);
		this.camaraextra = camaraextra;
	}
	
	camaraLenta(){
		if(this.encendido == true){
			alert("Se grabará en cámara super lenta");
		}
		else{
			alert(`El teléfono ${this.tipo} está apagado`)
		}
	}
	reconocimientoFacial(){
		if(this.encendido == true){
			alert(`El teléfono ${this.tipo} se ha desbloqueado por Reconocimiento Facial`);
		}
		else{
			alert(`El teléfono ${this.tipo} está apagado`);
		}
	}
	infoAltaGama(){
		return this.verInfo() + `y una cámara extra de <b>${this.camaraextra}</b> <br> <br>`;
	}
}

const samsungA55 = new celular("samsungA55 ","rosado", "186g", "1080x2400px", "Cuádruple, 48MP+8MP +5MP+2MP", "6GB");
const xiaomiMI11 = new celular("xiaomiMI11", "celeste", "157 g", "1080x2400px", "Triple, 64MP+8MP+5MP", "6GB");
const motorolaG100 = new celular("motorolaG100", "azul", "207g", "1080x2520 px", "Cuádruple, 64MP+16MP", "8GB");

const iphone11 = new altaGama("iphone11", "blanco", "187g", "1950x2070 px", "full hd", "8gb", "4k");
const iphone13 = new altaGama("iphone13+++", "negro", "3000g", "900x200 px", "hd", "4gb", "8k");

iphone11.presionarBotonEncendido();
iphone11.reconocimientoFacial();
iphone11.camaraLenta();
document.write(iphone11.infoAltaGama());
iphone11.presionarBotonEncendido();

iphone13.presionarBotonEncendido();
iphone13.reconocimientoFacial();
iphone13.camaraLenta();
document.write(iphone13.infoAltaGama());
iphone13.presionarBotonEncendido();