const pi = 3.14;

function Sumar(a, b) {
    return a + b;
}

function Restar(a, b) {
    return a - b;
}

function Dividir(a, b) {
    if (b == 0) {
        console.log('No se puede realizar la división.');
    } else {
        return a / b;
    }
}

exports.Sumar = Sumar;
exports.Restar = Restar;
exports.Dividir = Dividir;
exports.pi = pi;

