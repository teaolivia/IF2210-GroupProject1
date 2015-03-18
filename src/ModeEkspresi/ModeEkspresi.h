/*
 * ModeEkspresi.h
 *
 *  Created on: Mar 15, 2015
 *      Author: Aurelia
 */

#ifndef MODEEKSPRESI_H_
#define MODEEKSPRESI_H_
#include <iostream>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include "Stack.h"

class ModeEkspresi : public Stack<ValueType>{
public:
	ModeEkspresi();
	virtual ~ModeEkspresi();
	virtual void pre_to_in(Stack<char> eq);
	virtual static string PostFixToInfix(string postfix);
};

#endif /* MODEEKSPRESI_H_ */
