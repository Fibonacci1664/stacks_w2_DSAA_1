#ifndef CUSTOMSTACK_H
#define CUSTOMSTACK_H

/** A stack of integers. */
class CustomStack
{
public:
	/** Return true if the stack is empty, false otherwise. */
	bool empty()
	{
		if (stackTop < 0)
		{
			return true;
		}

		return false;
	}

	/** Add an item to the top of the stack. */
	void push(int value)
	{
		++stackTop;
		nums[stackTop] = value;		
	}

	/** Remove the item at the top of the stack. */
	void pop()
	{
		nums[stackTop] = 0;
		--stackTop;
		++popCount;
	}

	/** Return the item at the top of the stack. */
	int top()
	{
		return nums[stackTop];
	}

	/** Return the number of items on the stack. */
	int size()
	{
		return (popCount + stackTop);
	}

private:
	int nums[10];
	int stackTop = -1;
	int popCount = 0;
};

#endif