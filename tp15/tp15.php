<html>
    <head>

    </head>
    <body>
        <?php
        $n = $_REQUEST['numero'];

        if ($n % 3 == 0) {
            echo "<h3> ¡Es multiplo! </h3>";
        } else {
            echo "<h3> ¡No es multiplo! </h3>";
        }
        ?>
    </body>
</hmtml>