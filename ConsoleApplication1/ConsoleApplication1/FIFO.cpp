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
	Item * privateLast = this->last;
	elem = privateLast->value;
	this->last = privateLast->prev;
	delete privateLast;
	return elem;
}