#ifndef INSURANCEINFO_H
#define INSURANCEINFO_H

class InsuranceInfo
{
	public:
		InsuranceInfo(const Property& property_par, double valueInsured_par);
		InsuranceInfo();
		
		void printInsuranceInfo(std::ostream& os) const;
		double getValueInsured() const;
		void setValueInsured(double valueInsured_par);
		void setProperty_O(const Property& property_par);
	
	private:
		Property property_o;
		double valueInsured;
};

#include <string>

#endif

