<html>
    <head>

    </head>
    <body>
        <?php 
            for ($i = 1; $i <=500; $i++) {
                echo "<br>" . $i;
                if ($i % 4 == 0) {
                    echo " |Es múltiplo de 4|";
                }
                if ($i % 9 == 0) {
                    echo " |Es múltiplo de 9|";
                }
                if ($i % 5 == 0) {
                    echo "<br>" . "--------------------------------------";
                }
            } 
        ?>
    </body>
</html>