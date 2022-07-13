<?php
    include_once('funciones.php');

    $l = $_REQUEST['letra'];
    $vocal = EsVocal($l);

    if($vocal == true) {
        echo ('La letra es vocal.');
    } else {
        echo ('La letra no es vocal.');
    }
    
?>