//============================================================================
// Name        : main.cpp
// Author      : aabou
// Version     :
// Copyright   : Your copyright notice
// Description : Tutorial - Application to manage friends expenses
//============================================================================

#include "Person.hpp"
#include "Group.hpp"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char **argv) {
    unsigned int aNb = 0, aNbGroup;

    vector<Group> aGroups;

    /*
     *  Register the input
     */

    cout << "How many group ?" << endl;
    cin >> aNbGroup;

    for(unsigned int j=0;j<aNbGroup;j++) {

    	string aNameG;
    	Group aGroup;

    	cout << "What is the name of group " << j+1 << " ?"  << endl;
    	cin >> aNameG;

    	cout << "How many people in group " << j+1 << " ?" << endl;
    	cin >> aNb;

    	aGroup.setName(aNameG);

    	for (unsigned int i=0; i < aNb; i++) {
			Person aPerson;
			string aName, aPhoneNumber;
			float aExpenses;

			cout << "What is the name of person " << i+1 << " of group " << j+1 << " ?" << endl;
			cin >> aName;
			aPerson.setName(aName);

			cout << "What is the phone number of person " << i+1 << " of group " << j+1 << " ?" << endl;
			cin >> aPhoneNumber;
			aPerson.setPhoneNumber(aPhoneNumber);

			cout << "What is the expenses of person " << i+1 << " of group " << j+1 << " ?" << endl;
			cin >> aExpenses;
			aPerson.setExpenses(aExpenses);

			aPerson.setGroup(&aGroup);
			aGroup.push_back(aPerson);
		}
    	aGroups.push_back(aGroup);
    }

	for (vector<Group>::iterator it = aGroups.begin() ; it != aGroups.end(); ++it) {

		cout << endl;
		cout << "Group " << it->getName() << endl;
		cout << "Total expenses:\t\t" << it->totalExpenses() << endl;
		cout << "Expenses per person:\t" << it->expensesPerPerson() << endl;
		cout << endl;

		cout << "Name\t\t" << "Phone Number\t" << "Expenses\t"
		<< "Payback\t\t" << "Group" << endl;
		cout << "--------------------------------------------------------------------------"
		<< endl;

		Group aGroup = *it;
		for (size_t i=0; i < aGroup.size(); ++i) {
			// operate the payback first
			aGroup[i].operatePayback(aGroup.expensesPerPerson());
			// display the values
			cout << aGroup[i].getName() << "\t\t" << aGroup[i].getPhoneNumber()
			<< "\t\t" << aGroup[i].getExpenses() << "\t\t"
			<< aGroup[i].getPayback() << "\t\t" << aGroup[i].getGroup()->getName() << endl;
		}
		cout << endl;
    }



    return 0;
}
