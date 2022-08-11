#include <string>

using namespace std;

class Cstudent {
	private: 
			string name, surname;
			int day, month, year, score;
	
	public: 
			// Constructores
			Cstudent();
			Cstudent(string, string, int, int, int, int);
			~Cstudent();
			// Gets
			string getName() {return name;}
			string getSurname() {return surname;}
			int getDay() {return day;}
			int getMonth() {return month;}
			int getYear() {return year;}
			int getScore() {return score;}
			bool approved();
};
