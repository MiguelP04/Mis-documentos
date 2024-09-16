var dibujando= false;
var x = 0;
var y = 0;

var p = document.getElementById("area_dibujo");
var context = p.getContext("2d");

p.addEventListener("mousedown", d => {
    x = d.offsetX;
    y = d.offsetY;
    dibujando = true;
});

p.addEventListener("mousemove", d => {
    if(dibujando == true){
    pintar(context, x, y, d.offsetX, d.offsetY);
    x = d.offsetX;
    y = d.offsetY;
}
});

window.addEventListener("mouseup", d => {
    if(dibujando === true){
    pintar(context, x, y, d.offsetX, d.offsetY);
    x = 0;
    y = 0;
    dibujando = false;
}
});


function pintar(contextopls, inicioX, inicioY, cierreX, cierreY){
    contextopls.beginPath();
    contextopls.strokeStyle = "black";
    contextopls.lineWidth = 2;  
    contextopls.moveTo(inicioX, inicioY);
    contextopls.lineTo(cierreX, cierreY);
    contextopls.stroke();
    contextopls.closePath();
}
