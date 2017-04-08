#pragma once
#include "QueueItem.h"

class Queue
{
public:
	Queue();
	~Queue();
	void push(int);
	int pull(void);

private:
	QueueItem * last;
	QueueItem * first;
};

