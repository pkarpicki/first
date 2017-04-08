#include "StackItem.h"



StackItem::StackItem(StackItem * prev, int value)
{
	this->prev = prev;
	this->value = value;
}


StackItem::~StackItem()
{
}
