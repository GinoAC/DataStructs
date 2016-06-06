// DataStructs.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	/*/Stack Code\*/
	/*Stack stack(20);
	char temp;
	std::cout << "stack empty? " << stack.isEmpty() << std::endl;
	for (int i = 65; i < 85; i++) {
		stack.push((char)i);
		std::cout << " " << (char)i;
	}
	std::cout << std::endl;
	
	temp = stack.peek();
	std::cout << "current top " << temp << std::endl;
	std::cout << "stack full? " << stack.isFull() << std::endl;

	//while the stack is not empty, pop the contents
	while (!stack.isEmpty()) {
		std::cout << " " << stack.pop();
	}
	std::cout << "\nenter q to complete.";
	std::cin >> temp; 
	*/

	/*/Queue code\*/
	/*Queue queue(20);
	char temp;
	std::cout << "Queue empty? " << queue.isEmpty() << std::endl;
	for (int i = 65; i < 85; i++) {
		queue.offer((char)i);
		std::cout << " " << (char)i;
	}
	std::cout << std::endl;

	temp = queue.peek();
	std::cout << "Current front " << temp << std::endl;
	std::cout << "Queue full? " << queue.isFull() << std::endl;

	//while the stack is not empty, pop the contents
	while (!queue.isEmpty()) {
		std::cout << " " << queue.poll();
	}
	std::cout << "\nEnter Q to complete: ";
	std::cin >> temp;*/

	/*LinkedList Code*/
	/*LinkedList test;
	test.add('1');
	test.add('2');
	test.add('3');
	test.add('4');
	test.printToConsole();
	
	test.add(0,'4');
	test.printToConsole();
	test.add(1, '3');
	test.printToConsole();
	test.add(2, '2');
	test.printToConsole();
	test.add(3, '1');
	test.printToConsole();

	test.set(0, '1');
	std::cout << test.get(0) << " ";
	test.set(1, '2');
	std::cout << test.get(1) << " ";
	test.set(2, '3');
	std::cout << test.get(2) << " ";
	test.set(3, '4');
	std::cout << test.get(3) << " " << std::endl;
	test.printToConsole();

	char* list = test.toArray();
	for (int i = 0; i < sizeof(list); i++)
		std::cout << list[i] << std::endl;

	std::cout << "removed: " << test.remove() << std::endl;
	test.printToConsole();
	std::cout << "removed: " << test.remove() << std::endl;
	test.printToConsole();
	std::cout << "removed: " << test.remove() << std::endl;
	test.printToConsole();
	std::cout << "removed: " << test.remove() << std::endl;
	test.printToConsole();

	std::cout << "\nRemoving individuals\n" << std::endl;

	std::cout << "removed: " << test.remove(0) << std::endl;
	test.printToConsole();
	test.add(0, '4');
	test.printToConsole();
	std::cout << "removed: " << test.remove(1) << std::endl;
	test.printToConsole();
	test.add(1, '3');
	test.printToConsole();
	std::cout << "removed: " << test.remove(2) << std::endl;
	test.printToConsole();
	test.add(2, '2');
	test.printToConsole();
	std::cout << "removed: " << test.remove(3) << std::endl;
	test.printToConsole();
	test.add('1');
	test.printToConsole();

	test.clear();
	test.printToConsole();

	std::cout << "\nEnter Q to complete: ";
	char temp;
	std::cin >> temp;*/

	/*Binary Tree*/
	BinaryTree tree;
	tree.insert('3',NULL);
	tree.insert('0', NULL);
	tree.insert('2', NULL);
	tree.insert('1', NULL);
	tree.insert('5', NULL);
	tree.insert('4', NULL);
	tree.insert('6', NULL);

	std::cout << "Entered: 3 0 2 1 5 4 6 \n";

	std::cout << "Preorder: ";
	tree.preOrderTrav(NULL);

	std::cout << "\nInorder: ";
	tree.inOrderTrav(NULL);

	std::cout << "\nPostorder: ";
	tree.postOrderTrav(NULL);

	std::cout << "\nHas the number 1? " << tree.hasItem('1', NULL) << std::endl;
	std::cout << "Has the number 9? " << tree.hasItem('9', NULL) << std::endl;

	std::cout << "\nEnter Q to complete: ";
	
	char temp;
	std::cin >> temp;
}