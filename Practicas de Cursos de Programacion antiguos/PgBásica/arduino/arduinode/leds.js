var jf = require("johnny-five");
var circuito = new jf.Board();

circuito.on("ready", prender);

function prender(){
    var led = jf.Led(13);
    led.blink(500);
} 