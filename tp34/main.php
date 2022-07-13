<?php
    include_once('funciones.php');
    $p = $_REQUEST['palabra'];
    $n = $_REQUEST['numero'];

    $res = CambiarPalabra($p, $n);

    echo ('La palabra cambiada seria: ' . $res);
?>