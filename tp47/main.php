<?php
    include_once('funciones.php');

    $p = $_REQUEST['palabra'];
    $res = Desordenar($p);

    echo ('La palabra desordenada es: ' . $res);
?>