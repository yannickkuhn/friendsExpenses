/*
 * Person.cpp
 *
 *  Created on: Feb 18, 2014
 *      Author: aabou
 */

#include "Person.hpp"
#include "Group.hpp"

Person::Person() :
    _expenses(0),
    _payback(0) {

}

Person::~Person() {

}

void Person::operatePayback(const float iExpensesPerPerson) {
    _payback = _expenses - iExpensesPerPerson;
}

// getters of Person

const string& Person::getName() const {
	return _name;
}
const string& Person::getPhoneNumber() const {
	return _phoneNumber;
}
const float Person::getExpenses() {
	return _expenses;
}
const float Person::getPayback() {
	return _payback;
}
Group *Person::getGroup() {
	return _group;
}

// setters of Person

void Person::setName(const string& name) {
	_name = name;
}
void Person::setPhoneNumber(const string& phoneNumber) {
	_phoneNumber = phoneNumber;
}
void Person::setExpenses(const float expenses) {
	_expenses = expenses;
}
void Person::setPayback(const float payback) {
	_payback = payback;
}
void Person::setGroup(Group *group) {
	_group = group;
}
