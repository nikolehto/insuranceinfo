#ifndef INSINFOCONTAINER_H
#define INSINFOCONTAINER_H

#include <iostream>
#include <vector>


class InsInfoContainer
{

		
	public:
		void addIIContainer(const InsuranceInfo &ii);
		
		// This method to print all
		void printIIContainer(std::ostream &os) const;
		
		// This method to print greater or less than
		void printIIContainer(std::ostream &os, double limit, bool direction) const;
		
	private:
		typedef std::vector<InsuranceInfo> Repository;
		Repository container;
		InsuranceInfo ii;
};

#endif

