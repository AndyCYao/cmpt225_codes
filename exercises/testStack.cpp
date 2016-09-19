/*
Test program for the basic int stack class
*/

#include <iostream>
#include "basic_int_stack.h"
using namespace std;

int main(int argc, char * const argv[]){
	cout << "\n\n basic_int_stack Class Test Procedure - START \n\n";

	//Make a stack, and verify that empty() says its empty.
	Basic_int_stack s1;
	cout << "s1.empty() = " << s1.empty() << "\n";

	//Put some things on it.
	cout << "s1.push( " << 1 << " )\n";
	s1.push(1);
	cout << "s1.push( " << 2 << " )\n";
	s1.push(2);

	cout << "s1.empty() = " << s1.empty() << "\n";
	cout << "s1.top() = " << s1.top() << "\n";

	//Empty it, and verify that empty() reports its empty.
	while (! s1.empty()){
		cout << "s1.pop() " << s1.pop() << "\n";

	}

	cout << "s1.empty() = " << s1.empty() << "\n";
	cout << "\n Basic_int_stack Class Test Procedure - DONE";
	return 0;
}