var bancoCliente = "BBVA Pronvincial";
var cuentaCliente = "miguel0911";
var saldoCliente = 1000000;
var cuentaClienteVerificada = true;

var transferencia = saldoCliente;
var BancoDestino = "Banco de Venezuela";
var CuentaDestino = "anyelo96";
var saldoDestino = 0;
var cuentaDestinoVerificada = false;

function cuentaVerificada(){
    if(cuentaClienteVerificada && cuentaDestinoVerificada){
        alert("Cuentas Verificadas");
    }
    else{
        alert("Alguna de las cuentas no está verificada");
    }
}

function horarios(hora){
    if(hora >= 9 && hora <= 12){
        alert("Estamos abiertos");
    }
    else if(hora >= 15 && hora <=20){
        alert("Estamos abiertos");
    }
    else{
        console.log("Estamos cerrados")
    }
}

function transacciones(){
    var transaccion = 500;
    if(bancoCliente === BancoDestino){
        console.log("no se le cobra transacción");
    }
    else{
        console.log("se le cobra transacción")
        return transferencia += transaccion; 
    }
}