/*
 * Person.hpp
 *
 *  Created on: Feb 18, 2014
 *      Author: aabou
 */

#ifndef PERSON_HPP_
#define PERSON_HPP_

#include <string>
using namespace std;

class Group;	// forward declaration (eviter les inclusions circulaires)

class Person {

public:
    Person();
    virtual ~Person();
    void operatePayback(const float iExpensesPerPerson);

// getters of Person
    const string& getName() const;
    const string& getPhoneNumber() const;
    const float getExpenses();
    const float getPayback();
    Group* getGroup();

// setters of Person
    void setName(const string& name);
    void setPhoneNumber(const string& phoneNumber);
    void setExpenses(const float expenses);
    void setPayback(const float payback);
    void setGroup(Group *group);

private:
    string _name;
    string _phoneNumber;
    float _expenses;
    float _payback;
    Group *_group;
};

#endif /* PERSON_HPP_ */
