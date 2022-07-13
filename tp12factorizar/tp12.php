<html>
    <head>
        <title>Tp12</title>
    </head>
    <body>
        <?php
            $n = $_REQUEST['numero'];
            $factorial = 1;

                for ($i = 1; $i <= $n; $i++) {
                $factorial = $factorial * $i;
            }
            echo "El factorial de " . $n . " es: ";
            echo $factorial;
        ?>
    </body>
</html>