<?php
function Hamming($n1, $n2) {
    $cont = 0;
    for ($i = 0; $i < strlen($n1); $i++) {
        if ($n1[$i] != $n2[$i]) {
            $cont++;
        }
    }
    return $cont;
}
