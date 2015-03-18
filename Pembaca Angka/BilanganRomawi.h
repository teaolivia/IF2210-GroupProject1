/*
 * BilanganRomawi.h
 *
 *  Created on: Mar 16, 2015
 *      Author: Aurelia
 */

#ifndef BILANGANROMAWI_H_
#define BILANGANROMAWI_H_

#include <iostream>
#include <string>
using namespace std;


class BilanganRomawi{
public:
    BilanganRomawi();
    BilanganRomawi(string s);
    ~BilanganRomawi();

    void setRoman(string); //Set the Roman numeral from user entries.
    int romanToDecimal(); //Convert the Roman numeral(string) to Decimal value.
    void printDecimal(); //Display the decimal value.
    void printRoman(); //Display the Roman numeral value.
private:
    string romanNum;
    int decimalNum=0;
};
#endif /* BILANGANROMAWI_H_ */
