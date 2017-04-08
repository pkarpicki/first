#pragma once
#include "StackItem.h"
class Stack
{
public:
	Stack();
	~Stack();
	void push(int);
	int pull(void);

private:
	StackItem * last;
};

