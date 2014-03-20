/*
 * CountWord.cpp
 *
 *  Created on: 20 mars 2014
 *      Author: ubuntu
 */

#include <cstring>

#include "CountWord.hpp"

using namespace std;

/*CountWord::CountWord() {

}*/

CountWord::CountWord(const string& iText) {
	this->_text = iText;
}

unsigned int CountWord::count() {
    unsigned int aCount = 0;
    char *aWord = 0;
    char aDelimiters[] = " :.!\"#$%&'()*+,-/;<=>?@[]\\^_`{|}~\n\t\r";
    // Cf. http://www.cplusplus.com/reference/cctype/
    // for the list of characters

    char aText[_text.length() + 1];
    strcpy(aText, _text.c_str());

    aWord = strtok(aText, aDelimiters);
    while (aWord) {
        aCount++;
        aWord = strtok(0, aDelimiters);
    }
    return aCount;
}

