#include "Queue.h"



Queue::Queue()
{
	this->first = nullptr;
	this->last = nullptr;
}


Queue::~Queue()
{
}

void Queue::push(int n)
{
	QueueItem * item = new QueueItem(n);


	if (this->first == nullptr)
	{
		this->first = item;
	}
	
	if(this->last != nullptr)
	{
		this->last->next = item;
	}

	this->last = item;
}

int Queue::pull(void)
{
	if(this->first == nullptr)
	{
		throw "queue empty";
	}
	int n = this->first->value;
	QueueItem * actualFirst = this->first;
	this->first = this->first->next;
	delete actualFirst;
	return n;
}
