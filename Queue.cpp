#include "stdafx.h"

//Queue implemented using a circular array style
Queue::Queue(int cap){
	capacity = cap;
	size = 0;
	front = 0;
	rear = 0;
	content = new char[capacity];
}

//Places an item at the rear of the Queue
void Queue::offer(char item) {
	//If able, add the item to the queue
	if (size != capacity) {
		content[rear] = item;
	}else{
		throw "Error: Queue overflow.";
	}
	//Increase the size
	size++;
	//If the rear is at the end, circle it around to the front, else increment
	if (rear == capacity - 1) {
		rear = 0;
	}
	else {
		rear++;
	}
}

//Returns the value at the front of the Queue without removing it, if the Queue is not empty
char Queue::peek() {
	if (size != 0)
		return content[front];
	else
		throw "Error: Queue underflow.";
}

//Returns the value at the front of the Queue and removes it
char Queue::poll() {
	//if the queue is not empty, remove the item and then rotate the front pointer
	if (size != 0) {
		size--;
		char value = content[front];
		if (front != capacity - 1) {
			front++;
		}
		else {
			front = 0;
		}
		return value;
	}
	else
		throw "Error: Queue underflow.";
}

//Returns 1 if the Queue is empty and 0 if it is not
int Queue::isEmpty() {
	if (size == 0)
		return 1;
	else
		return 0;
}

//Returns 1 if the Queue is full and 0 if it is not
int Queue::isFull() {
	if (size == capacity)
		return 1;
	else
		return 0;
}