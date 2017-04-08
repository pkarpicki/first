#pragma once
class QueueItem
{
public:
	QueueItem(int);
	~QueueItem();

	int value;
	//QueueItem * prev;
	QueueItem * next;
};

