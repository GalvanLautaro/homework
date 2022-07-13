<?php
    $n = $_POST['n'];
    include_once("funciones.php");

    $lo = Localidad($n);
    echo ("$lo");
?>