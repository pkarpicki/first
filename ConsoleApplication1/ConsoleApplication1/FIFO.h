#pragma once
class FIFO
{
public:
	FIFO();
	~FIFO();
	void push(int);
	int pull(void);
};

