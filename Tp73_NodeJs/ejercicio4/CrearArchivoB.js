const fs = require ('fs/promises');

fs.writeFile('Archivo2.txt', 'Línea 1\nLínea 2\nCreado con promesas.')
.then(() => {
    console.log('Archivo creado mediante promesas.');
})
.catch(error => {
    console.log(error);
})

console.log('Última línea del programa.');