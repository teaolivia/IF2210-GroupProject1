/*
 * BilanganRomawi.h
 *
 *  Created on: Mar 15, 2015
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
    int decimalNum = 0;

};

BilanganRomawi::BilanganRomawi()
{
    romanNum = 1;
}

BilanganRomawi::~BilanganRomawi()
{
}

void BilanganRomawi::setRoman(string troll)
{
    romanNum = troll;
}

int BilanganRomawi::romanToDecimal()
{
    for (int i = 0; i < romanNum.length(); i++)
    {
        if (romanNum[i] == 'I')
            decimalNum++;
        if (romanNum[i] == 'V')
        {
            if (i > 0 && romanNum[i - 1] == 'I')
                decimalNum -= 2;
            decimalNum += 5;
        }
        if (romanNum[i] == 'X')
        {
            if (i > 0 && romanNum[i - 1] == 'I')
                decimalNum -= 2;
            decimalNum += 10;
        }
        if (romanNum[i] == 'L')
        {
            if (i > 0 && romanNum[i - 1] == 'X')
                decimalNum -= 20;
            decimalNum += 50;
        }
    }
    cout << decimalNum << endl;
    return decimalNum;
}

#endif /* BILANGANROMAWI_H_ */
