/*
 * ModePrefix.h
 *
 *  Created on: Mar 16, 2015
 *      Author: Aurelia
 */

#ifndef MODEPREFIX_H_
#define MODEPREFIX_H_

#include "ModeEkspresi.h"

class ModePrefix: public ModeEkspresi {
public:
	ModePrefix();
	virtual ~ModePrefix();
	void pre_to_in(Stack<char> eq);
};

#endif /* MODEPREFIX_H_ */
