var peso = parseInt(prompt("Cual es tú peso actual"));
var planeta = parseInt(prompt("Elige un planeta. \n Marte es 1, Júpiter es 2"));

var g_tierra = 9.8;
var g_marte = 3.7;
var g_jupiter = 24.8;
var peso_final;
var nombre;



if(planeta == 1){
    peso_final = peso * g_marte / g_tierra;
    nombre = "Marte"
    
}
else if(planeta == 2){
    peso_final = peso * g_jupiter / g_tierra;
    nombre = "Júpiter";
}
else{
    alert("mamate un webo");
    nombre = "Narnia";
}
peso_final = parseFloat(peso_final).toFixed(2);

document.write("Pesas en " + nombre + ":<strong> " + peso_final + " kilos</strong>");