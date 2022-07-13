#include "Cstudent.h"
#include <cstring>

// Constructores 
Cstudent::Cstudent(string _name, string _surname, int _day, int _month, int _year, int _score) {
	name = _name;
	surname = _surname;
	day = _day;
	month = _month;
	year = _year;
	score = _score;
}
Cstudent::Cstudent() {};
Cstudent::~Cstudent() {};
// Métodos
bool Cstudent::approved() {return(score >= 7 && year == 2021) ? true : false;}

