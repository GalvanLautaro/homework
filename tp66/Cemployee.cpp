#include "Cemployee.h"
#include <string>

using namespace std;

// Constructores
Cemployee::Cemployee(string _fullName, string _category, string _lenguage, string _childrenInDaycare, string _presentism, int _antiquity, int _kmMobility, string _function) {
	fullName = _fullName;
	category = _category;
	lenguage = _lenguage;
	childrenInDaycare = _childrenInDaycare;
	presentism = _presentism;
	antiquity = _antiquity;
	kmMobility = _kmMobility;
	function = _function;
}
Cemployee::Cemployee() {};
Cemployee::~Cemployee() {};
// Métodos

