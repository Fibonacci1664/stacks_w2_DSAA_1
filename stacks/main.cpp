// Stacks lab exercise
// Adam Sampson <a.sampson@abertay.ac.uk>

#include <cassert>
#include <iostream>
#include <stack>

#include "CustomStack.h"

// Import things we need from the standard library
using std::cout;
using std::endl;
using std::stack;

// Test the stack class.
void testStack()
{
	CustomStack<int> myStack;

	assert(myStack.empty());

	myStack.push(7);
	myStack.push(5);
	/*myStack.push(3);
	myStack.push(1);
	myStack.push(9);*/

	assert(myStack.top() == 5);

	std::cout << "Top value: " << myStack.top() << '\n';

	myStack.pop();

	assert(myStack.top() == 7);

	std::cout << "Top value: " << myStack.top() << '\n';

	assert(myStack.size() == 1);

	myStack.pop();

	std::cout << "Is empty: " << myStack.empty() << '\n';		// True = 1, False = 0
}

int main(int argc, char *argv[])
{
	testStack();

	return 0;
}