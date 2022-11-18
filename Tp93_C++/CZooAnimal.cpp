#include <string>
#include "CZooAnimal.h"

using namespace std;

//Constructores
CZooAnimal::CZooAnimal(string _IdAnimal, int _CageNumber, string _IdTypeAnimal, int _Weight, string _Name) {
	this->IdAnimal = _IdAnimal;
	this->CageNumber = _CageNumber;
	this->IdTypeAnimal = _IdTypeAnimal;
	this->Weight = _Weight;
	this->Name = _Name;
}
// Metodos
bool CZooAnimal::Weight330() {return(this->CageNumber == 22 && (this->Weight > 3 && this->Weight < 30) && Name == "reptil") ? true : false;}
bool CZooAnimal::Weight100() {return(this->CageNumber == 8 && this->Weight == 100) ? true : false;}
bool CZooAnimal::tropicalAnimal() {return(this->IdAnimal == "pez" && this->Cagenumber == 13 && this->IdTypeAnimal == "tropical") ? true : false;}
