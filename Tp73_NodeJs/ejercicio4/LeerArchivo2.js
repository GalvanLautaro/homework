const fs = require ('fs');

function Leer (error, datos) {
    if (error) {
        console.log(error);
    } else {
        console.log(datos.toString());
    }
}

fs.readFile('Archivo1.txt', Leer);
console.log('Última línea del programa.');