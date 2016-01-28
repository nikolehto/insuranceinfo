#include <iostream>
#include <string>

#include "property.h"


Property::Property(std::string type_par, std::string location_par)
{
	type = type_par;
	location = location_par;
}

Property::Property()
{
	type = "";
	location = "";
}


// Gettersetterendprint

void Property::setType(std::string type_par) 
{
	type = type_par;
}

void Property::setLocation(std::string location_par)
{
	location = location_par;
}

std::string Property::getType() const
{
	return type;
}

std::string Property::getLocation() const
{
	return location;
}

void Property::printProperty(std::ostream& os) const
{
	os << "************************************\n"
	<< "Type : " << type << "\n" 
	<< "Location : " << location << std::endl; 
}
