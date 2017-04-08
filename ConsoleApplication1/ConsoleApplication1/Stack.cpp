#include "Stack.h"

using namespace std;

Stack::Stack()
{
}


Stack::~Stack()
{
	//this->actual = nullptr;
}

void Stack::push(int elem)
{
	StackItem * item = new StackItem(this->last, elem);
	this->last = item;
}

int Stack::pull(void)
{
	int elem;
	if (this->last == 0) {
		throw "stack empty";
	}
	StackItem * privateLast = this->last;
	elem = privateLast->value;
	this->last = privateLast->prev;
	delete privateLast;
	return elem;
}