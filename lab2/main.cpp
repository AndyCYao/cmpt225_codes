#include <iostream>
#include "basic_int_stack.h"

using namespace std;

int main(){
	cout << "Basic Stack exercise\nAndy Yao\n300164847\n";
	//Input a sequence of numbers.
	Basic_int_stack stk;
	int input, sum, length, temp;
	cin >> input;
	while (input > 0){
		stk.push(input);
		cin >> input;
		
	}

	cout << "\n" << "Is empty? " << stk.empty() << endl;
	cout << "top is currently:" << stk.top() << endl;
	cout << "size is :" << stk.size();
	sum = 0;
	while (! stk.empty()){
		temp = stk.pop();
		sum += temp;
		cout << "\npopping: " <<temp;
	}

	cout << "Sum is:" << sum << "\n" << "GoodBye";

	return 0;
}