<?php
    include_once('funciones.php');

    $p = $_REQUEST['palabra'];
    $fun = Invertir($p);
    
    echo ('La palabra invertida es: ' . $fun);
?>