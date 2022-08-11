#include "Cpacientes.h"

Cpacientes::Cpacientes(string n, string d, string l, string p, bool s, bool a) {
	name = n;
	direction = d;
	last_visit = l;
	phone = p;
	social_work = s;
	allergies = a;
}

Cpacientes::Cpacientes() {
	
}

Cpacientes::~Cpacientes() {
	
}

string Cpacientes::getName() {
	return name;
}

string Cpacientes::getPhone() {
	return phone;
}

bool Cpacientes::getSocial_work() {
	return social_work;
}

bool Cpacientes::getAllergies() {
	return allergies;
}
