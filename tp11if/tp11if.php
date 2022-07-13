<html>
    <head>

    </head>
    <body>
        <?php
            $n1 = $_REQUEST['num1'];
            $n2 = $_REQUEST['num2'];

            if ($n1 > $n2) {
                echo "Orden decreciente: " . $n1 . " | " . $n2; 
            } else {
                echo "Orden decreciente: " . $n2 . " | " . $n1;
            }
        ?>
    </body>
</html>