<?php
    $n = $_REQUEST['numero'];
    $suma = 0;
        if ($n[0] != "-") {
        for($i = 0; $i < strlen($n); $i++) {
            if ($i > 0) {
                echo (" + ");
            }    
            $suma += $n[$i];
            echo ($n[$i]);                                    
        }
        echo (" = ".$suma);
    }                         
?>
    
