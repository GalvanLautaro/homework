const fs = require ('fs/promises');

fs.readFile('Archivo2.txt')
.then(datos => {
    console.log(datos.toString());
})
.catch(error => {
    console.log(error);
})

console.log('Última línea del programa.');