#include "Item.h"



Item::Item(Item * prev, int value)
{
	this->prev = prev;
	this->value = value;
}


Item::~Item()
{
}
