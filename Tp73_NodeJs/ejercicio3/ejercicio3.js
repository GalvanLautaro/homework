const os = require('os');
// Mostramos el espacio libre de memoria en el dispositivo
console.log('Espacio de memoria libre: ' + os.freemem());
// Creamos un vector
let vector = new Array();
// Vamos incrementando el valor del vector y lo vamos mostrando
for(let i = 0; i < 1000000; i++) {
    vector.push(i);
}
// Volver a mostrar el espacio libre de memoria en el dispositivo
console.log('Espacio de memoria libre luego de crear el vector: ' + os.freemem());