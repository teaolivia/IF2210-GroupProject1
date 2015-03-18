/*
 * BilanganRomawi.cpp
 *
 *  Created on: Mar 16, 2015
 *      Author: Aurelia
 */

#include "BilanganRomawi.h"
#include <iostream>
using namespace std;

BilanganRomawi::BilanganRomawi()
{
    romanNum = 1;
}

BilanganRomawi::BilanganRomawi(string s)
{
	romanNum=s ;
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
