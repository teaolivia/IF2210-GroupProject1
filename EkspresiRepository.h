/*
 * EkspresiRepository.h
 *
 *  Created on: Mar 15, 2015
 *      Author: Aurelia
 */

#ifndef EKSPRESIREPOSITORY_H_
#define EKSPRESIREPOSITORY_H_

template <typename P>
class EkspresiRepository: public class Queue<P> {
public:
	EkspresiRepository();
	virtual ~EkspresiRepository();
};

#endif /* EKSPRESIREPOSITORY_H_ */
