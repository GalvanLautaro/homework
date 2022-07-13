#ifndef Cpersonas_h
#define Cpersonas_H
#include <string>

using namespace std;

class Cpersonas {
	private: 
		string name, surname, nationality, cityResidence;
		int age, height;
	
	public: 
		// Constructores
		Cpersonas(string, string, string, string, int, int);
		Cpersonas();
		~Cpersonas();
		
		// Get
		string getName();
		string getSurname();
		string getNationality();
		string getCityResidence();
		int getAge();
		int getHeight();
		
		// Metodos
		bool cityResidenceMDQ();
		bool higherOf18();
		bool finishWithA();
};
#endif
