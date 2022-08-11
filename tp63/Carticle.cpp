#include <string>
#include "Carticle.h"

using namespace std;

// Constructores
Carticle::Carticle(string _description, int _code, int _stock, int _unitPrice) {
	description = _description;
	code = _code;
	stock = _stock;
	unitPrice = _unitPrice;
}
Carticle::Carticle(){};
Carticle::~Carticle() {};
// Metodos
