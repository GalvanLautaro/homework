<html>
    <head>
        
    </head>
    <body>
        <?php
            $n1 = $_REQUEST['num1'];
            $n2 = $_REQUEST['num2'];
            $n3 = $_REQUEST['num3'];
            
            if ($n1 > $n2 && $n1 > $n3) {
                echo "El número uno es el mayor";
            }
            if ($n2 > $n1 && $n2 > $n3) {
                echo "El número dos es el mayor";
            }
            if ($n3 > $n1 && $n3 > $n2) {
                echo "El número tres es el mayor";
            }
        ?>
    </body>
</html>