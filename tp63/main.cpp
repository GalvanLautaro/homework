#include <iostream>
#include <string>
#include "Carticle.h"

using namespace std;

int main () {
	setlocale(LC_ALL, "spanish");
	
	// Inicialización
	int num, limit;
	//Ingreso cantidad de objetos
	cout << "Ingrese cantidad de articulos que desea: "; cin >> limit;
	Carticle* article = new Carticle[limit];
	// Menu 
	cout << "[1]Ingresar registro\n[2]Buscar un artículo(por código)\n[3]Mostrar inventario ordenado alfabéticamente\n";
	cout << "Ingrese la opción que desea: "; cin >> num;
	
	
	
	cout << "\n\n";
	system("PAUSE");
	return 0;
}
