#include "FIFO.h"



FIFO::FIFO()
{
}


FIFO::~FIFO()
{
}

void FIFO::push(int elem)
{
	Item * item = new Item(this->last, elem);
	this->last = item;
}

int FIFO::pull(void)
{
	int elem;
	elem = last->value;
	this->last = last->prev;
	return elem;
}