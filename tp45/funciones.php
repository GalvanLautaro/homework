<?php
    function EsVocal($v) {
         $flag = false;
         
         switch($v) {
             case 'a': 
                $flag = true;
             break;
             case 'e': 
                $flag = true;
             break;
             case 'i': 
                $flag = true;
             break;
             case 'o': 
                $flag = true;
             break;
             case 'u': 
                $flag = true;
             break;
             default: 
                $flag = false;
         }

         return $flag;
    }
?>
