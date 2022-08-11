#include <iostream>
#include <string>
#include "Cemployee.h"

using namespace std;

int main () {
	setlocale(LC_ALL, "spanish");
	
	// Declaración de clase
	Cemployee* employee = new Cemployee[3];
	// Inicialización
	employee[0] = Cemployee("Alvarado Lucas", "Semi-Sr", "Ingles", 2, "si", 5, 250, "cordinador");
	employee[1] = Cemployee("Artigas Juan Luis", "Junior", "Ingles", 0, "si", 2, 100, "-");
	employee[2] = Cemployee("Casas Kevin", "Senior", "Ingles", 1, "si", 20, 350, "lider");
	
	
	delete []employee;
	cout << "\n\n";
	system("PAUSE");
	return 0;
}
