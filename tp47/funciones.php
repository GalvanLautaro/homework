<?php
    function Desordenar($palabra) {
        $res = str_shuffle($palabra);

        return $res;
    }
?>