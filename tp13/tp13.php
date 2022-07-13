<html>
    <head>
        
    </head>
    <body>
        <?php
        $numero = $_REQUEST['numero'];

        echo "<table border='1'><br>";
        echo "<h2>Tabla del número $numero</h2>";

        for ($i=1; $i<=10; $i++) {
            $valor = $i*$numero;
            echo "<tr>";
            echo "<td> $i x $numero </td>";
            echo "<td> $valor </td>";
            echo "</tr>"; 
        }
        echo "</table>";
        ?>
    </body>
</html>