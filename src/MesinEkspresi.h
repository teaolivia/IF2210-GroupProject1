/*
 * MesinEkspresi.h
 *
 *  Created on: Mar 15, 2015
 *      Author: Aurelia
 */

#ifndef MESINEKSPRESI_H_
#define MESINEKSPRESI_H_
#include <iostream>
#include <string>
using namespace std;

template<class T>
class MesinEkspresi{
public:
	MesinEkspresi();
	MesinEkspresi(T a,T b);
	MesinEkspresi(const MesinEkspresi&);
	~MesinEkspresi();

	void operator=(MesinEkspresi&);
	void operator+(MesinEkspresi&);
	void operator-(MesinEkspresi&);
	void operator*(MesinEkspresi&);
	void operator/(MesinEkspresi&);

	void operator <(MesinEkspresi&);
	void operator >(MesinEkspresi&);
	void operator >=(MesinEkspresi&);
	void operator <=(MesinEkspresi&);

	void operator and(MesinEkspresi&);
	void operator or (MesinEkspresi&);
	void operator not(MesinEkspresi&);

	int isEmpty() const;
	int Push();
	void Pop(int );

protected:
	T a;
	T b;
	MesinEkspresi *data;
}
#endif /* MESINEKSPRESI_H_ */
