#include "FIFO.h"

using namespace std;

FIFO::FIFO()
{
}


FIFO::~FIFO()
{
	//this->actual = nullptr;
}

void FIFO::push(int elem)
{
	FIFOItem * item = new FIFOItem(this->actual, elem);
	this->actual = item;
}

int FIFO::pull(void)
{
	int elem;
	if (this->actual == 0) {
		throw "stack ended";
	}
	FIFOItem * privateLast = this->actual;
	elem = privateLast->value;
	this->actual = privateLast->prev;
	delete privateLast;
	return elem;
}