#include "QueueItem.h"



QueueItem::QueueItem(int value)
{
	this->next = nullptr;
	this->value = value;
}


QueueItem::~QueueItem()
{
}
