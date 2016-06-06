class Stack {
   int maxSize;
   int top;
   char* content;
public:
   Stack(int);
   void push(char);
   char pop();
   char peek();
   int isEmpty();
   int isFull();
};