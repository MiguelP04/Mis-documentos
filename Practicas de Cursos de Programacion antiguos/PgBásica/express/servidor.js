const express = require("express");
const aplicacion = express();

aplicacion.get("/", iniciar);

function iniciar(peticion, resultado){
    resultado.send("Buenas noches amigo, este es el <strong>home<strong/>");
}

aplicacion.listen(8989);