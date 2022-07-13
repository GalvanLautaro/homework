<html>
    <head>

    </head>
    <body>
        <?php
            $num = rand(1, 100);

            echo "El número aleatorio generado es: $num <br>";

            if ($num < 50) {
                echo "¡Es menor a 50!";
            } else if ($num == 50) {
                echo "¡Es igual a 50!";
            } else {
                echo "¡Es mayor a 50!";
            }
        ?>
    </body>
</hmtl>