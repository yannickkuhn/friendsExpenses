/*
 * Group.cpp
 *
 *  Created on: Feb 18, 2014
 *      Author: aabou
 */

#include "Group.hpp"
#include "Person.hpp"

Group::Group() :
	_expensePerPerson(0),
	_totalExpenses(0) {

}

Group::~Group() {

}

float Group::totalExpenses() {
	_totalExpenses = 0;
    for (size_t i=0; i < this->size(); i++) {
    	_totalExpenses += this->at(i).getExpenses();
    }
    return _totalExpenses;
}

float Group::expensesPerPerson() {
    float aExpense = this->totalExpenses() / this->size();
    return aExpense;
}

// Getters of Person

const float Group::getExpensePerPerson() {
	return _expensePerPerson;
}
const float Group::getTotalExpenses() {
	return _totalExpenses;
}
const string Group::getName() {
	return _name;
}

// Setters of Person

void Group::setExpensePerPerson(const float expensePerPerson) {
	_expensePerPerson = expensePerPerson;
}

void Group::setTotalExpenses(const float totalExpenses) {
	_totalExpenses = totalExpenses;
}

void Group::setName(const string name) {
	_name = name;
}
