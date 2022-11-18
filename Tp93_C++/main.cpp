#include <iostream>
#include <cstring>
#include "CZooAnimal.h"
#define forr(i, n) for(int i = 0; i < int(n); i++)

using namespace std;

void EnterData (int limit, CZooAnimal* Animal) {
	int c, w; 
	string n, id1, id2;
	forr(i, limit) {
		fflush(stdin);
		cout << "Animal " << i+1 << "\nId animal: "; cin >> id1;
		cout << "Cage number: "; cin >> c;
		cout << "Id type animal: "; cin >> id2;
		cout << "Weight: "; cin >> w;
		cout << "Name: "; cin >> n;
		Animal[i] = CZooAnimal(id1, c, id2, w , n);
	}
}

void ShowInfo(int limit, CZooAnimal* Animal) {
	int cont = 0;
	forr(i, limit) {
		if(Animal[i].Weight330()) cont++;
	}
	
	cout << "Hay " << cont <<  " animales de la jaula 5 que pesan menos de 3kg";
	forr(i, limit) {
		if(Animal[i].tropicalAnimal()) cout << "Los peces que son tropicales son: " << Animal[i].getName() << " ";
	}
	forr(i, limit) {
		if(Animal[i].Weight100()) cout << "\nAnimales de la jaula igual a 100: \n" << i+1 << ". " << Animal[i].getName() << " " << Animal[i].getWeight() << " " << Animal[i].getIdAnimal();
	}
}

int main (){
	setlocale(LC_ALL, "spanish");
	
	// Inicializacion
	int limit = 0;
	cout << "Ingrese la cantidad de animales: "; cin >> limit;
	CZooAnimal* Animal = new CZooAnimal[limit];
	// Ingreso de datos
	EnterData(limit, Animal);
	system("cls");
	// Mostrar lo que me pide cada punto del ejercicio
	ShowInfo(limit, Animal);
	
	
	delete []Animal;
	cout << "\n\n";
    system("pause");
    return 0;
}

