#include "Cpersonas.h"
#include <string>

// Constructores
Cpersonas::Cpersonas(string _name, string _surname, string _nationality, string _cityResidence, int _age, int _height) {
	name = _name;
	surname = _surname;
	nationality = _nationality;
	cityResidence = _cityResidence;
	age = _age;
	height = _height;
}
Cpersonas::Cpersonas() {};
Cpersonas::~Cpersonas() {};

// Get
string Cpersonas::getName() {return name;}
string Cpersonas::getSurname() {return surname;}
string Cpersonas::getNationality() {return nationality;}
string Cpersonas::getCityResidence() {return cityResidence;}
int Cpersonas::getAge() {return age;}
int Cpersonas::getHeight() {return height;}

// Metodos
bool Cpersonas::cityResidenceMDQ() {return (cityResidence == "Mar del Plata" || cityResidence == "mar del plata" ? true : false);}
bool Cpersonas::higherOf18() {return (age >= 18 ? true : false);}
bool Cpersonas::finishWithA() {return(name.back() == 'A' || name.back() == 'a' ? true : false);}


