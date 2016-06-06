//Header file for a QUEUE implemented using a circular array
class Queue {
	int front, rear;
	int size, capacity;
	char* content;
public:
	Queue(int);
	void offer(char);
	char peek();
	char poll();
	int isFull();
	int isEmpty();
};