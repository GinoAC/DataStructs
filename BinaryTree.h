class BinaryTree {
	Node* root;
	int size;
public:
	BinaryTree();
	BinaryTree(char);
	void insert(char, Node*);
	char remove(char, Node*);
	int hasItem(char, Node*);
	void preOrderTrav(Node*);
	void inOrderTrav(Node*);
	void postOrderTrav(Node*);
};