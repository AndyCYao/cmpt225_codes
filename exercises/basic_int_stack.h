/*File: basic_int_stack.h
	header file for a very basic array-based imp. of a stack.
*/

class Basic_int_stack{
public:
	//This part should be implementation independent.
	Basic_int_stack();
	void push(int item);
	int pop();
	int top();
	bool empty();
private:
	//This part is implementation dependent.
	static const int capacity = 10;
	int A[capacity];
	int top_index; // this will index the top of the stack in the array.	
};