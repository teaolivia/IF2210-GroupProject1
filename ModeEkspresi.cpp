#include "ModeEkspresi.h"
#include <stack>
#include <iostream>
#include <string>

ModeEkspresi::ModeEkspresi() {}

ModeEkspresi::ModeEkspresi(int _mode, stack<char> _stck) {
	mode = _mode;
	stck = _stck;
}

ModeEkspresi::~ModeEkspresi() {}

void ModeEkspresi::TranslateToInfix() {
	stack<char> temp = stck;

	if (mode==2) { // prefix to infix
		while (!temp.empty()) {
			string s,s1,s2;
			if (temp.top() == '/' || temp.top() == '*' || temp.top() == '+' || temp.top() == '-') {
				// put parentheses in both operands and merge top + operator + bottom
				s1 = expStack.top();
				expStack.pop();
				s2 = expStack.top();
				expStack.pop();
				s = "(" + s1;
				s.push_back(temp.top());
				s.append(s2 + ")");

				expStack.push(s);
				temp.pop();
			} else {
				s.push_back(temp.top());
				expStack.push(s);
				temp.pop();
			}
		}

	} else if (mode==3) { // postfix to infix
		
		/* dipindahkan ke method stack::reverse */
		stack<char> temp2;
		int tsize = temp.size();
		for (int i=0; i<tsize; i++) {
			temp2.push(temp.top());
			temp.pop();
		}

		// // debug
		// for (stack<char> tp = temp2; !tp.empty(); tp.pop()) {
		// 	cout << tp.top() << endl;
		// }

		/* dipindahkan ke method stack::reverse */

		while (!temp2.empty()) {
			string s,s1,s2;
			if (temp2.top() == '/' || temp2.top() == '*' || temp2.top() == '+' || temp2.top() == '-') {
				// put parentheses in both operands and merge top + operator + bottom
				s1 = expStack.top();
				expStack.pop();
				s2 = expStack.top();
				expStack.pop();
				s = "(" + s2;
				s.push_back(temp2.top());
				s.append(s1 + ")");

				expStack.push(s);
				temp2.pop();
				cout<<"op" << endl;
			} else {
				s.push_back(temp2.top());
				expStack.push(s);
				temp2.pop();
				cout<<"num" << endl;
			}

		} // while loop
	}
}

int ModeEkspresi::getMode() {
	return mode;
}

void ModeEkspresi::setMode(int _mode) {
	mode = _mode;
}

void ModeEkspresi::setStack(stack<char> _stck) {
	stck = _stck;
}

stack<string> ModeEkspresi::getInfixOutput() {
	return expStack;
}

void ModeEkspresi::printstack() {
	// debug
	for (stack<char> temp = stck; !temp.empty(); temp.pop()) {
		cout << temp.top();
	}
}

void ModeEkspresi::printExp() {
	// debug
	for (stack<string> temp = expStack; !temp.empty(); temp.pop()) {
		cout << temp.top() << endl;
	}
}