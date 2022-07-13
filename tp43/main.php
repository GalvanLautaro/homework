<?php
    include_once('funciones.php');
    $num = $_REQUEST['numero'];
    $res = Factorial($num);

    echo ('El factorial de tu número es: ' . $res);
?>