<?php
    include_once('funciones.php');

    $f = $_REQUEST['fecha'];
    $d = 30;

    echo (CalcularFecha($f, $d))
?>