#include <iostream>
#include <vector>

#include "property.h"
#include "insuranceinfo.h"
#include "insinfocontainer.h"


void InsInfoContainer::addIIContainer(const InsuranceInfo &ii)
{
	container.push_back(ii);
}
		
// This method to print all
void InsInfoContainer::printIIContainer(std::ostream &os) const
{
	Repository::const_iterator iter;

	for (iter = container.begin(); iter != container.end(); iter++) {
		iter->printInsuranceInfo(os);
	}
}
		
// This method to print greater or less than
void InsInfoContainer::printIIContainer(std::ostream &os, double limit, bool direction)	const// direction 0 means less, 1 means greater than
{
	Repository::const_iterator iter;

	for (iter = container.begin(); iter != container.end(); iter++) {
		switch (direction) {
			case 1:	// Greater than
				if (iter->getValueInsured() > limit) {
					iter->printInsuranceInfo(os);
				}
				break;
			case 0: // Less than
				if (iter->getValueInsured() < limit) {
					iter->printInsuranceInfo(os);
				}
				break;
		}
	}
}
