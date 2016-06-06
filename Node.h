class Node {
public:
	Node();
	Node(char, Node*);
	Node(char, Node*, Node*);
	char data;
	Node* next;
	Node* leftNode;
	Node* rightNode;
};