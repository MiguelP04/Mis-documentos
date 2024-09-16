var d = document.getElementById("dibujo");
var pintura = d.getContext("2d");
console.log(pintura);


function pintar(color, inicioX, inicioY, cierreX, cierreY){
    pintura.beginPath();
    pintura.strokeStyle = color;
    pintura.moveTo(inicioX, inicioY);
    pintura.lineTo(cierreX, cierreY);
    pintura.stroke();
    pintura.closePath();
}


var lineaBaja = pintar("gold", 0, 300, 300, 300);
var diagonalIzquierda = pintar("gold", 0, 300, 150, 0);
var lineaDerecha = pintar("gold", 150, 0, 300, 300);
var lineaCentroArriba = pintar("gold", 75, 150, 225, 150);
var lineaCentroIzquierda = pintar("gold", 75, 150, 150, 300);
pintar("gold", 150, 300, 225, 150);
