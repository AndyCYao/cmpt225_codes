/*
File: basic_int_queue.h
Header file for a very basic "circular array" imp. of a queue.
*/

class Basic_int_queue{
public:
	Basic_int_queue();
	void enqueue(int item);
	int dequeue();
	int front();
	bool empty();
	int size();
private:
	//This part is implementation depedent;
	int capacity;
	int *A; //this is the pointer to the array
	int front_index;	//index in A of the current front item (if queue is not empty)
	int rear_index;		// index in A where next item enqueued will go
	int current_size; //curr number of elements in the queue
};