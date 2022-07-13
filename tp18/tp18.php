<html>
    <head>

    </head>
    <body>
        <?php
            $g = $_REQUEST['grados'];
            $resultado = ($g*9/5)+32;
            
            echo "La temperatura ingresada es $g, pasada a fahrenheit seria: $resultado"
        ?>
    </body>
</html>