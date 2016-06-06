#include "stdafx.h"

Node::Node() {
	data = NULL;
	next = NULL;
	leftNode = NULL;
	rightNode = NULL;
}

Node::Node(char d, Node* n) {
	data = d;
	next = n;
	leftNode = NULL;
	rightNode = NULL;
}

Node::Node(char d, Node* l, Node* r) {
	data = d;
	leftNode = l;
	rightNode = r;
}