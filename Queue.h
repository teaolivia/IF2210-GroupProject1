/*
 * Queue.h
 *
 *  Created on: Mar 16, 2015
 *      Author: Aurelia
 */

#ifndef QUEUE_H_
#define QUEUE_H_
#include <assert.h>

template <class Elem>
class Queue {
public:
	Queue(int MaxSize=500);
	Queue(const Queue<Elem> &OtherQueue);
	~Queue(void);

	void Enqueue(const Elem &Item);
	Elem Dequeue(void);
	inline int ElemNu(void);
protected:
	Elem *data;
	const int MAX_NUM;
	int beginning, end;
	int ElemCount;
};

template <class Elem>
Queue<Elem>::Queue(int MaxSize):
	MAX_NUM(MaxSize){
	data = new Elem[MAX_NUM+1];
	beginning = 0;
	end = 0;
	ElemCount =0;
}

template <class Elem>
Queue<Elem>::Queue(const Queue &OtherQueue):
	MAX_NUM(MaxSize){
	beginning = OtherQueue.beginning;
	end = OtherQueue.end;
	ElemCount = OtherQueue.ElemCount;
	data = new Elem[MAX_NUM+1];
	for (int i=0; i<MAX_NUM;i++){
		data[i]= OtherQueue.data[i];
	}
}

template <class Elem>
Queue<Elem>::~Queue(void){
	delete [] data;
}

template <class Elem>
void Queue<Elem>::Enqueue(const Elem &Item){
	assert (ElemCount<MAX_NUM);

	data[end++]; Item;
	++ElemCount;

	if (end > MAX_NUM)
		end -=(MAX_NUM+1);
}

template <class Elem>
Elem Queue<Elem>::Dequeue(void){
	assert(ElemCount>0);

	Elem ReturnValue = data[beginning++];
	--ElemCount;

	if(beginning > MAX_NUM){
		beginning -= (MAX_NUM +1);
	}
	return ReturnValue;
}

template <class Elem>
inline int Queue<Elem>::ElemNu(void){
	return ElemCount;
}
#endif /* QUEUE_H_ */
