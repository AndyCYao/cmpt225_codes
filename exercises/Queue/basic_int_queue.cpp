#include "basic_int_queue.h"

Basic_int_queue::Basic_int_queue(){
	front_index = 0;
	rear_index = 0;
	current_size = 0;
	capacity = 100;
	A = new int[capacity];
};

void Basic_int_queue::enqueue(int item){
	A[rear_index] = item;
	int new_rear = (rear_index + 1) % capacity;
	rear_index = new_rear;
	current_size += 1;
};

int Basic_int_queue::dequeue(){
	int item = A[front_index];
	int new_front = (front_index + 1) % capacity;
	front_index = new_front;
	current_size -= 1;
	return item;
};

int Basic_int_queue::front(){
	return A[front_index];
};

bool Basic_int_queue::empty(){
	return current_size == 0;
};

int Basic_int_queue::size(){
	return current_size;
};