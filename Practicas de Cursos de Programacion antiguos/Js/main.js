const input = document.getElementById("text");

input.addEventListener("keyup", (event) => {
    let valor = event.target.value;
    console.log(valor);
    let muestrate = "";
    if(valor !== ""){
        muestrate = valor;
    }
    else{
        muestrate = "Texto Vacío";
    }
    document.getElementById("Mostrar-Texto").innerHTML = muestrate;
}); 