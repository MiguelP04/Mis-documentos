var imagenes = [];
imagenes["Cauchin"] = "vaca.png";
imagenes["Pokocho"] = "pollo.png";
imagenes["Tocinauro"] = "cerdo.png";

class Pakiman {
    constructor(n, v, a) {
        this.nombre = n;
        this.vida = v;
        this.ataque = a;
        this.imagen = new Image();
        this.imagen.src = imagenes[this.nombre];
    }
    saludar(){
        alert(this.nombre);
    }
    mostrar(){
        document.body.appendChild(this.imagen);

        document.write("<br />" + "<strong>"+ this.nombre + "</strong> <br />");
        document.write("Vida: " + this.vida + "<br />");
        document.write("Ataque: " + this.ataque + "<br />" + "<hr />");
    }
}

var cauchin = new Pakiman("Cauchin", 130, 30);
var pokocho = new Pakiman("Pokocho", 80, 50);
var tocinauro = new Pakiman("Tocinauro", 100, 40);


var imagen = new Image

cauchin.mostrar();
pokocho.mostrar();
tocinauro.mostrar();

