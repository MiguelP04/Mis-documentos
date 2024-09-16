class Billete {
    constructor(billeteVal, billeteCant){
        this.valor = billeteVal;
        this.cantidad = billeteCant;
    }
}

new Billete(50, 5);

var caja = [];
caja.push(new Billete(50, 4));
caja.push(new Billete(20, 5));
caja.push(new Billete(10, 2));
var dinero = 0;
var entregado = [];

var insertar = document.getElementById("insertar");
var extraer = document.getElementById("extraer");
var resultado = document.getElementById("result");

extraer.addEventListener("click", calcular);

function calcular(){
    dinero = parseInt(insertar.value);
    for (c of caja){
            var div;
            var papeles;
            if(dinero > 0){
                div = parseInt(dinero / c.valor);
                if(div > c.cantidad){
                    papeles = c.cantidad;
                }
                else{
                    papeles = div;
                }
                entregado.push(new Billete(c.valor, papeles));
                dinero = dinero - (c.valor * papeles);
            }
            

        }
        
        if(dinero > 0){
            resultado.innerHTML += "shit nigga, la fucking caja se quedo sin plata amigo";
        }

        else{
            for(e of entregado){
                if(e.cantidad > 0){
                    if(e.cantidad == 1){

                        resultado.innerHTML += e.cantidad + " billete de $" + e.valor + "<br />";
                    }
                    else{
                        resultado.innerHTML += e.cantidad + " billetes de $" + e.valor + "<br />";
                    }
                }
                
                
            }
            console.log(entregado);
            
        }
    }