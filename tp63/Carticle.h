#include <string>

using namespace std;

class Carticle {
	private: 
			string description;
			int code, stock, unitPrice;
	public: 
			// Constructores
			Carticle(string, int, int, int);
			Carticle();
			~Carticle();
			// Gets
			string getDescription {return description;}
			int getCode() {return code;}
			int getStock() {return stock;}
			int getUnitPrice() {return unitPrice;}
			// Metodos
};
