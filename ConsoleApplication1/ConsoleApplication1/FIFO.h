#pragma once
#include "Item.h"
class FIFO
{
public:
	FIFO();
	~FIFO();
	void push(int);
	int pull(void);

private:
	Item * actual;
};

