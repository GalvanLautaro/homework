const fs = require ('fs');

fs.writeFile('Archivo1.txt', 'Línea 1\nLínea 2', error => {
    if (error) {
        console.log(error);
    } else {
        console.log('El archivo fue creado.');
    }
})

console.log('Última línea del programa.');