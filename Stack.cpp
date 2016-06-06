#include "stdafx.h"

Stack::Stack(int size) {
	maxSize = size;
	top = -1;
	content = new char[maxSize];
}

//
void Stack::push(char item) {
	if(top + 1 < maxSize)
		content[++top] = item;
	else
		throw "ERROR: Stack overflow.";
}

//Returns the top of the stack and removes the item
char Stack::pop() {
	if( top != -1 )
		return content[top--];
	else
		throw "ERROR: Stack underflow";
}

//Returns the top element of the stack without removing the element
char Stack::peek() {
	if (top != -1)
		return content[top];
	else
		throw "ERROR: Peeking from empty stack.";
}

//Returns 1 if the stack is empty, and 0 if it is not.
int Stack::isEmpty() {
	if (top == -1) {
		return 1;
	}
	else {
		return 0;
	}
}

int Stack::isFull() {
	if (top + 1 == maxSize) {
		return 1;
	}
	else {
		return 0;
	}
}

