#include <iostream>
#include <string.h>
#include "Cpersonas.h"

using namespace std;

void ResidenceMDQ (Cpersonas* personas) {
	cout << "_____RESIDENTES DE MAR DEL PLATA_____\n";
	for(int i = 0; i < 3; i++) {
		if(personas[i].cityResidenceMDQ()) {
			cout << personas[i].getName() << "\n";
		}
	}
}

void HigherOf18 (Cpersonas* personas) {
	cout << "_____MAYORES DE EDAD_____\n";
	for(int i = 0; i < 3; i++) {
		if(personas[i].higherOf18()) {
			cout << personas[i].getName() << "\n";
		}
	}
}

void FinishWithA(Cpersonas* personas) {
	cout << "_____TERMINAN CON A_____\n";
	for(int i = 0; i < 3; i++) {
		if(personas[i].finishWithA()) {
			cout << personas[i].getName() << "\n";
		}
	}
}

void PeopleList (Cpersonas* personas) {
	cout << "_____LISTA DE PERSONAS_____\n"; 
	for(int i = 0; i < 3; i++) {
		cout << personas[i].getName() << "\n";
	}
}

int main (){
	setlocale(LC_ALL, "spanish");
	
	Cpersonas* personas = new Cpersonas[3];
	
	personas[0] = Cpersonas("Lautaro", "Galván", "Argentina", "Mar del Plata", 16, 175);
	personas[1] = Cpersonas("Maximo", "Di Gialleonardo", "Argentina", "mar del plata", 18, 184);
	personas[2] = Cpersonas("Sofia", "Di Gialleonardo", "Irlandes", "La Plata", 21, 157);
	
	ResidenceMDQ(personas); cout << "\n";
	HigherOf18(personas); cout << "\n";
	FinishWithA(personas); cout << "\n";
	PeopleList(personas);
	
	delete []personas;
	cout << "\n\n";
    system("pause");
    return 0;
}
