#ifndef MODEEKSPRESI_H
#define MODEESKPRESI_H

#include <stack>
#include <string>
using namespace std;

class ModeEkspresi {
	public:
		ModeEkspresi();
		ModeEkspresi(int _mode, stack<char> _stck);
		~ModeEkspresi();
		void TranslateToInfix();
		int getMode(); // get mode number to be translated 2 for postfix, 3 for prefix
		void setMode(int _mode);
		void setStack(stack<char> _stck);

		stack<string> getInfixOutput();

		//debugging only
		void printstack();
		void printExp();

	private:
		int mode;
		stack<char> stck;
		stack<string> expStack;
};
#endif