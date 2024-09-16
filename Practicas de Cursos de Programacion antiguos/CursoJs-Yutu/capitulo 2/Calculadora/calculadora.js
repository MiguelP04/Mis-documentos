const sumar = (num1, num2)=>{
	return (num1 + num2);
}
const restar = (num1, num2)=>{
	return (num1 - num2);
}
const dividir = (num1, num2)=>{
	return (num1 / num2);
}
const multiplicar = (num1, num2)=>{
	return (num1 * num2);
}

const calcularPotencia = (num1 , p)=>{
	return num1 ** p;
}
const calcularRaizCuadrada = (num)=>{
	return Math.sqrt(num);
}
const calcularRaizCubica = (num)=>{
	return Math.cbrt(num);
}

let suma = 1;
let resta = 2;
let multiplicacion = 3
let division = 4;
let raizCuadrada = 5;
let raizCubica = 6;
let potencia = 7;

let operacion = prompt("¿Que operacion quieres hacer?, 1: Sumar 2: Restar 3: Multiplicar 4: Dividir 5: Raíz Cuadrada de un número 6: Raíz Cúbica de un número 7: La potencia de un número");



if(operacion == suma){
	let numero_1 = prompt("Primer número para operar");
	let numero_2 = prompt("Segundo numero para operar");
	let resultado = sumar(numero_1, numero_2);
	alert(`El resultado de la operación es: ${resultado}`)
}
else if(operacion == resta){
	let numero_1 = prompt("Primer número para operar");
	let numero_2 = prompt("Segundo numero para operar");
	let resultado = restar(numero_1, numero_2);
	alert(`El resultado de la operación es: ${resultado}`)
}
else if(operacion == multiplicacion){
	let numero_1 = prompt("Primer número para operar");
	let numero_2 = prompt("Segundo numero para operar");
	let resultado = mutiplicar(numero_1, numero_2);
	alert(`El resultado de la operación es: ${resultado}`)
}
else if(operacion == division){
	let numero_1 = prompt("Primer número para operar");
	let numero_2 = prompt("Segundo numero para operar");
	let resultado = dividir(numero_1, numero_2);
	alert(`El resultado de la operación es: ${resultado}`)
}	
else if(operacion == raizCuadrada){
	let numero = prompt("Número para operar su Raíz Cuadrada");
	let resultado = calcularRaizCuadrada(numero);
	alert(`El resultado de la operación es: ${resultado}`)
}
else if(operacion == raizCubica){
	let numero = prompt("Número para operar su Raíz Cúbica");
	let resultado = calcularRaizCubica(numero);
	resultado.toString();
	alert(`El resultado de la operación es: ${resultado[0]}`)
}
else if(operacion == raizCubica){
	let numero = prompt("Número para operar su Raíz Cúbica");
	let resultado = calcularRaizCubica(numero);
	resultado.toString();
	alert(`El resultado de la operación es: ${resultado[0]}`)
}
else if(operacion == potencia){
	let numero = prompt("Número para operar la potencia");
	let exponente = prompt("La potencia del número")
	let resultado = calcularPotencia(numero, exponente);
	alert(`El resultado de la operación es: ${resultado}`)
}
else{
	alert("No es una operación");
}