var d = document.getElementById("dibujo");
var pintura = d.getContext("2d");
var caja = document.getElementById("cajita");
var boton = document.getElementById("botoncito");
var ancho = d.width;

boton.addEventListener("click", dibujarLineas);


pintar("purple", 1, 1, 1, 299);
pintar("purple", 1, 299, 299, 299);




function pintar(color, inicioX, inicioY, cierreX, cierreY){
    pintura.beginPath();
    pintura.strokeStyle = color;
    pintura.moveTo(inicioX, inicioY);
    pintura.lineTo(cierreX, cierreY);
    pintura.stroke();
    pintura.closePath();
}

function dibujarLineas(){
    var lineas = parseInt(caja.value);
    var espacio = ancho / lineas;
    for(l = 0; l < lineas; l++){
        var iY = espacio * l;
        var cX = espacio * (l + 1);
        pintar("blue", 0, iY, cX, 300); 
    }
}

