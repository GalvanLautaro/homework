class CEmpleado {
    constructor (Name, YearOfJoining, Salary, Direction) {
        this.Name = Name;
        this.YearOfJoining = YearOfJoining;
        this.Salary = Salary;
        this.Direction = Direction;
    }

    get GetName () {return this.Name;}
    get GetYearOfJoining () {return this.YearOfJoining;}
    get GetDirection () {return this.Direction;}
}

let Empleados = [2];
Empleados[0] = new CEmpleado('Robert', 1994, 70000, '64C- WallsStreat');
Empleados[1] = new CEmpleado('Sam', 2000, 85000, '68D- WallsStreat');
Empleados[2] = new CEmpleado('John', 1999, 70000, '26B- WallsStreat');

document.write('<strong>Name | Year of Joining | Address</strong><br><br>');
for (let i = 0; i < 3; i++) {
    document.write(Empleados[i].GetName + " | ");
    document.write(Empleados[i].GetYearOfJoining + ' | ');
    document.write(Empleados[i].GetDirection + ' | ')
    document.write('<br>');
}