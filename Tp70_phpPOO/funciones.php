<?php
    $n = $_POST['name'];
    $hw = $_POST['hoursWorked'];
    $hr = $_POST['hourlyRate'];
    $ts = $_POST['totalSalary'];

    class Cperson {
        // Private
        private $name, $hoursWorked, $hourlyRate, $totalSalary;
        // Public
        public function ShowData ($name, $hoursWorked, $hourlyRate, $totalSalary) {
            echo ("Nombre: $name");
            echo ("<br>Horas trabajadas: $hoursWorked");
            echo ("<br>Sueldo por hora: $hourlyRate");
            echo ("<br>Sueldo total: $totalSalary");
        }
    }

    $person = new Cperson();
    $person->ShowData($n, $hw, $hr, $ts);
?>