#pragma once
#include "FIFOItem.h"
class FIFO
{
public:
	FIFO();
	~FIFO();
	void push(int);
	int pull(void);

private:
	FIFOItem * actual;
};

