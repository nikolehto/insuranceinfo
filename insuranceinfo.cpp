#include <iostream>

#include "property.h"
#include "insuranceinfo.h"


InsuranceInfo::InsuranceInfo(const Property& property_par, double valueInsured_par)
{
	property_o = property_par;
	valueInsured = valueInsured_par;
}
		
InsuranceInfo::InsuranceInfo()
{
	valueInsured = 0;
}

void InsuranceInfo::printInsuranceInfo(std::ostream& os) const
{
	property_o.printProperty(os);
	os << "Value Insured : " << valueInsured << "\n" <<std::endl;
}
		
double InsuranceInfo::getValueInsured() const
{
	return valueInsured;
}

void InsuranceInfo::setValueInsured(double valueInsured_par)
{
	valueInsured = valueInsured_par;
}
		
void InsuranceInfo::setProperty_O(const Property& property_par)
{
	property_o = property_par;
}

