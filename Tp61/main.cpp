#include <iostream>
#include "Cpacientes.h"

using namespace std;

void show_data (Cpacientes *pacientes) {
	for(int i = 0; i < 5; i++) {
		if(pacientes[i].getSocial_work() == true) {
			cout << "Paciente " << i;
			cout << "\nNombre: " << pacientes[i].getName();
			cout << "\nTel�fono: " << pacientes[i].getPhone();
			cout << "\n\n";	
		}
		 
	}
}

void show_allergies (Cpacientes *pacientes) {
	for(int i = 0; i < 5; i++) {
		if(pacientes[i].getAllergies() == false) {
			cout << "\nPaciente " << i << ": no es al�rgico";
			cout << "\n\n";	
		}
		 
	}
}

int main() {
	setlocale(LC_ALL, "spanish");
	
	Cpacientes *pacientes = new Cpacientes[5];
	
	pacientes[0] = Cpacientes("Lautaro", "Constituci�n 7473", "26/6/2011" ,"2235200235", true, false); 
	pacientes[1] = Cpacientes("Maxi", "Constituci�n 7353", "23/5/2010" ,"2233205378", true, false); 
	pacientes[2] = Cpacientes("Mariel", "Constituci�n 6534", "6/2/2018" ,"223563535", false, false); 
	pacientes[3] = Cpacientes("Marcelo", "Constituci�n 5341", "1/7/2020" ,"2235458324", false, true); 
	pacientes[4] = Cpacientes("Sofia", "Constituci�n 1245", "23/3/2011" ,"2235465732", true, true); 
	
	show_data(pacientes);
	show_allergies(pacientes);
	
	cout << "\n\n";
	system("PAUSE");
	return 0;
}
