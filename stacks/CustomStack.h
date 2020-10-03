#ifndef CUSTOMSTACK_H
#define CUSTOMSTACK_H

/** A stack of integers. */
template <typename T> class CustomStack
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
	void push(T value)
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
	T& top()
	{
		return nums[stackTop];
	}

	/** Return the number of items on the stack. */
	T size()
	{
		return (popCount + stackTop);
	}

private:
	T nums[10];
	T stackTop = -1;
	T popCount = 0;
};

#endif