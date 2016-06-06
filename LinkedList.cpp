#include "stdafx.h"

LinkedList::LinkedList() {
	head = new Node();
	size = 0;
}

//Adds a node to the end of the list with the data field set to item.
void LinkedList::add(char item) {
	if (size == 0) {
		Node* temp = new Node(item, NULL);
		head->next = temp;
	}
	else {
		Node* iterator;
		iterator = head->next;
		while (iterator->next != NULL) {
			iterator = iterator->next;
		}
		Node* newNode = new Node(item, NULL);
		iterator->next = newNode;
	}
	size++;
}

//Adds node at index holding the data item.
void LinkedList::add(int index, char item) {
	if (index > size - 1) {
		throw "Error: Index out of bounds.";
	}
	if (index == 0) {
		Node* newNode = new Node(item, head->next);
		head->next = newNode;
	}
	else {
		Node* iterator = head->next;
		for (int i = 1; i < index; i++) {
			iterator = iterator->next;
		}
		Node* newNode = new Node(item, iterator->next);
		iterator->next = newNode;
	}
	size++;
}

//Clears the array by chopping off the pointer. Needs to be optimized to free up data.
void LinkedList::clear() {
	head->next = NULL;
	size = 0;
}

//Returns 1 if the list is empty and 0 if it is not.
int LinkedList::isEmpty() {
	if (size == 0)
		return 1;
	else
		return 0;
}

//Returns the size of the list
int LinkedList::getSize() {
	return size;
}

//Returns the data in node at index
char LinkedList::get(int index) {
	if (index > size - 1)
		throw "Error: Index out of bounds.";
	Node* iterator = head;
	for (int i = 0; i <= index; i++) {
		iterator = iterator->next;
	}
	return iterator->data;
}

//Removes the last element of the list. Returns NULL if there is only a head.
char LinkedList::remove(){
	char item;
	Node* iterator = new Node();

	if (size == 0)
		return NULL;
	else if (size == 1) {
		item = head->next->data;
		head->next = NULL;
	}
	else {
		Node* iterator = new Node();
		iterator = head;
		while (iterator->next->next != NULL) {
			iterator = iterator->next;
		}
		item = iterator->next->data;
		iterator->next = NULL;
	}
	size--;	
	return item;
}

//Removes the node at index and returns the data it held
char LinkedList::remove(int index){
	char item;
	
	if (index > size - 1) {
		throw "Error: Index out of bounds.";
	}

	if (index == 0) {
		if (head->next->next != NULL) {
			item = head->next->data;
			head->next = head->next->next;
		}
		else
			head->next = NULL;
	}
	else {
		Node* iterator = head->next;
		for (int i = 1; i < index; i++) {
			std::cout << " " << i;
			iterator = iterator->next;
		}
		item = iterator->next->data;
		iterator->next = iterator->next->next;
	}
	size--;
	return item;
}

//Sets data at node index to the value of item
void LinkedList::set(int index, char item){
	if (index > size - 1) {
		throw "Error: Index out of bounds.";
	}
	if (index == 0) {
		head->next->data = item;
	}
	else {
		Node* iterator = head->next;
		for (int i = 1; i <= index; i++) {
			iterator = iterator->next;
		}
		iterator->data = item;
	}
}

char* LinkedList::toArray() {
	if (size == 0)
		return NULL;
	
	char* list = new char[size];
	Node* iterator = head->next;
	int index = 0;
	list[index] = iterator->data;
	index++;
	while (iterator->next != NULL) {
		iterator = iterator->next;
		list[index] = iterator->data;
		index++;
	}
	return list;
}

//Print to console mostly for debugging purposes
void LinkedList::printToConsole() {
	Node* iterator = head->next;
	if (size != 0) {
		while (iterator->next != NULL) {
			std::cout << "item: " << iterator->data << " ";
			iterator = iterator->next;
		}
		if (iterator->data != NULL)
			std::cout << "item: " << iterator->data << " " << std::endl;
	}
}