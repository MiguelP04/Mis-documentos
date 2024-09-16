let free = true;

const verificarCliente = (time)=>{
    let edad = prompt("Cual es tu edad?");
    if(edad >= 18){
        if(time >= 2 && time < 7 && free){
            alert(`Puedes entrar gratis ya que eres la primera persona después de las 2AM. Son las ${time}:00Hs`);
            free = false;
        }
        else{
            alert(`Puedes pasar pero tienes que pagar la entrada. Son las ${time}:00Hs`);
        }
    }
    else{
        alert("man, no pasas ya que no eres menor de edad salite de aquí");
    }
}

verificarCliente(8);
verificarCliente(9);
verificarCliente(10.25)
verificarCliente(3);
verificarCliente(2.5);
verificarCliente(5);