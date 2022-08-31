class CRectangulo {
    constructor (longitud, altura) {
        this.longitud = longitud;
        this.altura = altura;
    }

    CalclarArea () {
        return this.longitud * this.altura;
    }
}

const Rectangulo1 = new CRectangulo(4, 5);
const Rectangulo2 = new CRectangulo(5, 8);

alert('El área de rectangulo 1 es: ' + Rectangulo1.CalclarArea());
alert('El área de rectangulo 2 es: ' + Rectangulo2.CalclarArea());