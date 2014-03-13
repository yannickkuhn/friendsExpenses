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
    unsigned int aNb = 0;
    string aNameG;

    /*
     *  Register the input
     */
    cout << "what is the name of your group ?" << endl;
    cin >> aNameG;
    cout << "How many people are you?" << endl;
    cin >> aNb;




    /*aGroup.setName(aNameG);

    for (unsigned int i=0; i < aNb; i++) {
        Person aPerson;
        string aName, aPhoneNumber;
        float aExpenses;

        cout << "What is the name of person " << i+1 << " ?" << endl;
        cin >> aName;
        aPerson.setName(aName);

        cout << "What is the phone number of person " << i+1 << " ?" << endl;
        cin >> aPhoneNumber;
        aPerson.setPhoneNumber(aPhoneNumber);

        cout << "What is the expenses of person " << i+1 << " ?" << endl;
        cin >> aExpenses;
        aPerson.setExpenses(aExpenses);

        aGroup.push_back(aPerson);
    }*/

    /*
     *  Prepare the output
     */
    /*cout << endl;
    cout << "Total expenses:\t\t" << aGroup.totalExpenses() << endl;
    float aExpensesPerPerson = aGroup.expensesPerPerson();
    cout << "Expenses per person:\t" << aExpensesPerPerson << endl;
    cout << endl;

    cout << "Name\t\t" << "Phone Number\t" << "Expenses\t"
        << "Payback\t\t" << "GroupName" << endl;
    cout << "-----------------------------------------------------------------------"
        << endl;

    for (size_t i=0; i < aGroup.size(); ++i) {
        // operate the payback first
        aGroup[i].operatePayback(aExpensesPerPerson);
        // display the values
        cout << aGroup[i].getName() << "\t\t" << aGroup[i].getPhoneNumber()
            << "\t\t" << aGroup[i].getExpenses() << "\t\t"
            << aGroup[i].getPayback() << "\t\t" << aGroup.getName() << endl;
    }
    cout << endl;*/

    return 0;
}
