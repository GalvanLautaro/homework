<?php
    function CambiarPalabra($palabra, $numero) {
        for($i = 0; $i < strlen($palabra); $i++) {
            if($i == $numero) {
                $palabra[$i-1] = 'X'; 
            }
        }
        return $palabra;
    }
?>