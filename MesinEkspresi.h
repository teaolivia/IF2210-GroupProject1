/*
 * MesinEkspresi.h
 *
 *  Created on: Mar 15, 2015
 *      Author: Aurelia
 */

#ifndef MESINEKSPRESI_H_
#define MESINEKSPRESI_H_

template <class T>
class MesinEkspresi {
public:
	MesinEkspresi();
	MesinEkspresi(T operand1, T operand2);
	virtual ~MesinEkspresi();

	//operator aritmatika
	void operator+(const MesinEkspresi&);
	void operator-(const MesinEkspresi&);
	void operator*(const MesinEkspresi&);
	void operator/(const MesinEkspresi&);

	//operator logika
	void operator=(const MesinEkspresi&);
	void operator<(const MesinEkspresi&);
	void operator>(const MesinEkspresi&);
	void operator>=(const MesinEkspresi&);
	void operator<=(const MesinEkspresi&);

	//mode prefix infix
};

#endif /* MESINEKSPRESI_H_ */
