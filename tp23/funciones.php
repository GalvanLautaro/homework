<?php
    function Localidad($a) {
        switch($a) {
            case 61: $l = "Localidad: Brasilia"; break;
            case 71: $l = "Localidad: Salvador"; break;
            case 11: $l = "Localidad: Sao Paulo"; break;
            case 21: $l = "Localidad: Rio de Janeiro"; break;
            case 32: $l = "Localidad: Juiz de Fora"; break;
            case 19: $l = "Localidad: Campinas"; break;
            case 27: $l = "Localidad: Vitoria"; break;
            case 31: $l = "Localidad: Belo Horizonte"; break;
            default: $l = "DDD NO ENCONTRADO"; break;
        }
        return $l;
    }