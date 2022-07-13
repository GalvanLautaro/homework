#include <iostream>
#include <cstring>
#include "Cstudent.h"

using namespace std;

void EnterData(int limit, Cstudent* student) {
	string n, s;
	int d, m, y, sc;
	for(int i = 0; i < limit; i++) {
		fflush(stdin);
		cout << "ESTUDIANTE " << i+1 << "\nNombre: "; getline(cin, n, '\n');
		cout << "Apellido: "; getline(cin, s, '\n');
		cout << "Día: "; cin >> d;
		cout << "Mes: "; cin >> m;
		cout << "Año: "; cin >> y;
		cout << "Nota: "; cin >> sc;
		student[i] = Cstudent(n, s, d, m, y, sc);		
	}
}

void Approved (int limit, Cstudent* student) {
	for(int i = 0; i < limit; i++) {
		if(student[i].approved()) {
			cout << "\nEl estudiante " << i+1 << " esta aprobado.";
		}
	}
}

int main (){
	setlocale(LC_ALL, "spanish");
	
	// Inicialización
	int limit = 0;
	cout << "Ingrese cantidad de estudiantes: "; cin >> limit;
	Cstudent* student = new Cstudent[limit];
	// Métodos
	EnterData(limit, student);	
	Approved(limit, student);

	cout << "\n\n";
    system("pause");
    return 0;
}

