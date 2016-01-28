#include <iostream>
#include <vector>
#include <string>

#include "property.h"
#include "insuranceinfo.h"
#include "insinfocontainer.h"

// for validate input
using namespace std;	// only in this file


template <class num>	// this will be used in takenum function

num takenum(string message, num minvalue) {
	num a = 0;
	
	while (1)
	{
		cout << message;
		cin >> a;
		
		if (a>=minvalue && cin.good())
		{
			break;
		}
		else
		{
			cout << "Must be a number greater or equal than " << minvalue << "\n" << endl;
			cin.clear();
			cin.ignore(100, '\n');
		}
	}
	cin.ignore(100, '\n');	// If there is getline after this function
	return a;
}



void printMenu() {
	
	cout << "MENU\n\n"
		 << "1. Add insurance info objects\n"
		 << "2. Print all objects\n"
		 << "3. Print objects whose value insured is greater than input\n"
		 << "4. Print objects whose value insured is less than input\n"
		 << "9. Quit\n" << endl;
	
}

int main() {
	InsInfoContainer container;
	string typeOfProperty, locationOfProperty;
	double valueInsured = 0.0, limit = 0.0;
	bool greater = 1, less = 0;	// parameters for calling method printIIContainer
	int menu = 0, i = 0, howmany = 0, numberofproperties = 0;
	
	
	Property pro;
	InsuranceInfo ii(pro, 0.00);

// UI	
	while (1)
	{
		printMenu();
		menu = takenum("Please enter number : ", 0);
		cout << "\n" << endl;

		switch (menu) {
		
			case 1:	// Add object to container
				howmany = takenum("How many objects you want to add : ", 1);
				cout << "\n" << endl;
				
				for (int j = 0; j < howmany; j++) {
					cout << "PROPERTY " << numberofproperties+1 << "\n\n"
						 << "Type of property : ";
					getline(cin, typeOfProperty);
					pro.setType(typeOfProperty);
			
					cout << "Location of property : ";
					getline(cin, locationOfProperty);
					pro.setLocation(locationOfProperty);
					
					ii.setProperty_O(pro);
					
					valueInsured = takenum("Property's value insured : ", 0);
					ii.setValueInsured(valueInsured);
					cout << "\n" << endl;
					container.addIIContainer(ii);
					numberofproperties++;
				}
				break;
			
			case 2: // Print the container
				container.printIIContainer(cout);
				break;
			
		 	case 3: // Print objects whose value is Greater than limit
		 		cout << "********** GREATER THAN LIMIT ************\n" << endl;
		 		limit = takenum("Property's value limit : ", 0);
				container.printIIContainer(cout, limit, greater);
		 		break;
		 		
		 	case 4: // Print objects whose value is Less than limit
		 		cout << "********** LESS THAN LIMIT ***************\n" << endl;
		 		limit = takenum("Property's value limit : ", 0);
				container.printIIContainer(cout, limit, less);
	 			break;
	 			
	 		case 9: // Exit
 				return 0;
 			
 			default:
 				cout << "Not valid number !!" << endl;
		}
 	}

	return 1; // Somethin gone badly wrong
}
