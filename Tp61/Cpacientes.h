#ifndef CPACIENTES_H
#define CPACIENTES_H
#include <string>

using namespace std;

class Cpacientes {
	public:
		Cpacientes(string n, string d, string l, string p, bool s, bool a);
		Cpacientes(); 
		~Cpacientes();
		string getName();
		bool getSocial_work();
		string getPhone();
		bool getAllergies();
	
	private: 
		string name, direction, last_visit;
		string phone;
		bool social_work, allergies;
};

#endif
