/*
Implementation of functions for basic siple array-based implementation of a stack
*/

#include "basic_int_stack.h"
#include <array>

Basic_int_stack::Basic_int_stack(){
	//default constructor initializes the private variable.
	top_index = -1; // -1 means stack is empty
}

void Basic_int_stack::push(int item){
	top_index += 1;
	A[top_index] = item;
}

int Basic_int_stack::top(){
	return A[top_index];
}

int Basic_int_stack::pop(){
	if(top_index != -1){
		top_index = top_index - 1;
		return A[top_index + 1];
	};
}

bool Basic_int_stack::empty(){
	return top_index == -1;
}

int Basic_int_stack::size(){
	if (not this-> empty()){
	return size(A);
	};
}