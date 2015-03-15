/*
 * Stack.h
 *
 *  Created on: Mar 15, 2015
 *      Author: Aurelia
 */

#ifndef STACK_H_
#define STACK_H_
//#include "vector .h"
#include <iostream>
using namespace std;

template <typename ValueType>
class Stack {
public:
	Stack();
	virtual ~Stack();
	int size() const;
	bool isEmpty() const;
	void clear();
	void push(ValueType value);
	ValueType pop();
	ValueType peek() const;
	ValueType & top();

	string toString();
private:
	Vector<ValueType> elements;
};


template <typename ValueType>
Stack<ValueType>::Stack(){

}

template <typename ValueType>
Stack<ValueType>::~Stack(){

}

template <typename ValueType>
int Stack<ValueType>::size() const{
	return elements.size();
}

template <typename ValueType>
bool Stack<ValueType>::isEmpty()const{
	return size() == 0;
}

template <typename ValueType>
void Stack<ValueType>::push(ValueType){
	elements.add(value);
}

template <typename ValueType>
ValueType Stack<ValueType>::pop(){
	if(isEmpty()){
		cout<<"Stack kosong"<<endl;
	}
	ValueType top = elements[elements.size()-1];
	elements.remove(elements.size()-1);
	return top;
}

template <typename ValueType>
ValueType Stack<ValueType>::peek() const{
	if(isEmpty()){
		cout<<"Stack kosong"<<endl;
	}
	return elements.get(elements.size()-1);
}

template <typename ValueType>
ValueType & Stack<ValueType>::top(){
	if(isEmpty()){
		cout<<"Stack kosong"<<endl;
	}
	return elements[elements.size()-1];
}

template <typename ValueType>
void Stack<ValueType>::clear(){
	elements.clear();
}

template <typename ValueType>
string Stack<ValueType>::toString(){
	ostringstream os;
	os << *this;
	return os.str();
}

template <typename ValueType>
ostream & operator<<(ostream& os, const Stack<ValueType>& stack){
	os<<"{";
	Stack<ValueType> copy = stack;
	Stack<ValueType> reversed;
	while (!copy.isEmpty()){
		reversed.push(copy.pop());
	}
	int len = stack.size();
	for (int i = 0; i < len; i++){
		if(i >0) os << ",";
		writeGenericValue(os, reversed.pop(), true);
	}
	return os << "}";
}

template <typename ValueType>
istream & operator>>(istream& is, Stack<ValueType>& stack){
	char ch;
	is >> ch;
	if (ch != '{'){
		cout<<"operator >> : Missing";
	}
	stack.clear();
	is >> ch;
	if (ch != '}'){
		is.unget();
		while (true){
			ValueType value;
			readGenericValue(is, value);
			stack.push(value);
			is >> ch;
			if (ch == '}') break;
			if (ch != ','){
				cout<<"operator >>: unexpected character";
			}
		}
	}
	return is;
}
#endif /* STACK_H_ */
