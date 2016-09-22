/*Implementation File of basic_int_stack
*/

#include "basic_int_stack.h"
//using namespace std;

Basic_int_stack::Basic_int_stack(){
	top_index = -1;
};

void Basic_int_stack::push(int item){
	//A.push_back(item);
	top_index += 1;
	A[top_index] = item;
}

int Basic_int_stack::top(){
	return A[top_index];
}

int Basic_int_stack::pop(){
	int value = this->top();
	top_index -= 1;
	return value;
}

bool Basic_int_stack::empty(){
	return top_index == -1;
}