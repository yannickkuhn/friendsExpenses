/*
 * CountWord.hpp
 *
 *  Created on: 20 mars 2014
 *      Author: ubuntu
 */

#ifndef COUNTWORD_HPP_
#define COUNTWORD_HPP_

#include <string>

using namespace std;

class CountWord {
public:
	CountWord();
	CountWord(const string& iText);
    virtual ~CountWord();
    unsigned int count();
private:
    string _text;
};

#endif /* COUNTWORD_HPP_ */
