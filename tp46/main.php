<?php
    include_once('funciones.php');

    $cad1 = $_POST['cadena1'];
    $cad2 = $_POST['cadena2'];
    $res = Hamming($cad1, $cad2);

    if (strlen($cad1) == strlen($cad2)) {
        
        echo ("Distancia de Hamming: $res");
    } else {
        echo ("Los números tienen diferentes tamaños."); 
    }
    ?>