#include <string>

using namespace std;

class Cemployee {
	private: 
			string fullName, category, lenguage, childrenInDaycare, presentism, function;
			int antiquity, kmMobility; 
	public: 
			// Constructores
			Cemployee();
			~Cemployee();
			Cemployee(string, string, string, string, string, int, int, string);
			// Gets
			string getFullName();
			string getCategory();
			string getLenguage();
			string getChildrenInDaycare();
			string getPresentism();
			int getAntiquity();
			int getKmMobility();
			// Métodos
			
};


