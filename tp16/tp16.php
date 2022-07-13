<html>
    <head>

    </head>
    <body>
        <?php
            $n = $_REQUEST['numero'];

            echo "<h1>Medidas pasadas de pie. <br></h1>";
            echo "<br><br><h3> La medida en pies introducida es: $n </h3><br><br>";

            $pulgadas = $n * 12;
            echo "$n pies a pulgadas es: $pulgadas. <br>";
            $yardas = $n * 0.33;
            echo "$n pies a yardas es: $yardas. <br>";
            $centimetros = $n * 30.48;
            echo "$n pies a centimetros es: $centimetros. <br>";
            $metros = $n * 0.30;
            echo "$n pies a metros es: $metros. <br>";
        ?>
    </body>
</html>