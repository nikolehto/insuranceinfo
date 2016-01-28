#ifndef PROPERTY_H
#define PROPERTY_H

#include <string>

class Property {
	public:
		Property(std::string type_par, std::string location_par);
		Property();

		// Gettersetterandprint		
		void setType(std::string type_par);
		void setLocation(std::string location_par);
		std::string getType() const;
		std::string getLocation() const;
		void printProperty(std::ostream& os) const;

	private:
		std::string type, location;
};

#endif

