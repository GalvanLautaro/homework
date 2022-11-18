#ifndef CZOOANIMAL_H
#define CZOOANIMAL_H
#include <string>

using namespace std;

class CZooAnimal {
	private: 
		int CageNumber, Weight;
		string Name, IdTypeAnimal, IdAnimal;
		
	public: 
		// Constructores
		CZooAnimal() {}
		CZooAnimal(int, int, string, string, string){}
		~CZooAnimal() {}
		string getName() {return this->Name;}
		int getWeight() {return this->Weight;}
		string getIdAnimal() {return this->IdAnimal;}
		bool Weight330(){}
		bool tropicalAnimal(){}
		bool Weight100(){}
};

#endif
