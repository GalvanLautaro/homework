<?php
    $l = $_POST['largo'];
    $a = $_POST['ancho'];

    class Crectangulo {
        // private
        private $largo, $ancho;
        // public
        public function __construct($largo, $ancho) {
            $this->largo = $largo;
            $this->ancho = $ancho;
        }

        public function CalcularPerimetro() {
            $perimetro = $this->largo*2 + $this->ancho*2;
            return $perimetro;
        }
        public function CalcularArea() {
            $area = $this->largo * $this->ancho;
            return $area;
        }
        public function MostrarDatos() {
            $area = $this->CalcularArea();
            $perimetro = $this->CalcularPerimetro();
            echo ("El largo de tu rectángulo es: $this->largo");
            echo ("<br>El ancho de tu rectángulo es: $this->ancho");
            echo ("<br>El perímetro de tu rectángulo es: $perimetro");
            echo ("<br>El área de tu rectángulo es: $area");
        }
    }

    $rectangulo = new Crectangulo($l, $a);
    $rectangulo->MostrarDatos();

?>