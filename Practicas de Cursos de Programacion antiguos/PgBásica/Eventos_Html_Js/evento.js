var teclas = {
    UP: 38,
    DOWN: 40,
    LEFT: 37,
    RIGHT: 39
};

document.addEventListener("keyup", dibujarConTeclado);
var cuadro = document.getElementById("dibujito");
var pintura = cuadro.getContext("2d");
var x = 150;
var y = 150;


pintar("red", x - 1, y - 1, x + 1, y + 1, pintura)
function dibujarConTeclado(evento){
    console.log(evento);
    var colorcito = "blue";
    var movimiento = 10;
    switch(evento.keyCode){
        case teclas.UP:
            pintar(colorcito, x, y, x, y - movimiento, pintura);
            y = y - movimiento;
         break;
        case teclas.DOWN:
            pintar(colorcito, x, y, x, y + movimiento, pintura);
            y = y + movimiento;
        break;
        case teclas.LEFT:
                pintar(colorcito, x, y, x - movimiento, y, pintura);
                x = x - movimiento;
         break;
         case teclas.RIGHT:
                pintar(colorcito, x, y, x + movimiento, y, pintura);
                x = x + movimiento;
         break;
    }
    
}

function pintar(color, inicioX, inicioY, cierreX, cierreY, pintura){
    pintura.beginPath();
    pintura.strokeStyle = color;
    pintura.lineWidth = 3;  
    pintura.moveTo(inicioX, inicioY);
    pintura.lineTo(cierreX, cierreY);
    pintura.stroke();
    pintura.closePath();
}
