#pragma once
class LinkedList {
	Node* head;
	Node* tail;
	int size;
public:
	LinkedList();
	void add(char);
	void add(int, char);
	void clear();
	int isEmpty();
	int getSize();
	char get(int);
	char remove();
	char remove(int);
	void set(int, char);
	char* toArray();
	void printToConsole();
};