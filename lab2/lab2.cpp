#include <iostream>
#include "basic_int_stack.h"

using namespace std;

int main(){
	cout << "Andy Yao\nacyao\n301064847\n";
	//Input a sequence of numbers.
	Basic_int_stack stk;
	
	int input, sum, length, temp;
	sum = 0;
	cin >> input;
	while (input > 0){
		stk.push(input);
		sum += input;
		cin >> input;		
	}

	cout << "\n" << stk.size() << endl;
	cout << sum << "\n";
	
	while (! stk.empty()){
		temp = stk.pop();
		cout << "\n" << temp;

	}

	cout << "\ngoodbye\n";

	return 0;
}