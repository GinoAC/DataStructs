#include "stdafx.h"

BinaryTree::BinaryTree() {
	root = NULL;
	size = 0;
}

BinaryTree::BinaryTree(char beginning) {
	root = new Node(beginning, NULL);
	size = 1;
}

void BinaryTree::insert(char item, Node* n) {

	Node* currentNode;
	if (n == NULL)
		currentNode = root;
	else
		currentNode = n;

	//If there is no root node, insert the item there
	if (root == NULL) {
		root = new Node(item, NULL);
		return;
		size += 1;
	}
	
	//Otherwise, if the root has data
	else if(item < currentNode->data){
		if (currentNode->leftNode == NULL) {
			currentNode->leftNode = new Node(item, NULL, NULL);
			size++;
		}
		else {
			insert(item, currentNode->leftNode);
		}
	}
	else if (item > currentNode->data) {
		if (currentNode->rightNode == NULL) {
			currentNode->rightNode = new Node(item, NULL, NULL);
			size++;
		}
		else {
			insert(item, currentNode->rightNode);
		}
	}
}

//void BinaryTree::insert(char item, Node* n) {
//	if (item < n->data) {
//		if (n->leftNode == NULL) {
//			n->leftNode = new Node(item, NULL, NULL);
//		}
//		else {
//			insert(item, n->leftNode);
//		}
//	}
//	else if (item > n->data) {
//		if (n->rightNode == NULL) {
//			n->rightNode = new Node(item, NULL, NULL);
//		}
//		else {
//			insert(item, n->rightNode);
//		}
//	}
//}

//Three scenarios:
//1. The removed node is the root node
//2. The removed node has one child.
//3. The removed node has two children
char BinaryTree::remove(char item, Node* n) {
	Node* currentNode = n;
	//Node* removedNode;
	//char removedItem;

	//if (currentNode == NULL)
	//	n = root;

	//if (root->data == item) {
	//	removedItem = root->data;
	//	root->data = NULL;
	//}

	////If the left node has the item
	//if (currentNode->leftNode->data == item) {
	//	//Take it
	//	removedNode = currentNode;
	//	removedItem = currentNode->data;
	//	if (currentNode->rightNode != NULL) {
	//		if (n->rightNode->rightNode != NULL) {

	//		}
	//	}
	//}

	return -1;
}

//Recursively searches for items in a list (preorder)
int BinaryTree::hasItem(char item, Node* n) {
	int hasIt = 0;
	Node* searchNode = n;
	if (searchNode == NULL)
		searchNode = root;
	if (searchNode->data == item) {
		hasIt = 1;
	}
	else if (item < searchNode->data) {
		if (searchNode->leftNode != NULL)
			hasIt = hasItem(item, searchNode->leftNode);
		else
			hasIt = 0;
	}
	else if (item > searchNode->data) {
		if (searchNode->rightNode != NULL)
			hasIt = hasItem(item, searchNode->rightNode);
		else
			hasIt = 0;
	}
	return hasIt;
}

//Preorder print the current node, the left subtree, then the right subtree
void BinaryTree::preOrderTrav(Node* n) {
	Node* currentNode;
	if (n == NULL)
		currentNode = root;
	else
		currentNode = n;

	std::cout << currentNode->data << " ";
	if (currentNode->leftNode != NULL)
		preOrderTrav(currentNode->leftNode);
	if (currentNode->rightNode != NULL)
		preOrderTrav(currentNode->rightNode);
	//return toReturn;
}

//Inorder print the left subtree, the current node, then the right subtree
void BinaryTree::inOrderTrav(Node* n) {
	Node* currentNode;
	char* toReturn = 0;
	if (n == NULL)
		currentNode = root;
	else
		currentNode = n;

	if (currentNode->leftNode != NULL)
		inOrderTrav(currentNode->leftNode);

	std::cout << currentNode->data << " ";

	if (currentNode->rightNode != NULL)
		inOrderTrav(currentNode->rightNode);
	//return toReturn;
}

//Inorder print the left subtree,  the right subtree, then the current node
void BinaryTree::postOrderTrav(Node* n) {
	Node* currentNode;
	char* toReturn = 0;
	if (n == NULL)
		currentNode = root;
	else
		currentNode = n;

	if (currentNode->leftNode != NULL)
		postOrderTrav(currentNode->leftNode);

	if (currentNode->rightNode != NULL)
		postOrderTrav(currentNode->rightNode);

	std::cout << currentNode->data << " ";
	//return toReturn;
}